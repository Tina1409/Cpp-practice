#include<iostream>
using namespace std;

int main(){
//reverse integer
	int n;
	cin>>n;
	int ans=0;
	while(n!=0){
		int digit=n%10;
		ans= (ans*10)+digit;
		n=n/10;
	}
	
	cout<<ans<<endl;
}
