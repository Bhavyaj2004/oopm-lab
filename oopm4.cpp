#include<iostream>
using namespace std;
int print(int n){
	return n;
}
int main(){
	cout<<"Bhavya Jain\n0827CI221043\n";
	int print(int); // decleraing a function
	int n;
	cout<<"Enter a number of your choice :";
	cin>>n;
	cout<<"Your number is :"<<print(n); // calling a function
}

