#include<iostream>

//This is a very simple cpp caculator, maybe one day i will level it. 
                            
using namespace std;
double Plus(double a,double b){
	return a+b;
}

double Minus(double a,double b){
	return a-b;
}

double Multiply(double a,double b){
	return a*b;
}

double Divide(double a,double b){
	if(b==0){
		printf("error");
		return 0;
	}else{
		return a/b;
	}
}

int main(){
	double a,b;
	char op;
	cout<<"plz input the 2 number and the operator:"<<endl;
	cin>>a;
	cin>>op;
	cin>>b;
	switch(op){
		case '+':
			cout<<Plus(a,b);break;
		case '-':
			cout<<Minus(a,b);break;
		case '*':
			cout<<Multiply(a,b);break;
		case '/':
			cout<<Divide(a,b);break;
		default:
			cout<<"invalid operator!" ;
			break;
	} 
	return 0; 
}




