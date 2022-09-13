#include<iostream>
using namespace std;
int main(){
	double income,tax;
	cout<<"**INCOME TAX CALCULATOR**"<<endl;
	cout<<"Enter your income: ";
	cin>>income;
	if (income<250000){
		tax=0;
	}
	
	else if (income>=250000 && income<500000){
		tax=(income-250000)*0.05 + 0;
	}
	
	else if (income>=500000 && income<100000){
		tax=(income-500000)*0.1 + (250000*0.05) +0;
	}
	
	else {
		tax=(income-1000000)*0.3 + (500000*0.1) + (250000*0.05) +0;
	}
	cout<<tax<<endl;
}
