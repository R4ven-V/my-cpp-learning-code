#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;
typedef struct {
	string name;
	string phone_number;
}people;
typedef struct {
	people* ppp;
	int capacity;//总容量
	int count;//当前人数
}address_book;
void init_sysytem(address_book* book) {
	book->capacity = 5;
	book->ppp = new people[book->capacity]; // 初始化时分配内存
	book->count = 0;
	cout << "系统初始化成功！";
}
void destroy_system(address_book* book) {
	delete[] book->ppp;
	book->ppp = nullptr;
	book->count = 0;
	book->capacity = 0;
	cout << "已销毁，系统资源已释放。"<<endl;
}
void add_person(address_book* book) {
	if (book->count == book->capacity) {
		int new_cap = book->capacity << 1;
		people* new_arr = new people[new_cap];
		if (!new_arr) {
			cout << "系统扩容失败！"<<endl;
			return;
		}
		for (int i = 0; i < book->count; ++i) {
			new_arr[i] = book->ppp[i];
		}
		delete[] book->ppp;
		book->capacity = new_cap;
		book->ppp = new_arr;
	}
	people per;
	cout << "请输入姓名：" << endl;
	cin.ignore();
	getline(cin, per.name);
	cout << "请输入电话号码：" << endl;

	getline(cin, per.phone_number);
	book->ppp[book->count++] = per;
}
void show_all(address_book* book) {
	if (book->count == 0) {
		cout << "通讯录为空。" << endl;
		return;
	}
	const int name_width = 20;
	const int phone_width = 15;

	cout <<"|"<< left << setw(name_width-2) << "姓名" << setw(2)<<"|" << setw(phone_width) << "电话" <<"|" << endl;
	cout << setfill('-') << setw(name_width + phone_width+3) << "" << setfill(' ') << endl;

	for (int i = 0; i < book->count; ++i) {
		cout << "|" << left << setw(name_width-2) << book->ppp[i].name<<setw(2)
			<< "|" << setw(phone_width) << book->ppp[i].phone_number << "|" << endl;
		cout << setfill('-') << setw(name_width + phone_width + 3) << "" << setfill(' ') << endl;
	}
}

int main() {
	address_book book;
	init_sysytem(&book);
	int choice;
	do {
		cout << "\n通讯录菜单:\n";
		cout << "1. 添加联系人\n";
		cout << "2. 显示所有联系人\n";
		cout << "3. 退出\n";
		cout << "请输入您的选择: ";
		cin >> choice;

		switch (choice) {
		case 1:
			add_person(&book);
		
			break;
		case 2:
			show_all(&book);
	
			break;
		case 3:
			cout << "正在退出..." << endl;
			break;
		default:
			cout << "无效的选择，请重试。" << endl;
		}
	} while (choice != 3);
	
	destroy_system(&book);
}