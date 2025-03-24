#include<iostream>
#include<string>
using namespace std;

//Implement a function to swap two variables using references.

void swap(int&a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int a;
	int b;
	cin>>a>>b;
	swap(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
	
}
