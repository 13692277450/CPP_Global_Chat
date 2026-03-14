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
	//int d;
	//cout << "Pls input a number: " << endl;
	//cin >> d;
	//cout << "Your number is: " << d << endl;
	//cout << "Your number is: " ;
	int score = 0;
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
	}

	return 0;
}

