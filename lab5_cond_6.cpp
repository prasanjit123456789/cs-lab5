//include library
#include<iostream>
using namespace std;
//define library
int main(){
	//declair variable
	int a;
	//ask the user about the year
	cout<<"Enter the year-"<<endl;
	cin>>a;
	//leap year is divisible by 4
	int b=a%4;
	//condition
	if(b==0){
		cout<<"It is a leap year.";
		}
	else{
		cout<<"It is not a leap year";
		}
	return 0;
	}
