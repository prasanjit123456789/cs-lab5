//include library
#include<iostream>
using namespace std;
//define function
int main(){
	//define variable
        int a;
	//ask the user about the value
	cout<<"Give the no "<<endl;
	cin>>a;
	//divisibility by 5 and 11
	int b=a%55;
	//condition
	if(b==0){
		cout<<"The no. is divisible by 5 and 11.";
		}
	else{
		cout<<"The no. is not divisible by 5 and 11";		
		}
	}
