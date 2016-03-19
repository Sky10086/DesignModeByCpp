#include<iostream>
#include <string>
using namespace std;
/**********************************************************
// Method: 
// Description: ����ģʽ
// Author: 
// Date: 2016/03/19 14:48
// Returns: 
// Parameter: 
// History:
// G:\VisualStudio2013Projects\DesignMode\DesignMode\proxy.h
**********************************************************/

/*�����ﶯ���ӿ�*/
class iGiveGift
{
public:
	virtual void giveDolls() = 0;
	virtual void giveFlowers() = 0;
	virtual void giveChocolate() = 0;

private:

};

/*׷�����࣬ʵ�ֽӿ��еĴ��麯��*/
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
		cout << girlName << " ���Ǹ����������" << endl;
	}
	void giveFlowers()
	{
		cout << girlName << " ���Ǹ���Ļ���" << endl;
	}
	void giveChocolate()
	{
		cout << girlName << " ���Ǹ�����ɿ���" << endl;
	}
private:

};

/*�������࣬����ί����ȥ������*/
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


