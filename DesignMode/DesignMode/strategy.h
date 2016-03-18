#include <iostream>
using namespace std;
class cashSuper
{
public:
	virtual double getMoney(double preMoney) = 0;
private:

};

class normalCash:public cashSuper
{
public:
	
	
	double getMoney(double preMoney)
	{
		return preMoney;
	}
private:

};

class saleCash:public cashSuper
{
public:
	saleCash(double rebate)
	{
		this->rebate = rebate;
	}
	double getMoney(double preMoney)
	{
		return rebate*preMoney;
	}

private:
	double rebate = 1.0f;
};

class cashReturn:public cashSuper
{
public:
	cashReturn(double setMoney,double returnMoney)
	{
		this->setMoney = setMoney;
		this->returnMoney = returnMoney;
	}
	double getMoney(double preMoney)
	{
		int scale = preMoney / setMoney;
		return preMoney - scale*returnMoney;
	}

private:
	double setMoney = 0;
	double returnMoney = 0;
};
enum cashType
{
	normalType,
	rebateType,
	returnType
};
class cashContext
{
public:
	cashContext(int cashType)
	{
		switch (cashType)
		{
		case normalType:
			this->cashStrategy = new normalCash();
			break;
		case  rebateType:
			this->cashStrategy = new saleCash(0.8);
			break;
		case returnType:
			this->cashStrategy = new cashReturn(300, 80);
			break;
		default:
			break;
		}
	}
	~cashContext()
	{
		delete cashStrategy;
	}
	double getFinalMoney(double preMoney)
	{
		return this->cashStrategy->getMoney(preMoney);
	}
private:
	cashSuper *cashStrategy = NULL;
};