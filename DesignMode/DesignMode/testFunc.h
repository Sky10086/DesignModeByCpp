#include"simpleFactory.h"
#include "strategy.h"
#include "decorator.h"
#include "proxy.h"
#include "factoryMethod.h"
using namespace std;
enum ModeType
{
	simpleFactory,
	strategy,
	decorator,
	proxyFlag,
	factoryMethod
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

void testProxy()
{
	proxy *pProxy = new proxy("Han mei mei");

	pProxy->giveDolls();
	pProxy->giveFlowers();
	pProxy->giveChocolate();
	return;
}
void testFactoryMethod()
{
	iFactory *factory = new volunteerFactory;
	LeiFeng *volunteer1 = factory->createLeiFeng();
	volunteer1->sweep();
	volunteer1->wash();
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
	case proxyFlag:
		testProxy();
		break;
	case factoryMethod:
		testFactoryMethod();
		break;
	default:
		break;
	}
}