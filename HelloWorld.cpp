////Global chat application will develp after two months because I just start learning C++ today.
//#include <iostream>
//#include "swap.h"
//#include <ctime>
//
//using namespace std;
//#define Day 7
//const int Month = 12;
//
//struct Stu {
//	string name;
//	float score;
//};
//struct Teacher {
//	string tName;
//	struct Stu sArray[5];
//};
//
//void allocateSpace(struct Teacher tArray[], int len) {
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++) {
//		tArray[i].tName = "Teacher_";
//				tArray[i].tName += nameSeed[i];
//			/*cout << "nameSeed i: " << nameSeed[i] << endl;
//			cout << "Teacher Name: " << tArray[i].tName << endl;*/
//			for (int j = 0; j < 5; j++) {
//				tArray[i].sArray[j].name = "Student_" + nameSeed[j];
//				tArray[i].sArray[j].score = rand() % 61 + 40;
//			}
//	}
//}
//
//void printInfo(struct Teacher tArray[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "Teacher: " << tArray[i].tName << endl;
//		cout <<  endl;
//		for (int j = 0; j < 5; j++) {
//			cout << "\tStudent Name: " << tArray[i].sArray[j].name << ", Score: " << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//
///*
//struct Worker {
//		int id;
//		string name;
//		float salary;
//	}s6;*/
//
////int add(int num1, int num2) {
////	return num1 + num2;
////}
////void printWorker(Worker w1) {
////	w1.salary = 1000;
////	cout << "ID: " << w1.id << endl;
////	cout << "Name: " << w1.name << endl;
////	cout << "Salary: " << w1.salary << endl;
////}
////void printWorker(Worker* w1) {  //use const to fixed the value.
////	w1->salary = 1000000;   //箭头运算符，指向指针的成员变量。Affect the original value.all the pointer point to the same value.
////	cout << "ID: " << w1->id << endl;
////	cout << "Name: " << w1->name << endl;
////	cout << "Salary: " << w1->salary << endl;
////}
//
//int main1() {
//	//int a = 10;
//	//cout << "Hello World" << endl;
//	////system("pause");
//	//printf("Hello World\n");
//	//cout << "size of int: " << sizeof(a) << endl;	
//	//float b = 3e3;
//	//cout << "b: " << b << endl;
//	//char c = 'a'; // char is a single byte
//	//cout << "c: " << c << endl;
//	//cout << "character value of c: " << int(c) << endl;
//	//cout << "aaaa\thello" << endl;
//	////c style char string:
//	//char str[] = "Hello SZ";
//	////for (int i = 0; str[i] != '\0'; ++i) {
//	////	//cout << "\n";
//	////	cout <<  str[i] << endl;
//	////}
//	////cout << str << endl;
//	// ///////////////////////////////////////////////////////////////
//	//int d;
//	//cout << "Pls input a number: " << endl;
//	//cin >> d;
//	//cout << "Your number is: " << d << endl;
//	//cout << "Your number is: " ;
//	////////////////////////////////////////////////////////////////
//	/*int score = 0;
//	cout << "Pls input your score: ";
//	cin >> score;
//	if (score >= 600) {
//		cout << "Congratulations! you will get into university!" << endl;
//	} else if (score >= 500) {
//		cout << "Good , you will get into college!" << endl;
//	} else if (score >= 400) {
//		cout << "Sorry, you have not chance to get into university or college!" << endl;
//	}  else {
//		cout << "So bad, you need study hard!" << endl;
//	}*/
//	///////////////////////////////////////////////////////////
//	//int a = 10;
//	//int b = 20;
//	//int c = 0;
//	//c = (a > b ? a : b); // 三元运算符can be right or left.
//	//cout << c;
//	//cout << "Pls input your score: ";
//	//int score = 0;
//	//cin >> score;
//	//printf("Your score is %d\n", score);
//	//switch (score) { //Can not be a area. performance is better than if else.
//	//case 100:
//	//	cout << "Perfect!" << endl;
//	//	break;
//	//case 90:
//	//	cout << "Excellent" << endl;
//	//	break;
//	//default:
//	//	cout << "Not bad." << endl;
//	//}
//	////////////////////////////////////////////////////////////////
//	//int num = 0;
//	//while (num < 10) {
//	//	cout << num << endl;
//	//	//printf("num: %d\n", num);
//	//	num++;
//	//}
//	////////////////////////////////////////////////////////////////////
//	/*srand((unsigned)time(NULL));
//	int random = rand() % 100;
//	int num = 0;
//	while (1) {
//	 if (num > random) {
//		cout << "Your number is too big.!" << endl;
//	 } else if (num < random) {
//		cout << "Your number is too small." << endl;
//	 } else {
//		cout << "Congratulations, you win." << endl;
//		break;
//	 }
//	 cout << "Pls input your guess: ";
//	 cin >> num;
//	}*/
//	/////////////////////////////////////////////////////////////////
//	//int num = 0;
//	//do {
//	//	cout << "num: " << num << endl;
//	//	num++;
//	//} while (num < 10);
//	///////////////////////////////////////////////////////////////
//	/*for (int i = 0; i < 10; ++i) {
//		cout << "i: " << i << endl;
//	}*/
//	//int arr[5] = { 1,2,3,4,5 };
//	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//	//	cout << "arr[" << i << "]:" << arr[i] << endl;
//	//}
//	//int arr2[] = { 1,2,3,4,5 };
//	//for (auto &x : arr2) { // auto is a type of variable.
//	//	cout << x << endl;
//	//}
//	///////////////////////////////////////////////////////////////////////
//	//水仙花数字
//	/*for (int i = 100; i < 1000; ++i) {
//		int a = i / 100;
//		int b = (i / 10) % 10;
//		int c = i % 10;
//		if (a * a * a + b * b * b + c * c * c == i) {
//			cout << "Narcissistic number: " << i << endl;
//		}
//	}*/
//	////////////////////////////////////////////////////////////////////////////
//   /*int i = 20;
//   int j = 10;
//   for (j = 0; j < 10; j++) {
//	   for (i = 0; i < 20; i++) {
//		   printf("* ");
//	   }
//	   printf("\n");
//   }*/
//   ///////////////////////////////////////////////////////////////////////////
//   //九九乘法表
//   /*for (int i = 1; i <= 9; i ++ ) {
//	   for (int j = 1; j <= i; ++j) {
//		   cout << i << "*" << j << "=" << i * j << "  ";;
//	   }
//	   cout << endl;
//   }*/
//
//   ///////////////////////////////////////////////////////////////////////////
//   //int arr[5] = { 1,2,3,4,5 };
//   //cout << (int)&arr << endl; // address of arr
//   //cout << (int)&arr[0] << endl; // address of arr[0]
//
//   //cout << (int)&arr[1] << endl;
//   //cout << (int)&arr[2] << endl;
//   //cout << (int)&arr[3] << endl;S
//   //cout << (int)&arr[4] << endl;
//   ////////////////////////////////////////////////////////////////////////////
//	/*int arr[5] = { 1,3,2,7,5 };
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//		cout << "arr[" << i << "]:" << arr[i] << endl;
//	}
//	while (start < end) {
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//		cout << "arr[" << i << "]:" << arr[i] << endl;
//	}*/
//	///////////////////////////////////////////////////////////////////////////////////
//	/*int arr[9] = { 8,5,1,3,2,7,4,6,9 };
//	cout << "Before: " << endl;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//		cout << "arr[" << i << "]:" << arr[i] << endl;
//	}
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; ++i) {
//		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1 - i; ++j) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j]; // if arr change:struct Hero tem = heroArray[j]
//				arr[j] = arr[j + 1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//	cout << "After: " << endl;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//		cout << "arr[" << i << "]:" << arr[i] << endl;
//	}*/
/////////////////////////////////////////////////////////////////////////////////////
//	/*int arr[2][3] = { {1,2,3},{4,5,6} };
//	for (int i =0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); ++j) {
//			cout << "arr[" << i << "][" << j << "]:" << arr[i][j] << endl;
//		}
//	}
//	cout << "sizeof(arr):" << sizeof(arr) << endl;
//	cout << "sizeof(arr[0]):" << sizeof(arr[0]) << endl;
//	cout << "sizeof(arr[0][0]):" << sizeof((int)&arr[0][0]) << endl; */
//	////////////////////////////////////////////////////////////////////////////////
//	/*int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//		for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); ++j) {
//			cout << "arr[" << i << "][" << j << "]:" << arr[i][j] << endl;
//		}
//	}*/
//	////////////////////////////////////////////////////////////////////////////////
//	/*int scores[3][3]=
//	{
//		{100,100,100},
//		{40,50,60},
//		{79,82,95}
//	};
//	for (int i = 0; i < 3; i++) {
//		int sum = 0;
//
//		for (int j = 0; j < 3; j++) {
//			sum += scores[i][j];
//			cout << "scores" << scores[i][j] << endl;
//		}
//		cout <<"Total score: " << i+1 << "scores" << sum << endl;
//	}*/
//	///////////////////////////////////////////////////////////////////////////////
//	//int a = add(10, 20);
//	//cout << a;
//
//	//swap(10, 20);
//	/////////////////////////////////////////////////////////////////////////////
//	//int a = 10;
//	//int * p = &a;
//	//int * c = NULL;
//	//cout << &a;
//	//cout << endl;
//	//cout << p;
//	//cout << endl;
//
//	//cout << *p;
//	/////////////////////////////////////////////////////////
//	//int a = 10;
//	//int * const p = &a; //指针的指向不可以改，但是指向的值可以改
// //   const int * c = &a; //指向的值不可以改，但是指针的指向可以改
//	//int const * d = &a; //指向的值可以改，但是指针的指向不可以改
//	//const int * const e = &a; //指向的值不可以改，指针的指向也不可以改
//
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//const int * p1 = arr;
//	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//	//	cout << "arr[" << i << "]:" << *(p1 + i) << endl;
//	//}
//	//cout << endl;
//    ////////////////////////////////////////////////////////////
//    //int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//const int * p1 = arr;
//	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//	//	cout << "arr[" << i << "]:" << *(p1 + i) << endl;
//	//}
//	//cout << endl;
//    //const int * const p2 = arr;
//	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//	//	cout << "arr[" << i << "]:" << *(p2 + i) << endl;
//	//}
//	//cout << endl;
//    
//	///////////////////////////////////////////////////////////
//	/*struct Worker {
//		int id;
//		string name;
//		float salary;
//	}s6;
//	s6.id = 1001;
//	s6.name = "Tom";
//	s6.salary = 5000.0;
//	cout << s6.id << endl;
//	cout << s6.name << endl;
//	cout << s6.salary << endl;*/
//    ////////////////////////////////////////////////////////////////
//	//struct Worker {
//	//	int id;
//	//	string name;
//	//	float salary;
//	//}s6;
//	//Worker s3[] = { {},{} };
//	//Worker arr[3] = {
//	//	{1001,"Tom",5000.0},
//	//	{1002,"Jerry",6000.0},
//	//	{1003,"Mike",7000.0}
//	//};
//	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
//	//	cout << "id: " << arr[i].id 
//	//	 << "name: " << arr[i].name 
//	//	 << "salary: " << arr[i].salary << endl;
//
//	//}
//	//struct Worker w2 = { 1004,"Jack",8000.0 };
//	//Worker * p = &w2;
//	//cout << p->id;   //need arrow to access the member of struct through pointer.
//	//cout << p->name;
//	//cout << p->salary;
//	///////////////////////////////////////////////////////////////////////
//	/*struct Worker w2 = { 1004,"Jack",8000.0 };
//	printWorker(w2);
//	printWorker(&w2);
//	cout << w2.salary << endl;*/
//    //////////////////////////////////////////////////////////////////////
//    srand((unsigned int)time(NULL));
//	struct Teacher tArray[3];
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, len);
//	printInfo(tArray, len);
//
//
//
//
//
//
//
//
//
//	return 0;
//}
