#include<iostream>
using namespace std;
int main(){
	
//[1] pattern- 123
/*
	int n;
	
	cout<<"Enter the no of rows: "<<endl;
	cin>>n;
	
	int i=1;
	
	while(i<=n){
		
		int j=1;
	
		while(j<=n){
			cout<<j;
			j=j+1;
			
		}
		cout<<endl;
		i=i+1;
*/		


//[2] pattern- (in reverse) 321
/*    
	int n;
	
	cout<<"Enter the no of rows: "<<endl;
	cin>>n;
	
	int i=1;
	
	while(i<=n){
		
		int j=1;
	
		while(j<=n){
			cout<<n-j+1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}	
*/


//[3] printing the counting 123   456   789	
/*
    int n;
	
	cout<<"Enter the no of rows: "<<endl;
	cin>>n;
	
	int i=1;
	int count=1;
	
	while(i<=n){
		
		int j=1;
	
		while(j<=n){
			cout<<count;
			count=count+1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}	
*/


//[4] Triangle pattern- star
/*
    int n;
	
	cout<<"Enter the no of rows: "<<endl;
	cin>>n;
	
	int row=1;
	
	while(row<=n){
		
		int col=1;
		
		while(col<=row){ // because in first row there is one col,in second row there are two col and so on
			cout<<"*";
			col=col+1;
		}
		cout<<endl;
		row=row+1;
	}	
*/


//[5] triangle case - 1 22 333 4444
/*
    int n;
	
	cout<<"Enter the no of rows: "<<endl;
	cin>>n;
	
	int row=1;
	
	while(row<=n){
		
		int col=1;
		
		while(col<=row){ 
			cout<<row;
			col=col+1;
		}
		cout<<endl;
		row=row+1;
	}
*/
 

//[6] Homework- 1  234  4567 
/*
   int n;
	
	cout<<"Enter the no of rows: "<<endl;
	cin>>n;
	
	int row=1;
	int count=1;
	
	while(row<=n){
		
		int col=1;
		
		while(col<=row){ 
			cout<<count<<;
			count=count+1;
			col=col+1;
			
		}
		cout<<endl;
		row=row+1;
	}
*/
 

//[7] Triangle - (method-1) 1 23 345 4567
/*
    int n;
	
	cout<<"Enter the no of rows: "<<endl;
	cin>>n;
	
	int row=1;
	
	while(row<=n){
		
		int col=1;
		int value=row;
	
		while(col<=row){
			cout<<value;
			value=value+1;
			col=col+1;
		}
		cout<<endl;
		row=row+1;
	}
*/	


//[8] (method 2) -homework 
/*
    int n;
	
	cout<<"Enter the no of rows: "<<endl;
	cin>>n;
	
	int row=1;
	
	while(row<=n){
		
		int col=1;
	
		while(col<=row){ 
			cout<<col+row-1;
			col=col+1;
		}
		cout<<endl;
		row=row+1;
	} 
*/

    
//[9] Triangle case- 1 21 321 4321
/*	
	int n;
	
	cout<<"Enter the no of rows: "<<endl;
	cin>>n;
	
	int i=1;
	
	while(i<=n){
		
		int j=1;

		while(j<=i){ 
			cout<<i-j+1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
*/


//[10]
/*
    int n;
    cout<<"Enter the no of rows: "<<endl;
    cin>>n;
    
    int i=1;
    
    while(i<=n){
    	
		int j=1;
		
    	while(j<=n){
    	    char ch='A'+i-1;
    		cout<<ch;
    		j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
*/


//[11]-Homework
/*
    int n;
    cout<<"Enter the no of rows: "<<endl;
    cin>>n;
    
    int i=1;
    
    while(i<=n){
    	
		int j=1;
    	
    	while(j<=n){
    		char ch='A'+j-1;
    		cout<<ch;
    		j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
*/

//[12]- Homework
/*
    int n;
    cout<<"Enter the no of rows: "<<endl;
	cin>>n;
    
    int i=1;
    char start='A';
    
    while(i<=n){
  
    	int j=1;
  
    	while(j<=n){
    		cout<<start;
    		start+=1;
    		j+=1;
		}
		cout<<endl;
		i=i+1;
	}
*/


//[13]
/*
    int n;
    cout<<"Enter the no of rows: "<<endl;
    cin>>n;
    
    int i=1;
    
    while(i<=n){
    	
    	int j=1;
    	
    	while(j<=n){
    		char ch='A'+i+j-2;
			cout<<ch;
    		j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
*/


//[14]
/*
   int n;
   cout<<"Enter the no of rows: "<<endl;
   cin>>n;
   
   int i=1;
   
   while(i<=n){
   	
   	int j=1;
   	 
   	while(j<=i){
   	    char ch='A'+i-1;
   		cout<<ch;
   		j=j+1;
	   }
	   cout<<endl;
	   i=i+1;
   } 
*/


//[15]
/*
    int n;
    cout<<"Enter the no of rows:"<<endl;
    cin>>n;
    
    int i=1;
    char value='A';
    
    while(i<=n){
    	
    	int j=1;
    	
    	while(j<=i){
    		
    		cout<<value;
    		value=value+1;
    		j=j+1;
		}
		cout<<endl;
		i=i+1;
		
	}
*/

//[16]
/*
   int n;
   cout<<"Enter the no of rows: "<<endl;
   cin>>n;
   
   int i=1;
   int count=1;
   
   while(i<=n){
   	int j=1;
   	
   	while(j<=n){
   
   		cout<<count;
   		count=count+1;
   		j=j+1;
	   }
	   cout<<endl;
	   i=i+1;
   }
*/


//[17]
/*
   int n;
   cout<<"Enter the no of rows: "<<endl;
   cin>>n;
   
   int i=1;
   
   while(i<=n){
   	
   	int j=1;
   	
   	while(j<=i){
   		char ch='A'+i+j-2;
   		cout<<ch;
   		j=j+1;
	   }
	   cout<<endl;
	   i=i+1;
   }
*/


//[18]
/*
    int n;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n; 
    int i=1;

    while (i<=n){
    	
		int j=1;
	    char ch ='A'+n-i;
	
	while(j<=i){
		
		cout<<ch;
		ch=ch+1;
		j=j+1;
		
	}
	cout<<endl;
	i=i+1;
}
*/


//[19]
/*
    int n;
    cout<<"Enter the no of rows: "<<endl;
    cin>>n;
    
    int i;
    
    while(i<=n){
    	
		//space print karlo
		int space=n-i;
		
    	while (space){
    		cout<<" ";
    		space=space-1;
    		
    	}
    	
    	//star print karlo
		int j=1;
		
    		while(j<=i){
    			cout<<"*";
    			j=j+1;
    			
			}
		cout<<endl;
		i=i+1;
	}
*/
}



