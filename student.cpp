#include "student.h"
#include <iostream>
using namespace std;
#include <fstream>
#include "globalFile.h"
#include "computerRoom.h"
#include "orderFile.h"


Student::Student()
{

}

Student::Student(int id, string name, string pwd)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;

	ifstream ifs;
	ComputerRoom com;
	ifs.open(COMPUTER_FILE, ios::in);
	while (ifs >> com.m_ComId && ifs >> com.m_MaxNum )
		{
		vCom.push_back(com);
	}
	ifs.close();



}
void Student::operMenu()
{
	cout << "欢迎学生代表" << this->m_Name << "登录！" << endl;
	cout << "\t\t|---------------------------------|\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          1.申请预约             |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          2.查看我的预约         |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          3.查看所有预约         |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          4.取消预约             |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t|          5.退出系统             |\n";
	cout << "\t\t|                                 |\n";
	cout << "\t\t----------------------------------|\n";
	cout << "请输入您的选择： " << endl;


}
void Student::applyOrder()
{

	cout << "申请预约，机房的开放时间为周一到周五" << endl;
	cout << "请输入申请预约的时间：" << endl;
	cout << "1.周一" << endl;
	cout << "2.周二" << endl;
	cout << "3.周三" << endl;
	cout << "4.周四" << endl;
	cout << "5.周五" << endl;


	int date = 0;
	int interval = 0;
	int room = 0;
	while (true)
	{
		cin >> date;
		if (date >= 1 && date <= 5)
		{
			break;
		}
		else
		{
			cout << "输入有误，请重新输入预约时间" << endl;
		}
	}	
	cout << "请输入申请预约的时间段：" << endl;
	cout << "1.上午" << endl;
	cout << "2.下午" << endl;
	while (true)
	{
		cin >> interval;
		if (interval >= 1 && interval <= 2)
		{
			break;
		}
		else
		{
			cout << "输入有误，请重新输入预约时间段" << endl;
		}
	}
	cout << "请输入申请预约的机房：" << endl;
	for (vector<ComputerRoom>::iterator it = vCom.begin(); it != vCom.end(); it++)
	{
		cout << it->m_ComId << "号机房容量为：" << it->m_MaxNum << endl;
	}
	while (true)
	{
		cin >> room;
		if (room >= 1 && room <= 3)
		{
			break;
		}
		else
		{
			cout << "输入有误，请重新输入预约机房" << endl;
		}
	}
	ofstream ofs;
	ofs.open(ORDER_FILE,  ios::app);
	ofs << "date:" << date << " " << "interval:" << interval << " " << "stuId:" << this->m_Id << " " << "stuName:" << this->m_Name << " " << "roomId:" << room << " " << "status:" << 1 << endl;
	ofs.close();
	cout << "预约成功！Audit in progress...." << endl;

}
void  Student::showMyOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录！" << endl;
		system("pause");
		system("cls");
		return;
	}
	if (int i=0; i < of.m_Size; i++)
	{
		if (of.m_orderData[i]["stuId"] == to_string(this->m_Id))

		{
			string status = "状态： ";
			if (of.m_orderData[i]["status"] == "1")
			{
				status += "审核中";
			}
			else if (of.m_orderData[i]["status"] == "2")
			{
				status += "预约成功";
			}
			else if (of.m_orderData[i]["status"] == "3")
			{
				status += "预约失败";
			}
			else if (of.m_orderData[i]["status"] == "4")
			{
				status += "预约已取消";
			}
			cout << "预约时间 date:" << of.m_orderData[i]["date"];
			cout << "上午下午 interval:" << of.m_orderData[i]["interval"];
			cout << "学生 stuId:" << of.m_orderData[i]["stuId"];
			cout << "学生姓名 stuName:" << of.m_orderData[i]["stuName"];
			cout << "机房号 roomId:" << of.m_orderData[i]["roomId"];
			cout << "status:" << of.m_orderData[i]["status"] << endl;
		}
	}
}
void  Student::showAllOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录！" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++)
	{
		cout << "date:" << of.m_orderData[i]["date"] << " " << "interval:" << of.m_orderData[i]["interval"] << " " << "stuId:" << of.m_orderData[i]["stuId"] << " " << "stuName:" << of.m_orderData[i]["stuName"] << " " << "roomId:" << of.m_orderData[i]["roomId"] << " " << "status:" << of.m_orderData[i]["status"] << endl;
	}

}
void  Student::cancelOrder()
{

}
