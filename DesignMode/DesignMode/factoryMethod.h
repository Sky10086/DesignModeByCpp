#include<iostream>
using namespace std;
/**********************************************************
// Method: 
// Description: 工厂方法模式
// Author:  
// Date: 2016/03/19 16:28
// Returns: 
// Parameter: 
// History:
// G:\VisualStudio2013Projects\DesignMode\DesignMode\factoryMethod.h
**********************************************************/

/*场景：雷锋工厂*/

/*雷锋类*/
class LeiFeng
{
public:
	void sweep()
	{
		cout << "扫地" << endl;
	}
	void wash()
	{
		cout << "洗衣" << endl;
	}

private:

};

/*学雷锋的大学生*/
class student : public LeiFeng
{
public:

private:

};

/*学雷锋的志愿者*/
class volunteer : public LeiFeng
{
public:

private:

};

/*雷锋工长接口*/
class iFactory
{
public:
	virtual	LeiFeng *createLeiFeng() = 0;

private:

};


/*学生雷锋工厂*/
class studentFactory :public iFactory
{
public:
	LeiFeng* createLeiFeng()
	{
		return new student;
	}
};

/*志愿者雷锋工厂*/
class volunteerFactory :public iFactory
{
public:
	LeiFeng* createLeiFeng()
	{
		return new volunteer;
	}
};

