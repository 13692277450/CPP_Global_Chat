//#include <fstream>
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//template <class T1, class T2>
//class Person {
//public:
//	Person(T1 name, T2 age);
//	//{
//	//	this.m_Name = name;
//	//	this.m_Age = age;
//							
//	//}
//	void show(); /*{
//		cout << "Name: " << m_Name << endl;
//		cout << "Age: " << m_Age << endl;
//	}*/
//	T1 m_Name;
//	T2 m_Age;
//};
//
//template <class T1, class T2>
//Person<T1,T2>::Person(T1 name, T2 age) {
//	this->m_Name = name;
//	this->m_Age = age;
//}
//template <class T1, class T2>
//void Person<T1, T2>::show() {
//	cout << "Name: " << this->m_Name << endl;
//	cout << "Age: " << this->m_Age << endl;
//}
//
//
//void test01() {
//	Person<string, int> p1("Tom", 20);
//	p1.show();
//}
//
//int main() {
//
//	test01();
//	return 0;
//}
//
//template <class T>
//class Base {
//    T m;
//};
//
//class Son :public Base<int> {
//    
//};
//
//template <class T1, class T2>
//class Son2:public Base<T2> {
//public:
//    Son2() {
//        cout << "Son1()" << typeid(T1).name()<< endl;
//        cout << "Son2()" << typeid(T2).name()<< endl;
//    
//    }
//    T1 obj;
//};                      
//
//void test01() {
//    Son2<int, char>S2;
//    
//}
//int main () {
//    test01();
//    return 0;
//}

//
//template <typename T>
//
//void mySwap (T &a, T &b) {
//    T temp = a;
//    a = b;
//    b = temp;
//}
//
//int main() {
//    int a = 10;
//    int b = 20;
//    cout << "Before swap: a=" << a << ", b=" << b << endl;
//    mySwap(a, b);
//    cout << "After swap: a=" << a << ", b=" << b << endl;
//    return 0;
//}

//int main() {
//    ofstream ofs("test.txt", ios::out | ios::app | ios::binary);
//    ofs << "Hello, world!" << endl;
//    ofs.close();
//    std::ifstream file("test.txt");
//    std::string line;
//    while (getline(file, line)) {
//        // 处理每一行数据...
//        cout << line << endl;
//    }
//    return 0;
//}