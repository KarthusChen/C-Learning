#include <iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"

int main()
{
	Worker* worker = NULL;
	worker = new Employee(1, "张三",1);
	worker->showInfo();


	//WorkerManager wm;
	//int choice = 0;
	//while (true)
	//{
	//	wm.Show_Menu();
	//	cout << "输入您的选择" << endl;
	//	cin >> choice;

	//	switch (choice)
	//	{
	//	case 0://退出系统
	//		wm.exitSystem();
	//		break;
	//	case 1://添加职工
	//		break;
	//	case 2://显示职工
	//		break;
	//	case 3://删除职工
	//		break;
	//	case 4://修改职工
	//		break;
	//	case 5://查找职工
	//		break;
	//	case 6://排序职工
	//		break;
	//	case 7://清空职工
	//		break;
	//	default:
	//		system("cls");//清屏
	//		break;
	//	}

	//}
	
	
	return 0;
}