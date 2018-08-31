//No is +ve, -ve or 0
//include library
#include<iostream>
using namespace std;
//define function
int main(){
	//define variable
	float a;
	//ask the user if its value
	cout<<"Give the value"<<endl;
	cin>>a;
	//putting the condition
	if(a<0){
		cout<<a<<" is negative.";
		}
	else if(a>0){
		cout<<a<<" is positive.";
		}
	else{
		cout<<a<<" is equal to zero.";
		}
	return 0;	
	}
