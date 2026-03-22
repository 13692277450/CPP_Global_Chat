#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <string>
#include <deque>



using namespace std;

 void printDeque(const deque<int>& d) {
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); ++it) {
        cout << *it << " ";
    }
	cout << endl;

 }
 void test02() {
     deque<int> d;
     d.push_back(10);
     d.push_back(20);
     d.push_back(30);
     d.push_back(40);
     d.push_back(50);
     printDeque(d);
     deque<int> d2(d.begin(), d.end()-1);
     printDeque(d2);
     deque<int> d3(d2);
     printDeque(d3);
     deque<int> d4;
     d4 = d3;
     printDeque(d4);
 }

 int main() {
     test02();
     return 0;
 }

///////////////////////////////////////////////////////////////////////////////////

//void test01() {
//    vector <vector<int>> v;
//
//    vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//
//    for (int i=0;i<4;i++) {
//            v1.push_back(i);
//            v2.push_back(i+1);
//            v3.push_back(i+2);
//            v4.push_back(i+3);         
//	}
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//    v.push_back(v4);
//    for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
//        for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
//            cout << *vit << " " ;
//        }
//        cout << endl;
//	}
//    vector<int>v22;
//	v22.push_back(1);
//    v22.insert(v22.begin(), 3, 2000);
//    for (vector<int>::iterator it = v22.begin(); it != v22.end(); it++) {
//		cout << "New it:" << *it << " ";
//    }
//
//}

//vector<int>(v).swap(v1);  //vector<int>(v).swap(v1);  //交换v和v1的内存，v1原来是空的，现在有了v的内存，v原来有的内存被释放掉了,收缩内存，减少内存占用

//v.reserve(100000); //预留空间，减少内存的重新分配次数，提高效率



//int main() {
//    test01();
//    return 0;
//}


//class PPP7 {
//public:
//    PPP7(string name, int age)
//        : m_Name(name), m_Age(age) {
//    }
//
//    string m_Name;
//    int m_Age;
//    
//};
//
//
//void test01() {
//    vector<PPP7*> v;
//    PPP7 p1("Tom", 20);
//    v.push_back(&p1);
//	PPP7 p2("Jerry", 18);
//	v.push_back(&p2);
//   
//    for (vector<PPP7*>::iterator it = v.begin(); it != v.end(); it++) {
//        cout << (*it)->m_Name << " " << (*it)->m_Age << endl;
//    }


    //vector<PPP7> v;
    //PPP7 p1("Tom", 20);
    //v.push_back(p1);
    //PPP7 p2("Jerry", 18);
    //v.push_back(p2);

    //for (vector<PPP7>::iterator it = v.begin(); it != v.end(); it++) {
    //    cout << (*it).m_Name << " " << (*it).m_Age << endl;
    //}
//
//}
//
//int main() {
//    test01();
//}

//
//void myPrint(int val) {
//    cout << val << " " ;
//}
//int main() {
//    vector<int> v;
//    v.push_back(12);
//    v.push_back(25);
//    v.push_back(13);
//    v.push_back(64);
//    v.push_back(57);
//    v.push_back(32);
//    vector<int>::iterator itBegin = v.begin();
//    vector<int>::iterator itEnd = v.end();
//    while (itBegin != itEnd) {
//        cout << *itBegin << " " ;
//        itBegin++;
//    }
//    cout << endl;
//
//    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//        cout << *it << " " ;
//    
//    }
//    cout << endl;
//
//    for_each(v.begin(), v.end(), myPrint);
//    itBegin = v.begin();
//    sort(itBegin, itEnd);
//    //sort(v.begin(), v.end());
//
//    cout << endl;
//    for (auto it = v.begin(); it != v.end(); ++it) {
//        cout << *it << " " ;
//    }
//    cout << endl;
   /* vector<int> v = {1, 2, 3, 4, 5};
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    return 0;*/
//}
