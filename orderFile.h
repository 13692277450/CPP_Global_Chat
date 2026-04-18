#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <map>


class OrderFile
{
	public:
	OrderFile();
	void  updateOrder();	//更新预约信息
	int m_Size;	//预约人数
	map<int, map<string, string>> m_orderData;

};


