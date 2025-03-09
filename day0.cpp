#include<iostream>
#include<iomanip>

//This is day 0 for test.
using namespace std;
int main(){
	double a=3.6;
	cout<<"Hello, world!"<<endl;
	cout<<fixed<<showpoint<<setprecision(1);
	cout<<setw(9)<<left<<"TODAY";
	cout<<setw(3)<<right<<a;
	return 0; 
	
}
