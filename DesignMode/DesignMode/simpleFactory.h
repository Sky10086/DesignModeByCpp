#include<iostream>
using namespace std;

class Opreration1
{
public:
	Opreration1();
	~Opreration1();
	static float GetResult(float num1, float num2, char opt)
	{
		float result = 0.0f;
		switch(opt)
		{
		case '+':
			result = num2 + num1;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1*num2;
			break;
		case '/':
			if (num2 == 0)
			{
				cout << "´íÎó£¬³ýÊýÎª0£¡" << endl;
				break;
			}
			else
			{
				result = num1 / num2;
				break;
			}
		default:
			break;
		}
		return result;
	}

private:

};

Opreration1::Opreration1()
{
}

Opreration1::~Opreration1()
{
}

class Opreration2
{
public:
	void setNum1(float giveNum1)
	{
		num1 = giveNum1;
		return;
	}
	float getNum1()
	{
		return num1;
	}
	void setNum2(float giveNum2)
	{
		num2 = giveNum2;
		return;
	}
	float getNum2()
	{
		return num2;
	}
	virtual float getResult()
	{
		return 0;
	}
	float test();
private:
	float num1 = 0;
	float num2 = 0;

};

float Opreration2::test()
{
	return 0;
}
class Add : public Opreration2
{
public:float getResult()
{
	float result = 0;
	result = getNum1() + getNum2();
	return result;
}
};

class Sub : public Opreration2
{
public:
	Sub(){};
	float getResult()
	{
		float result = 0;
		result = getNum1() - getNum2();
		return result;
	}
private:

};
class Mul :public Opreration2
{
public:
	float getResult()
	{
		float result = 0;
		result = getNum1()*getNum2();
		return result;
	}

private:

};


class Div:public Opreration2
{
public:
	float getResult()
	{
		float result = 0;
		if (0 == getNum2())
		{
			cout << "³ýÊýÎª0°¡£¡£¡£¡£¡" << endl;
			return result;
		}
		result = getNum1() / getNum2();
		return result;
	}
private:

};

class Opreration2Factory
{
public:
	static Opreration2* getOpretion(char choose)
	{
		Opreration2 *res = NULL;
		switch (choose)
		{
		case '+':
			res = new Add();
			break;
		case '-':
			res = new Sub();
			break;
		case '*':
			res = new Mul();
			break;
		case '/':
			res = new Div();
			break;
		default:
			break;
		}
		return res;
	}

private:

};


class test1 : Opreration1
{
public:
	
private:

};


