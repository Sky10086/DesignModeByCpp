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
		printf("%s%s\n", "×°°çµÄ", name);
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
		cout << "´óTÐô" << endl;
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
		cout << "¿å¿ã" << endl;
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
		cout << "ÇòÐ¬" << endl;
		clothes::show();
		return;
	}
};


