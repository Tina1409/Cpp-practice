//which one is smaller and which is greater
#include<iostream>
using namespace std;
int main (){
	int a,b,c;
	cout<< "enter the value of a: "<<endl;
	cin>>a;
	cout<< "enter the value of b: "<<endl;
	cin>>b;
	cout<< "enter the value of c: "<<endl;
	cin>>c;
	if ((a>b) && (a>c)){
		cout<< a<< " is greater"<<endl;
	}
	else if ((b>a) && (b>c)){
		cout<< b << " is greater"<<endl;
	}
	else {
		cout<< c << " is greater"<<endl;
	}
	
	if ((a<b) && (a<c)){
		cout<< a<< " is smaller"<<endl;
	}
	else if ((b<a) && (b<c)){
		cout<< b << " is smaller"<<endl;
	}
	else {
		cout<< c << " is smaller"<<endl;
	}
	

}
