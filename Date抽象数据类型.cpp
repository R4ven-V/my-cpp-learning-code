#include<iostream>
#include"Date抽象数据类型.h"
#include<cstring>
using namespace std;

void Date::Set(int a, int b, int c) {
	year = a;
	month = b;
	day = c;
}
int Date::getMonth() const{
	return month;
}
int Date::getYear() const{
	return year;
}
int Date::getDay() const{
	return day;
}
void Date::Print() {
	cout << year << "/" << month << "/" << day << endl;
}

int main() {
	Date date;
	date.Set(2024, 3, 16);
	date.Print();
	int last_year = date.getYear();
	cout << last_year << endl;
	date.Set(2025, 3, 17);
	date.Print();
	int today_day = date.getDay();
	cout << today_day << endl;
	
	return 0;

}