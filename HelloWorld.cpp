#include <iostream>
using namespace std;
#define Day 7
const int Month = 12;

int main() {
	int a = 10;
	cout << "Hello World" << endl;
	//system("pause");
	printf("Hello World\n");
	cout << "size of int: " << sizeof(a) << endl;	
	float b = 3e3;
	cout << "b: " << b << endl;
	char c = 'a'; // char is a single byte
	cout << "c: " << c << endl;
	cout << "character value of c: " << int(c) << endl;
	cout << "aaaa\thello" << endl;
	//c style char string:
	char str[] = "Hello SZ";
	//for (int i = 0; str[i] != '\0'; ++i) {
	//	//cout << "\n";
	//	cout <<  str[i] << endl;
	//}
	//cout << str << endl;
	int d;
	cout << "Pls input a number: " << endl;
	cin >> d;
	cout << "Your number is: " << d << endl;
	return 0;
}

