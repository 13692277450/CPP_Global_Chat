#include <iostream>
using namespace std;

class AbastractDrinking {
public:
	virtual void Boil() = 0;

	virtual void Brew() = 0;

	virtual void PourInCup() = 0;

	virtual void PutSomething() = 0;

	void makeDrinking() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Sugger : public AbastractDrinking {
public:
	virtual void Boil() {
		cout << "Boil" << endl;
	}

	virtual void Brew() {
		cout << "Brew" << endl;
	}
	virtual void PourInCup() {
		cout << "PourInCup" << endl;
	}
	virtual void PutSomething() {
		cout << "PutSomething" << endl;
	}
};


class Honey : public AbastractDrinking {
public:
	virtual void Boil() {
		cout << "Boil honey" << endl;
	}
	virtual void Brew() {
		cout << "Brew honey" << endl;
	}
	virtual void PourInCup() {
		cout << "PourInCup honey" << endl;
	}
	virtual void PutSomething() {
		cout << "PutSomething honey" << endl;
	}
};

void doWork(AbastractDrinking* abs) {
	abs->makeDrinking();
	delete abs;
}
void test01() {

	doWork(new Sugger);
	doWork(new Honey);
}

int main() {
	cout << "Hello, World!" << endl;
	test01();

}