#include<iostream>
using namespace std;
int main(){
	double income,tax;
	cout<<"**INCOME TAX CALCULATOR**"<<endl;
	cout<<"Enter your income: ";
	cin>>income; //logic part
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
	
	//output format 
	int n=3;
	int i=1;
	
	while(i<=n){
		cout<<"+"; //printing plus in first corner
		int j=1;
		while(j<=n*4){
			cout<<"-"; //horizontal line
			j=j+1;
		}
		cout<<"+"<<endl; //printing plus in last corner 
		if(i<n){
		cout<<"|"; //priting vertical line 
	    }
		
		if(i==1){
		cout<<" TaxTotal"; //writing tax total in the box
		}
	    
		int space=0;  //space
		while (space<n){
		cout<<" ";
		space=space+1;
		}
	    
		if (i==2){ //priting tax total value
		cout<<tax;
	   
	    int space=0; //printing space after tax total value
		while (space<n){
		cout<<" ";
		space=space+1;
		}    
		}
		
	    if(i<n){ //so that vertical line doesnt print in next line
		cout<<"|";
		cout<<endl;
		}
		i=i+1;
	}
}

