#include<iostream>
using namespace std;
int main(){
/*	
//AND,OR,NOT,XOR
	int a=4;
	int b=6;
	
	cout<<"a&b is "<< (a&b) <<endl;
	cout<<"a|b is "<< (a|b) <<endl;
	cout<<"~a is "<< (~a) <<endl;
	cout<<"a^b is "<< (a^b) <<endl;
*/
	
//LEFT AND RIGHT SWIFT
/*
    cout<< (17>>1) <<endl;
    cout<< (17>>2) <<endl;
    cout<< (19<<1) <<endl;
    cout<< (21<<2) <<endl;
*/
  
//Pre-increment,decrement ; post-increment,decrement
/*
    int i=7;
    
    cout<< (i++) <<endl;
    //7  ,i=8
    cout<< (++i) <<endl;
    //9   
    cout<< (i--) <<endl;
    //9  ,i=8
	cout<< (--i) <<endl;
    //7
*/
  
//For Loop
//Printing counting
/*
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++){
    	cout<< i << endl;
	}
*/

//Printing sum of  1 to N numbers
/*
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    int sum=0;
    for(int i=1;i<=n;i++){
    	sum+=i;
	}
	cout<<sum<<endl;
*/	
  
//Fibonacci series
/*
   int n;
   cout<<"Enter the value of n: "<<endl;
   cin>>n;
   
   int a=0;
   cout<<a<<endl;
   int b=1;
   cout<<b<<endl;
   
   int c;
   
   for(int i=3;i<=n;i++){
   	c=a+b;
	a=b;
   	b=c;
   	
   	cout<<c<<endl;

   } 
*/

//Prime or not? 
/*
   int n;
   cout<<"Enter the number: "<<endl;
   cin>>n;
   
   bool isPrime=1;
   
   for(int i=2;i<n;i++){
   	if(n%i==0){ //note that n is divided by i
   		//it is not a prime number (rem==0)
   		isPrime=0; //note that assignment operator is used
   		break;
   		
	   }
   }
   
   if (isPrime==0){
   	cout<<n<<" is not a prime number"<<endl;
   	
   }
   else{
   	cout<<n<<" is a prime number"<<endl;
   }
*/

//Continue- younger brother of break
/* 
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++){
    	cout<<"Hi"<<endl;
    	cout<<"Hey"<<endl;
    	continue;
    	
    	cout<<"Reply toh karde"<<endl;
    	
	}
*/

//Output 1
/*
   for(int i=0;i<=5;i++){
   	cout<< i << " ";
   	i++;
   }
*/

//Output 2
/*
   for(int i=0;i<=5;i--){
   	cout<< i << " ";
   	i++;
    
   }
*/

 


}
