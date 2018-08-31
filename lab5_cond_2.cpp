//maximum between three no.s
//include library
#include<iostream>
using namespace std;
//define function
int main(){
//declair variable
  float a,b,c;
//ask the user about the values
	cout<<"The values of the variables"<<endl;
	cin>>a>>b>>c;	
//put condition
	bool d= a>b;
	bool e= b>c;
	bool f= a>c;
	if(d==1 && e==1){
		cout<<"The maximum is "<<a;
		}
        else if(d==0 && e==1){
		cout<<"The maximum is "<<b;
		}
	else if(d==1 && e==0 && f==0){
		cout<<"The maximum is "<<c;		
		}
	else{
		cout<<"The maximum is "<<a;		
		}

	return 0;
	}
