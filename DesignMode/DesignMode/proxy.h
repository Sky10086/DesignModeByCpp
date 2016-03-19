#include<iostream>
#include <string>
using namespace std;
/**********************************************************
// Method: 
// Description: 代理模式
// Author: 
// Date: 2016/03/19 14:48
// Returns: 
// Parameter: 
// History:
// G:\VisualStudio2013Projects\DesignMode\DesignMode\proxy.h
**********************************************************/

/*送礼物动作接口*/
class iGiveGift
{
public:
	virtual void giveDolls() = 0;
	virtual void giveFlowers() = 0;
	virtual void giveChocolate() = 0;

private:

};

/*追求者类，实现接口中的纯虚函数*/
class pursuit:public iGiveGift
{
public:
	string girlName;
	pursuit(string setName)
	{
		this->girlName = setName;
	}
	void giveDolls()
	{
		cout << girlName << " 这是给你的洋娃娃" << endl;
	}
	void giveFlowers()
	{
		cout << girlName << " 这是给你的花花" << endl;
	}
	void giveChocolate()
	{
		cout << girlName << " 这是给你的巧克力" << endl;
	}
private:

};

/*代理这类，代替委托者去做任务*/
class proxy : public iGiveGift
{
public:
	pursuit *person;
	proxy(string setName)
	{
		person = new pursuit(setName);
	}
	~proxy()
	{
		delete person;
	}
	void giveDolls()
	{
		person->giveDolls();
	}
	void giveFlowers()
	{
		person->giveFlowers();
	}
	void giveChocolate()
	{
		person->giveChocolate();
	}
private:

};


