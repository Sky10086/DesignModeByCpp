#include"simpleFactory.h"
#include "strategy.h"
#include "decorator.h"
using namespace std;
enum ModeType
{
	simpleFactory,
	strategy,
	decorator
};
void testSimpleFactory()
{
	Opreration2 *opr = NULL;
	opr = Opreration2Factory::getOpretion('/');
	opr->setNum1(8);
	opr->setNum2(3);
	cout << opr->getResult() << endl;
	return;
}

void testStrategy()
{
	cashContext cash(returnType);
	cout<<cash.getFinalMoney(800)<<endl;
}

void testDecorator()
{
	person *xc = new person("Ð¡²Ë");
	TShirts *tx = new TShirts;
	bigTrouser *kk = new bigTrouser;
	shoes *qiuxie = new shoes;

	tx->decorate(xc);
	kk->decorate(tx);
	qiuxie->decorate(kk);

	qiuxie->show();
}

void testMode(int ModeType)
{
	switch (ModeType)
	{
	case simpleFactory:
		testSimpleFactory();
		break;
	case strategy:
		testStrategy();
		break;
	case decorator :
		testDecorator();
		break;
	default:
		break;
	}
}