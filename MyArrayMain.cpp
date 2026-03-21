//#include <iostream>
//#include <string>
//#include "MyArray.hpp"
//
//using namespace std;
//
//void printMyArray( MyArray<int>& arr) {
//	cout << "数组大小为：" << arr.getSize() << endl;
//	for (int i = 0; i < arr.getSize(); i++) {
//		cout << "arr[" << i << "] = " << arr[i] << endl;
//	}
//}
//
//void test01() {
//	MyArray <int >arr1(5);
//	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
//	for (int i = 0; i < 5; i++) {
//		arr1.Push_Back(i);
//	}
//
//	cout << "arr1的容量为：" << arr1.getSize() << endl;
//	printMyArray(arr1);
//	MyArray <int >arr2(arr1);
//	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
//	printMyArray(arr2);
//
//	arr2.Pop_back();
//	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
//	printMyArray(arr2);
//	//MyArray <int >arr2(arr1); //调用拷贝构造函数
//	//MyArray <int>arr3(100);
//	//arr3 = arr1; //调用赋值运算符
//
//}
//
//int main() {
//	test01();
//  
//}