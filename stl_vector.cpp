#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <string>
#include <deque>
#include <queue>
#include <list>



using namespace std;




//
//class PersonU {
//public:
//	PersonU(string name, int age, int height) {
//		this->m_Name = name;
//		this->m_Age = age;
//		this->m_Height = height;;
//	}
//
//	string m_Name;
//	int m_Age;
//	int m_Height;
//};
//
//bool comparePerson(PersonU& v1, PersonU& v2) {
//
//	if (v1.m_Age == v2.m_Age) {
//		return v1.m_Height < v2.m_Height;
//	}
//	else {
//		return 	 v1.m_Age < v2.m_Age;
//	}
//
//}
//void test01() {
//	list<PersonU>L9;
//	L9.push_back(PersonU("张三", 18, 175));
//	L9.push_back(PersonU("李四", 30, 180));
//	L9.push_back(PersonU("王五", 22, 185));
//	L9.push_back(PersonU("赵六", 30, 190));
//	L9.push_back(PersonU("孙七", 26, 195));
//	L9.push_back(PersonU("周八", 30, 170));
//	L9.push_back(PersonU("吴九", 22, 170));
//	L9.push_back(PersonU("郑十", 18, 170));
//	L9.push_back(PersonU("王十", 26, 170));
//
//	for (list<PersonU>::iterator it = L9.begin(); it != L9.end(); it++) {
//		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
//	}
//	cout << endl;
//	L9.sort(comparePerson);
//	for (list<PersonU>::iterator it = L9.begin(); it != L9.end(); it++) {
//		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
//	}
//}
//
//int main() {
//	test01();
//}


//
//void printList(list<int>& L) {
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
//	
//		cout << *it << "   ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//	cout << endl;
//
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	list<int>L4(10, 10000);
//
//
//	printList(L4);
//	L4.insert(L4.begin(), 19900);
//	L4.insert(++L4.begin(), 29900);
//	L4.push_front(10999);
//	printList(L4);
//	cout << endl;
//	L4.erase(++L4.begin());
//	printList(L4);
//	cout << endl;
//
//}
//int main() {
//	test01();
//
//}

//
//class PersonY {
//public:
//	PersonY(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//
//};
//
//void test01() {
//	queue<PersonY>q;
//	PersonY p1("唐僧", 30);
//	PersonY p2("孙悟空", 1000);
//	PersonY p3("猪八戒", 900);
//	PersonY p4("沙僧", 800);
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	while (!q.empty()) {
//		cout << "Front is: " << q.front().m_Name << "Age:" << q.front().m_Age << endl;
//		cout << "Back is: " << q.back().m_Name << "Age:" << q.back().m_Age << endl;
//		cout << "&q address: " << &q.front() << endl;
//		q.pop();
//	}
//}
//int main() {
//	test01();
//}

//
//
//class PersonY {
//public:
//	PersonY(string name, int score) 
//		 {
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//	string m_Name;
//	int m_Score;
//
//};
//
//void test01() {
//
//
//}
//
//void creatPerson(vector<PersonY>& v) {
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++) {
//		string name = "选手";
//		name += nameSeed[i];
//		int score =0;
//		PersonY p(name, score);
//		v.push_back(p);
//	}
//	/*for (vector<PersonY>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << "姓名: " << (*it).m_Name << "  分数: " << (*it).m_Score << endl;
//	}*/
//}
//void setScore(vector<PersonY>& v) {
//
//	for (vector<PersonY>::iterator it = v.begin(); it != v.end(); it++) {
//		deque<int>d;
//		for (int i = 0; i < 10; i++) {
//			int score = rand() % 41 + 60;
//			d.push_back(score);
//		}
//		sort(d.begin(), d.end());
//		d.pop_back();
//		d.pop_front();
//		int totalScore = 0;
//		cout << "选手: " << (*it).m_Name << "  打分: " << endl;
//		for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
//			cout << *it  << "   ";
//		}
//		cout << endl;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
//			totalScore += *dit;
//		}
//		int avrage = totalScore / d.size();
//		(*it).m_Score = avrage;
//		cout << "选手: " << (*it).m_Name << "  平均分: " << (*it).m_Score << endl;
//		d.pop_front();
//		d.pop_back();
//		int totalScore2 = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
//			totalScore2 += *dit;
//		}
//		int avrage2 = totalScore2 / d.size();
//		(*it).m_Score = avrage2;
//		cout << "去掉最低最高分后选手: " << (*it).m_Name << "  平均分: " << (*it).m_Score << endl;
//	}/*
//	for (vector<PersonY>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << "姓名: " << (*it).m_Name << "  分数: " << (*it).m_Score << endl;
//	}*/
//}
//int main() {
//	//test01();
//	vector<PersonY> v;
//	creatPerson(v);
//	setScore(v);
//
//
//
//};

 //void printDeque(const deque<int>& d) {
 //   for (deque<int>::const_iterator it = d.begin(); it != d.end(); ++it) {
 //       cout << *it << " ";
 //   }
	//cout << endl;

 //}
 //void test02() {
 //    deque<int> d;
 //    d.push_back(10);
 //    d.push_back(20);
 //    d.push_back(30);
 //    d.push_back(40);
 //    d.push_back(50);
 //    printDeque(d);
 //    deque<int> d2(d.begin(), d.end()-1);
 //    printDeque(d2);
 //    deque<int> d3(d2);
 //    printDeque(d3);
 //    deque<int> d4;
 //    d4 = d3;
 //    printDeque(d4);

 //    d4.clear();
 //    bool a = d4.empty();
 //    cout << "a: " <<a << endl;
	// printDeque(d4);
	// d3.resize(3);
	// printDeque(d3);
	// d2.resize(5, 100);
	// printDeque(d2);
	// d2.insert(d2.begin(), 5,2000000);
	// printDeque(d2);
	// deque<int>::iterator it = d2.begin();
 //    it++;
	// d2.erase(it);
 //    cout << "after erase: ";
 //    for (deque<int>::iterator it = d2.begin(); it != d2.end(); it++) {

 //        cout << *it << "  ";
 //    }
	// cout << endl;
 //    cout << "after sort: ";
	// sort(d2.begin(), d2.end());
 //    for (deque<int>::iterator it = d2.begin(); it != d2.end(); it++) {

 //        cout << *it << "  ";
 //    }
 //}

 //int main() {
 //    test02();
 //    return 0;
 //}

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
