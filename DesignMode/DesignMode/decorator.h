#include <iostream>
using namespace std;
class person
{
public:
	person(string setName)
	{
		this->name = setName;
	}
	person()
	{}
	virtual void show()
	{
		printf("%s%s\n", "װ���", name);
	}

private:
	string name;
};

class clothes : public person
{
public:
	void decorate(person *setComponent)
	{
		this->component = setComponent;
	}
	void show()
	{
		if (component)
		{
			component->show();
		}
	}

private:
	person *component = NULL;
};

class TShirts:public clothes
{
public:
	void show()
	{
		cout << "��T��" << endl;
		clothes::show();
		return;
	}

private:

};

class bigTrouser:public clothes
{
public:
	void show()
	{
		cout << "���" << endl;
		clothes::show();
		return;
	}

private:

};

class shoes : public clothes
{
public:
	void show()
	{
		cout << "��Ь" << endl;
		clothes::show();
		return;
	}
};


