#include<iostream>
using namespace std;


int main(){
//Printing namaste dunia
/*
	cout<<"Namaste Dunia"<<endl;
*/
   
//size of an int datatype   
/*
	int a=5;
    int size=sizeof(a);
    cout<<"Size of a is:"<<size<<endl;
*/
    
//no is positive or negative- IF ELSE
/*
	int a;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    
	if(a>0){
    	cout<<"a is positive"<<endl;
    } 
	else{
    	cout<<"a is Negative"<<endl;
	}
*/

//which one is greater a or b?
/*
	int a;
    int b;
    
    cout<<"Enter value of a: "<<endl;
    cin>>a;
    cout<<"Enter value of b: "<<endl;
    cin>>b;
    
    if(a>b){
    	cout<<"a is greater"<<endl;
	}
	else{
		cout<<"b is greater"<<endl;
	}
*/
    
//Check whether n is +ve,-ve or zero- IF ELSE IF
/*
	int n;
    
    cout<<"Enter value of n: "<<endl;
    cin>>n;
    
    if(n>0){
    	cout<<"n is Positive"<<endl;
	}
	else if(n<0){
		cout<<"n is negative"<<endl;
	}
    else{
    	cout<<"n is zero"<<endl;
	}
*/

//checking whether a char is upper case or lower case or digit
/*	
	char ch;
	
	cout<<"Enter the value: "<<endl;
	cin>>ch;
    
    if(ch>='A'&ch<='Z'){
    	cout<<"Upper Case"<<endl;
	}
	else if(ch>='a'&ch<='z'){
		cout<<"Lower Case"<<endl;
	}
	else if (ch>='1'&ch<='9'){
		cout<<"Digit"<<endl;
	}
*/
    
//Printing the sum of n numbers- WHILE LOOP
/*
   int n;
   
   cout<<"Enter the number: "<<endl;
   cin>>n;
   
   int i=1;
   int sum=0;
   
   while(i<=n){
   	sum=sum+i;
   	i=i+1;
   } 
   cout<<"The value of sum is: "<<sum<<endl;
*/
    
//Sum of n even numbers
/*
   int n;
   
   cout<<"Enter the number: "<<endl;
   cin>>n;
   
   int i=2;
   int sum=0;
   
   while(i<=n){
   	sum=sum+i;
   	i=i+2;
   }
   
   cout<<"Value of the sum is: "<<sum<<endl;
*/
   
//Patterns 
/*
   int n;
   
   cout<<"Enter the value of n: "<<endl;
   cin>>n;
   
   int i=1;
   
   while(i<=n){
   	
	   int j=1;
   	
	   while(j<=n){
   		cout<<"*";  //try using endl here and see result difference
   		j=j+1;
	   }
	   cout<<endl;
	   
	   i=i+1;
   	
   }
*/  
 
 //Making a pattern like 1111 in one row,then 2222 in second 
/*   
   int n;
   
   cout<<"Enter the value of n: "<<endl;
   cin>>n;
   
   int i=1;
   
   while(i<=n){
   	
	   int j=1;
   	
	   while(j<=n){
   		cout<<i;  
   		j=j+1;
	   }
	   cout<<endl;
	   
	   i=i+1;
   	
   }
*/


}




