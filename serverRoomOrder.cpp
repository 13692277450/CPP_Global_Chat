#include <iostream>
#include <string>
using namespace std;

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
			cout << "学生代表" << endl;
			break;
		}
		case 2:
		{
			cout << "教师代表" << endl;
			break;
		}
		case 3:
		{
			cout << "管理员" << endl;
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