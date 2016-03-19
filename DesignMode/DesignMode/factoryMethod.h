#include<iostream>
using namespace std;
/**********************************************************
// Method: 
// Description: ��������ģʽ
// Author:  
// Date: 2016/03/19 16:28
// Returns: 
// Parameter: 
// History:
// G:\VisualStudio2013Projects\DesignMode\DesignMode\factoryMethod.h
**********************************************************/

/*�������׷湤��*/

/*�׷���*/
class LeiFeng
{
public:
	void sweep()
	{
		cout << "ɨ��" << endl;
	}
	void wash()
	{
		cout << "ϴ��" << endl;
	}

private:

};

/*ѧ�׷�Ĵ�ѧ��*/
class student : public LeiFeng
{
public:

private:

};

/*ѧ�׷��־Ը��*/
class volunteer : public LeiFeng
{
public:

private:

};

/*�׷湤���ӿ�*/
class iFactory
{
public:
	virtual	LeiFeng *createLeiFeng() = 0;

private:

};


/*ѧ���׷湤��*/
class studentFactory :public iFactory
{
public:
	LeiFeng* createLeiFeng()
	{
		return new student;
	}
};

/*־Ը���׷湤��*/
class volunteerFactory :public iFactory
{
public:
	LeiFeng* createLeiFeng()
	{
		return new volunteer;
	}
};

