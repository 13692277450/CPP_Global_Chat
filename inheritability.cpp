#include <iostream>					  s
#include "Circle.h"
#include "Point.h"
#include <string>
using namespace std;

class BasePage {
	public:
		void header() {
			cout << "public header" << endl;
	 }
		void footer() {
			cout << "public footer" << endl;
	}
		void body() {
			cout << "public body"  << endl;
	}
		void left() {
		 cout << "public left" << endl;
		}
		void right() {
			cout << "public right" << endl;
		}
};
class Java : public BasePage {
	public:
		void content() {
			cout << "Java content" << endl;
		}
};
class Python : public BasePage {
	public:
		void content() {
			cout << "Python content" << endl;
		}
};
class Cpp : public BasePage {
	public:
		void content() {
			cout << "Cpp content" << endl;
		}
};
void test01() {
	cout << "test01" << endl;
	Java java;
	java.header();
	java.footer();
	java.body();
	java.left();
	java.right();
	java.content();
	cout << "======================================" << endl;
	Python python;
	python.header();
	python.footer();
	python.body();
	python.left();
	python.right();
	python.content();
	cout << "==========================================" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.body();
	cpp.left();
	cpp.right();
	cpp.content();

}



int main() {
	test01();
	return 0;
}