//the sum of the even nos between 1 ton
//defrine library
#include<iostream>
using namespace std;
//define library
int main(){
	//define vfariable
	int n;
	//ask the user about its value
	cout<<"Till the no ";
	cin>>n;
	//conditions
	if(n<3){
		cout<<"Can't be determined.";
		}
	//if n is even
	else if(n%2==0){
		cout<<(n*(n-2))/4;
		}
	//if n is odd
	else{
		cout<<((n*n)-1)/4;
		}
	return 0;
	}
