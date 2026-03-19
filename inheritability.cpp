#include <iostream>					  s
#include "Circle.h"
#include "Point.h"
#include <string>
using namespace std;

// 开发人员命令提示工具，在vs程序里面
//		vs cmd line : cl /d1（one） reportSingleClassLayoutJava Circle.cpp
// 

class Animal {

public:
	virtual void eat() {
		cout << "animal eat" << endl;
	}
};

class Wolf : public Animal {
public:
	void eat() {
		cout << "dog eat meat" << endl;
	}
};

class Cow : public Animal {
public:
	void eat() {
		cout << "cow eat grass" << endl;
	}

};
void DoEat(Animal & animal) {
	animal.eat();
};
void test02() {
	cout << "test02" << endl;
	Wolf wolf;
	DoEat(wolf);
	Cow cow;
	DoEat(cow);
}

void test01() {
	cout << "test01" << endl;
	cout << "size of animal:  " << sizeof(Animal) << endl;
}	

int main() {
	test01();
}






//
//class BasePage {
//	public:
//		void header() {
//			cout << "public header" << endl;
//	 }
//		void footer() {
//			cout << "public footer" << endl;
//	}
//		void body() {
//			cout << "public body"  << endl;
//	}
//		void left() {
//		 cout << "public left" << endl;
//		}
//		void right() {
//			cout << "public right" << endl;
//		}
//};
//
//class Java : public BasePage {
//	public:
//		void content() {
//			cout << "Java content" << endl;
//		}
//};
//
//class Python : public BasePage {
//	public:
//		void content() {
//			cout << "Python content" << endl;
//		}
//};
//class Cpp : public BasePage {
//	public:
//		void content() {
//			cout << "Cpp content" << endl;
//		}
//};
//void test01() {
//	cout << "test01" << endl;
//	Java java;
//	java.header();
//	java.footer();
//	java.body();
//	java.left();
//	java.right();
//	java.content();
//	cout << "======================================" << endl;
//	Python python;
//	python.header();
//	python.footer();
//	python.body();
//	python.left();
//	python.right();
//	python.content();
//	cout << "==========================================" << endl;
//	Cpp cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.body();
//	cpp.left();
//	cpp.right();
//	cpp.content();
//
//}
//
//
//
//int main() {
//	test01();
//	return 0;
//}