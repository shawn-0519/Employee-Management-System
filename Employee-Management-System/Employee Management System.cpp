#include<iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include"Employee.h"
#include "manager.h"
#include "boss.h"

//void test01() {
//	Worker* worker = NULL;
//	worker = new Employee(1, "����", 1);
//	worker->getDeptName();
//	worker->showInfo();
//	delete worker;
//}

int main() {
	test01();
	WorkerManager wm;


	wm.Show_Menu();

	int choice = 0;
	cout << "����������ѡ��:" << endl;
	cin >> choice;
	switch (choice)
	{
	case 0:	//�˳�ϵͳ
		wm.Exit_Menu();
		break;
	case 1:	//���Ա��
		break;
	case 2:	//��ʾ
		
		break;
	case 3:	//ɾ��
		break;
	case 4:	//����
		break;
	case 5:	//����ְ��
		break;
	case 6:	//����ļ�
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