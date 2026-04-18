#include "manager.h"
#include <iostream>
#include <fstream>
#include "globalFile.h"
#include "Identity.h"

Manager::Manager()
{

}
Manager::Manager(string name, string pwd)
{
	this->m_Name = name;
	this->m_Pwd = pwd;
	this->initVector();
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败！" << endl;
		return;
	}
	ComputerRoom com;
	while (ifs >> com.m_ComId && ifs >> com.m_MaxNum)
	{
		vCom.push_back(com);
	}
	ifs.close();
	cout << "机房信息total: " << vCom.size() << endl;


}
void Manager::operMenu()
{
	cout << "欢迎管理员" << this->m_Name << "登录！" << endl;
	cout << "\t\t|---------------------------------|\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          1.添加账号             |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          2.显示账号             |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          3.显示机房             |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          4.清空预约             |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          5.退出系统             |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t----------------------------------|\n";
	cout << "请输入您的选择： " << endl;

}
void Manager::addPerson()
{
	cout << "请输入添加账号的类型： " << endl;
	cout << "1. 学生代表" << endl;
	cout << "2. 教师代表" << endl;
	string fileName;
	string tip;

	ofstream ofs;
	int select = 0;
	cin >> select;

	if (select == 1) {
		fileName = STUDENT_FILE;
		tip = "学生";
	}
	else if (select == 2) {
		fileName = TEACHER_FILE;
		tip = "教师";
	}
	else {
		cout << "输入错误，请重新选择！" << endl;
		return;
	}

	
	ofs.open(fileName, ios::out | ios::app);
	if (!ofs.is_open()) {
		cout << "文件打开失败！" << endl;
		return;
	}
	int id;
	string name;
	string pwd;
	cout << tip << endl;
	cout << "请输入ID： " << endl;
	cin >> id;
	if (checkRepeat(id, select)) {
		cout << tip <<  "账号已存在，请重新输入！" << endl;
		return;
	}
	cout << "请输入姓名： " << endl;
	cin >> name;
	cout << "请输入密码： " << endl;
	cin >> pwd;
	ofs << id << " " << name << " " << pwd << endl;
	cout << "添加" << tip << "成功！" << endl;
	system("pause");
	ofs.close();
	return;


}


void Manager::showComputer()
{
	cout << "机房信息如下： " << endl;
	for (vector<ComputerRoom>::iterator it = vCom.begin(); it != vCom.end(); it++) {
		cout << "机房编号: " << it->m_ComId << " 最大容量: " << it->m_MaxNum << endl;
	}
	system("pause");
	system("cls");
	return;

}
void Manager::cleanFile()
{
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();
	cout << "清空预约成功！" << endl;
	system("pause");
	ofs.close();
	return;
}
void Manager::initVector()
{
	vStu.clear();
	vTea.clear();
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败！" << endl;
		return;
	}
	Student s;
	while (ifs >> s.m_Id && ifs >> s.m_Name >> s.m_Pwd)
	{
		vStu.push_back(s);
	}
	cout << "学生信息total: " << vStu.size() << endl;
	ifs.close();
	ifs.open(TEACHER_FILE, ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败！" << endl;
		return;
	}
	Teacher t;
	while (ifs >> t.m_EmpId && ifs >> t.m_Name >> t.m_Pwd)
	{
		vTea.push_back(t);
	}
	cout << "老师信息total: " << vTea.size() << endl;
	ifs.close();


}

bool Manager::checkRepeat(int id, int type)
{
	if (type == 1) {
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++) {
			if (id == it->m_Id) {
				return true;
			}
		}
	}
	else  {
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++) {
			if (id == it->m_EmpId) {
				return true;
			}
		}
	}
	
	return false;
}


void Manager::showPerson()
{
	cout << "学生信息如下： " << endl;
	cout << "1 查看学生的信息" << endl;
	cout << "2 查看教师的信息" << endl;
	int select = 0;
	cin >> select;
	if (select == 1) {
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++) {
			cout << "ID: " << it->m_Id << " 姓名: " << it->m_Name << " 密码: " << it->m_Pwd << endl;
		}
	}
	else if (select == 2) {
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++) {
			cout << "ID: " << it->m_EmpId << " 姓名: " << it->m_Name << " 密码: " << it->m_Pwd << endl;
		}
	}
	else {
		cout << "输入错误，请重新选择！" << endl;
		return;
	}
}

