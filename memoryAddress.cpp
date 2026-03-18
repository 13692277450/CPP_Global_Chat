#include <iostream>
#include "Circle.h"
#include "Point.h"
using namespace std;

class Person3 {

public:
	Person3(int age) {
		m_Age = age;
		this->age = age;
	};

	void PersonaAddAge(Person3& p) {
		this->age += p.age;
	}
	int m_Age;
	int age;
};

void test01() {
	Person3 p1(20);
	cout << "p1的年龄为：" << p1.m_Age << endl;
	Person3 p2(10);
	cout << "p2的年龄为：" << p2.age << endl;
}
void test02() {
	Person3 p1(22);
	Person3 p2(100);
	p2.PersonaAddAge(p1);
	cout << "p2的年龄为：" << p2.age << endl;
}

int main() {
	test02();
	system("pause");
	return 0;
}

//class Person1 {
//           int age1;
//public:
//    //构造函数：构造函数的名字要和类名相同，并且没有返回值类型。 只有在创建对象时才会调用构造函数，可以重载。
//
//    Person1() {
//        cout << "Person()" << endl;
//    }
//
//    Person1(int a) {
//        age1 = a;
//        cout << "Parameter Person()" << endl;
//    }
//    Person1(int a, int b, int c) : m_Age(a), m_B(b), m_C(c) {
//        cout << "Parameter Person()" << endl;
//    }
//    Person1(const Person1 &p1 )  {
//        //拷贝构造函数：拷贝构造函数的名称要和类名相同
//        age1 = p1.age1;
//        cout << "copy Person()" << endl;
//    }
//    //析构函数：析构函数的名称要和类名相同，并且在前面加上波浪号（~），并且没有返回值类型。 只有在对象被销毁时才会调用析构函数。
//    //对象的生命周期是从创建到销毁，调用析构函数1次。 不可以加void修饰符。不可以有参数。不可以重载
//    ~Person1() {
//        cout << "~Person()" << endl;
//    } 
//    int m_Age;
//    int m_B;
//    int m_C;
//
//};
//
//void func() {
//    //调用拷贝构造函数
//    Person1 p;
//    Person1 p2(10);
//    Person1 p3(p2);
//                    //显式调用拷贝构造函数
//    Person1 p4;
//    Person1 p5 = Person1(10);
//    Person1 p6 = Person1(p5);
//    //隐试转换法调用拷贝构造函数
//    Person1 p7(30, 40, 50);
//    cout << p7.m_Age << endl;
//    cout << p7.m_B << endl;
//    cout << p7.m_C << endl;
//
//
//}
//
//int main() {
//    func();
//    //Person1 p;
//    system("pause");
//    return 0;
//}



//void isInCircle(Circle& c, Point& p)
//{
//    int distance = (c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) +
//        (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//    int rDistance = c.getR() * c.getR();
//    if (distance == rDistance) {
//        cout << "在圓上" << endl;
//        return ;
//    }
//    else if (distance > rDistance) {
//        cout << "在圓wai" << endl;
//        return ;
//    }
//    else
//    {
//        cout << "在圓內" << endl;
//        return ;
//    }
//}
//
//int main() {
//
//    Circle c1;
//    c1.setR(10);
//    Point center;
//    center.setX(10);
//    center.setY(0);
//    c1.setCenter(center);
//
//    Point p;
//    p.setX(10);
//    p.setY(10);
//    isInCircle(c1, p);
//    
//
//    return 0;       
//}





//#include <iostream>
//
//using namespace std;
//
//int* func() {
//    int a = 10;
//    return &a;
//}
//int* func1() {
//	int* p = new int(10);  // 堆區的數據油程序員管理，程序員需要手動釋放內存。delete
//        return p;
//}
//
//int* funct2() {
//   int *p = new int(10);
//   return p;
//}
//
//void test01() {
//    int* p = funct2();
//    cout << *p;
//	delete p;  // 釋放內存，否則會造成內存泄漏。
//    }
//
//
//
//
//
//
//
//void func3(int &ref) {
//    ref = 100;
//}
//
//class Circle {
//public:
//    int m_r;
//    double m_area() {
//        return 3.14 * m_r * m_r;
//    }
//};
//
//int main5() {
//
//    //int a = 10;
//    //int &ref = a;
//    //ref = 20;
//    //cout << "a:" << a << endl;
//    //cout << "ref:" << ref << endl;
//    //func3(ref);
//    //cout << "a:" << a << endl;
//    //cout << "ref:" << ref << endl;
//    //return 0;
//    Circle c1;
//    c1.m_r = 10;
//    cout << c1.m_area() << endl;
//
//}