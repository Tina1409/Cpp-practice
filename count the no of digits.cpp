#include<iostream>
using namespace std;
int main(){
//count the number of digits
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	
	int count=0;
	
	while(n!=0){
		n=n/10;
		count=count+1;
	}
	cout<<"The number of digits are: "<<count<<endl;
}
