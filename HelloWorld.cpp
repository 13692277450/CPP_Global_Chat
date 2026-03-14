//Global chat application will develp after two months because I just start learning C++ today.
#include <iostream>
using namespace std;
#define Day 7
const int Month = 12;

int main() {
	//int a = 10;
	//cout << "Hello World" << endl;
	////system("pause");
	//printf("Hello World\n");
	//cout << "size of int: " << sizeof(a) << endl;	
	//float b = 3e3;
	//cout << "b: " << b << endl;
	//char c = 'a'; // char is a single byte
	//cout << "c: " << c << endl;
	//cout << "character value of c: " << int(c) << endl;
	//cout << "aaaa\thello" << endl;
	////c style char string:
	//char str[] = "Hello SZ";
	////for (int i = 0; str[i] != '\0'; ++i) {
	////	//cout << "\n";
	////	cout <<  str[i] << endl;
	////}
	////cout << str << endl;
	// ///////////////////////////////////////////////////////////////
	//int d;
	//cout << "Pls input a number: " << endl;
	//cin >> d;
	//cout << "Your number is: " << d << endl;
	//cout << "Your number is: " ;
	////////////////////////////////////////////////////////////////
	/*int score = 0;
	cout << "Pls input your score: ";
	cin >> score;
	if (score >= 600) {
		cout << "Congratulations! you will get into university!" << endl;
	} else if (score >= 500) {
		cout << "Good , you will get into college!" << endl;
	} else if (score >= 400) {
		cout << "Sorry, you have not chance to get into university or college!" << endl;
	}  else {
		cout << "So bad, you need study hard!" << endl;
	}*/
	///////////////////////////////////////////////////////////
	//int a = 10;
	//int b = 20;
	//int c = 0;
	//c = (a > b ? a : b); // 三元运算符can be right or left.
	//cout << c;
	//cout << "Pls input your score: ";
	//int score = 0;
	//cin >> score;
	//printf("Your score is %d\n", score);
	//switch (score) { //Can not be a area. performance is better than if else.
	//case 100:
	//	cout << "Perfect!" << endl;
	//	break;
	//case 90:
	//	cout << "Excellent" << endl;
	//	break;
	//default:
	//	cout << "Not bad." << endl;
	//}
	////////////////////////////////////////////////////////////////
	//int num = 0;
	//while (num < 10) {
	//	cout << num << endl;
	//	//printf("num: %d\n", num);
	//	num++;
	//}
	////////////////////////////////////////////////////////////////////
	/*srand((unsigned)time(NULL));
	int random = rand() % 100;
	int num = 0;
	while (1) {
	 if (num > random) {
		cout << "Your number is too big.!" << endl;
	 } else if (num < random) {
		cout << "Your number is too small." << endl;
	 } else {
		cout << "Congratulations, you win." << endl;
		break;
	 }
	 cout << "Pls input your guess: ";
	 cin >> num;
	}*/
	/////////////////////////////////////////////////////////////////
	//int num = 0;
	//do {
	//	cout << "num: " << num << endl;
	//	num++;
	//} while (num < 10);
	///////////////////////////////////////////////////////////////
	/*for (int i = 0; i < 10; ++i) {
		cout << "i: " << i << endl;
	}*/
	//int arr[5] = { 1,2,3,4,5 };
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
	//	cout << "arr[" << i << "]:" << arr[i] << endl;
	//}
	//int arr2[] = { 1,2,3,4,5 };
	//for (auto &x : arr2) { // auto is a type of variable.
	//	cout << x << endl;
	//}
	///////////////////////////////////////////////////////////////////////
	//水仙花数字
	/*for (int i = 100; i < 1000; ++i) {
		int a = i / 100;
		int b = (i / 10) % 10;
		int c = i % 10;
		if (a * a * a + b * b * b + c * c * c == i) {
			cout << "Narcissistic number: " << i << endl;
		}
	}*/
	////////////////////////////////////////////////////////////////////////////
   /*int i = 20;
   int j = 10;
   for (j = 0; j < 10; j++) {
	   for (i = 0; i < 20; i++) {
		   printf("* ");
	   }
	   printf("\n");
   }*/
   ///////////////////////////////////////////////////////////////////////////
   //九九乘法表
   /*for (int i = 1; i <= 9; i ++ ) {
	   for (int j = 1; j <= i; ++j) {
		   cout << i << "*" << j << "=" << i * j << "  ";;
	   }
	   cout << endl;
   }*/

   ///////////////////////////////////////////////////////////////////////////
   //int arr[5] = { 1,2,3,4,5 };
   //cout << (int)&arr << endl; // address of arr
   //cout << (int)&arr[0] << endl; // address of arr[0]

   //cout << (int)&arr[1] << endl;
   //cout << (int)&arr[2] << endl;
   //cout << (int)&arr[3] << endl;S
   //cout << (int)&arr[4] << endl;
   ////////////////////////////////////////////////////////////////////////////
	/*int arr[5] = { 1,3,2,7,5 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
		cout << "arr[" << i << "]:" << arr[i] << endl;
	}
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
		cout << "arr[" << i << "]:" << arr[i] << endl;
	}*/
	///////////////////////////////////////////////////////////////////////////////////
	int arr[9] = { 8,5,1,3,2,7,4,6,9 };
	cout << "Before: " << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
		cout << "arr[" << i << "]:" << arr[i] << endl;
	}
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; ++i) {
		for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1 - i; ++j) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = temp;
			}
		}
	}
	cout << "After: " << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
		cout << "arr[" << i << "]:" << arr[i] << endl;
	}
	return 0;
}