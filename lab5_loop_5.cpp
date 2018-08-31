//define the some from of all natural nos
//define library
#include<iostream>
using namespace std;
//define function
int main(){
	//define variable
	int n;
	//ask the user about its value
	cout<<"Till the natural no "<<endl;
	cin>>n;
	if(n<1){
		cout<<"The input is not a natural number.";
		}
	else{
		int s=n*(n+1)/2;
		cout<<"The sum is="<<s<<endl;
		}
	return 0;
	}
