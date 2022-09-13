#include<iostream>
using namespace std;
int main(){
	int n=3;
	int i=1;
	
	while(i<=n){
		cout<<"+";
		int j=1;
		while(j<=n*4){
			cout<<"-";
			j=j+1;
		}
		cout<<"+"<<endl;
		if(i<n){
		cout<<"|";
		}
		int space=0;
		while (space<(n*4)){
		cout<<" ";
		space=space+1;
		}
		if(i<n){
		cout<<"|";
		cout<<endl;
		}
		i=i+1;
	}
}
