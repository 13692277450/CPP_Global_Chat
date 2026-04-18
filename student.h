#pragma once
#include <iostream>
#include "Identity.h"
#include "computerRoom.h"
#include <vector>
using namespace std;


class Student : public Identity
{

public:
    Student();
    Student(int id, string name, string pwd);
    virtual void operMenu();
    void applyOrder();
	void showMyOrder();
	void showAllOrder();
    void cancelOrder();

    int m_Id;
	vector<ComputerRoom> vCom;	//存放机房信息

};