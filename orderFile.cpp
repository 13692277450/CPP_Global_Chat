#include "orderFile.h"
#include <iostream>
#include <fstream>
#include <string>
#include "globalFile.h"
#include <map>
#include <utility>
using namespace std;


OrderFile::OrderFile()
{
	this->m_Size = 0;
	//this->m_orderData.clear();
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败！" << endl;
		return;
	}
	string date, interval, stuId, stuName, roomId, status;
	//Order order;
	while (ifs >> date && ifs >> interval && ifs >> stuId && ifs >> stuName && ifs >> roomId && ifs >> status)
	{
		/*cout << date << " " << endl;
		cout << interval << " " << endl;
		cout << stuId << " " << endl; 
		cout << stuName << " " << endl; 
		cout << roomId << " " << endl;
		cout << status << " " << endl;
		cout << endl;*/
		string key; string value;
		map<string, string>m;
		int pos = date.find(":");
		if (pos != -1)
		{
			key = date.substr(0, pos);
			value = date.substr(pos + 1, date.size() - pos - 1);
			m.insert(make_pair(key, value));

		}
		pos = interval.find(":");
		if (pos != -1)
		{
			key = interval.substr(0, pos);
			value = interval.substr(pos + 1, interval.size() - pos - 1);
			m.insert(make_pair(key, value));
		}
		pos = stuId.find(":");	
		if (pos != -1)
		{
			key = stuId.substr(0, pos);
			value = stuId.substr(pos + 1, stuId.size() - pos - 1);
			m.insert(make_pair(key, value));
		}
		pos = stuName.find(":");
		if (pos != -1)
		{
			key = stuName.substr(0, pos);
			value = stuName.substr(pos + 1, stuName.size() - pos - 1);
			m.insert(make_pair(key, value));
		}
		pos = roomId.find(":");
		if (pos != -1)
		{
			key = roomId.substr(0, pos);
			value = roomId.substr(pos + 1, roomId.size() - pos - 1);
			m.insert(make_pair(key, value));
		}
		pos = status.find(":");
		if (pos != -1)
		{
			key = status.substr(0, pos);
			value = status.substr(pos + 1, status.size() - pos - 1);
			m.insert(make_pair(key, value));
		}
		this->m_orderData.insert(make_pair(this->m_Size, m));
		this->m_Size++;
	}
	ifs.close();
	for ( map<int, map<string, string>>::iterator it = this->m_orderData.begin(); it != this->m_orderData.end(); it++)
	{
		cout << "Key line: " << it->first << " value=  " << endl;
		//cout << "date:" << it->second["date"] << " " << "interval:" << it->second["interval"] << " " << "stuId:" << it->second["stuId"] << " " << "stuName:" << it->second["stuName"] << " " << "roomId:" << it->second["roomId"] << " " << "status:" << it->second["status"] << endl;
		for (map<string, string>::iterator mit = it->second.begin(); mit != it->second.end(); mit++)
		{
			cout << mit->first << ":" << mit->second << " ";
		}
		cout << endl;
	}

	system("pause");
	system("cls");


}



void OrderFile::updateOrder()
{
	if (this->m_orderData.size() == 0)
	{
		return;
	}
	ofstream ofs;
	ofs.open(ORDER_FILE, ios::out | ios::trunc);
	if (!ofs.is_open())
	{
		cout << "文件打开失败！" << endl;
		return;
	}

	for (int i =0; i < this->m_Size; i++ )
	{
		ofs << "date:" << this->m_orderData[i]["date"] << " " << "interval:" << this->m_orderData[i]["interval"] << " " << "stuId:" << this->m_orderData[i]["stuId"] << " " << "stuName:" << this->m_orderData[i]["stuName"] << " " << "roomId:" << this->m_orderData[i]["roomId"] << " " << "status:" << this->m_orderData[i]["status"] << endl;
	}
	ofs.close();
}