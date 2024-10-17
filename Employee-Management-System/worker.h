#pragma once
#include<iostream>
#include<string>
using namespace std;

class Worker {
public:

	//显示个人信息
	virtual void showInfo() = 0;
	

public:
	int m_Id;
	char m_Name;
	int m_DeptId;
};