#include<iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include"Employee.h"
#include "manager.h"
#include "boss.h"

//void test01() {
//	Worker* worker = NULL;
//	worker = new Employee(1, "张三", 1);
//	worker->getDeptName();
//	worker->showInfo();
//	delete worker;
//}

int main() {
	test01();
	WorkerManager wm;


	wm.Show_Menu();

	int choice = 0;
	cout << "请输入您的选择:" << endl;
	cin >> choice;
	switch (choice)
	{
	case 0:	//退出系统
		wm.Exit_Menu();
		break;
	case 1:	//添加员工
		break;
	case 2:	//显示
		
		break;
	case 3:	//删除
		break;
	case 4:	//查找
		break;
	case 5:	//排序职工
		break;
	case 6:	//清空文件
		break;
	case 7:
		break;
	default:
		system("cls");
		break;
	}

	system("pause");

	return 0;
}