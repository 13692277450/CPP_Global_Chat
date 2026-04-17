#include <iostream>
#include <string>
#include "Identity.h"
#include <fstream>
#include "globalFile.h"
using namespace std;

void LoginIn(string fileName, int type)
{
	Identity* identity = NULL;
	ifstream ifs;
	ifs.open(fileName, ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		ifs.close();
		return;
	}

	int id = 0;
	string name;
	string pwd;

	if (type == 1) {
		cout << "请输入你的学号： " << endl;
		cin >> id;
	}
	else if (type == 2) {
		cout << "请输入您的职工号： " << endl;
		cin >> id;
	}
	else if (type == 3) {
		cout << "管理员登录" << endl;
	}
	cout << "请输入你的姓名： " << endl;
	cin >> name;
	cout << "请输入你的密码： " << endl;
	cin >> pwd;


	if (type == 1) {

	}
	else if (type == 2) {

	}
	else if (type == 3) {

	}
	cout << "验证登录失败！请重新登录\n" << endl;

	system("pause");
	system("cls");
	return;
}

int main() {
  
	int select = 0;

	while (true) {
		cout << "==================== Welcome to server room order system ====================\n" << endl;
		cout << "请输入你的身份 " << endl;
		cout << "\t\t|------------------------------------------------|\n";
		cout << "\t\t|			                                      |\n";
		cout << "\t\t|			1. 	学生代表                          |\n";
		cout << "\t\t|			                                      |\n";
		cout << "\t\t|			2. 	教师代表                          |\n";
		cout << "\t\t|			                                      |\n";
		cout << "\t\t|			3.  管理员                            |\n";
		cout << "\t\t|			                                      |\n";
		cout << "\t\t|			4. 	退出                              |\n";
		cout << "\t\t|------------------------------------------------|\n";
		cout << "Please enter your choice: " << endl;
		cin >> select;
		switch (select) {
		case 1:
		{
			LoginIn("student.txt", 1);
			break;
		}
		case 2:
		{
			LoginIn("teacher.txt", 2);
			break;
		}
		case 3:
		{
			LoginIn("admin.txt", 3);
			break;
		}
		case 4:
		{
			cout << "欢迎下一次继续使用订阅系统" << endl;
			system("pause");
			system("cls");
			return 0;
			exit(0);
		}
		default:
		{
			cout << "输入错误，请重新选择" << endl;
			system("pause");
			system("cls");
			break;
		}
		}
	}

	system("pause");
	return 0;
}