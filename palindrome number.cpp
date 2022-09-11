#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	int r;
	r=n;
	int ans=0;
	while(n!=0){
		int digit = n%10;
		ans= (ans * 10) +digit;
		n=n/10;
	}
	if(ans==r){
		cout<<"Yes, It is a palindrome number"<<endl;
	}
	else{
		cout<<"No, It is not a palindrome number"<<endl;
	}
	
}
