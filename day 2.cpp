#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	string Name;
	getline(cin,Name);
	cout<<setw(10)<<left<<"Hello,"<<Name<<"!"<<endl;
	return 0;
	
}
