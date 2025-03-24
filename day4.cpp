#include<iostream>
#include<string>
using namespace std;
void print(int a) {
	cout << a << endl;
}
void print(string str) {
	cout << str << endl;
}

int main() {
	string str = "i have an apple";
	print(42);
	print(str);
	print("happy");//发生了隐式转换从const char*转换为string
	print('a');//发生了隐式转换char->int，调用了print(int),但可能并非预期
}


//在构造函数前添加“explicit”可以禁用隐式转换。
/*
函数重载的本质是允许同一个函数名处理不同类型的输入参数
核心规则：参数列表必须不同（类型/数量/顺序），返回值类型不参与重载
编译器会根据调用时传入的参数类型自动匹配对应的函数版本
*/