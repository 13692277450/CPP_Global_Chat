#include <iostream>
#include <string>
#include "Identity.h"
#include <fstream>
#include "globalFile.h"
#include "Student.h"
#include "Student.h"
#include "teacher.h"
#include "manager.h"

using namespace std;

void managerMenu(Identity* &manager) {
	while(true) {
		manager->operMenu();
		//将父类指针转换为子类指针， 调用子类里的其他接口
		Manager* man = (Manager*)manager;

	}
}

void LoginIn(string fileName, int type)
{

	Identity* person = NULL;
	ifstream ifs;
	ifs.open(fileName, ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		ifs.close();
		return;
	}

	int id;
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
		int fId;
		string fName;
		string fPwd;
	
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
		

		   if (fId == id && fName ==name  && fPwd  == pwd) {
			   
			   cout << "学生验证登录成功！\n" << endl;
			   system("pause");
			   system("cls");
			   person = new Student(id, name, pwd);
			   return;
		   }
		}

	}
	else if (type == 2) {
		int fId;
		string fName;
		string fPwd;

		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			if (fId == id && fName == name && fPwd == pwd) {
				cout << "教师验证登录成功！\n" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				return;
			}
		}

	}
	else if (type == 3) {

		string fName;
		string fPwd;
		while (ifs >> fName && ifs >> fPwd)
		{
			if (fName == name && fPwd == pwd) {
				cout << "管理员验证登录成功！\n" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);
				return;
			}
		}

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
			LoginIn(STUDENT_FILE, 1);
			break;
		}
		case 2:
		{
			LoginIn(TEACHER_FILE, 2);
			break;
		}
		case 3:
		{
			LoginIn(ADMIN_FILE, 3);
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