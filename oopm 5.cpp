#include<iostream>
using namespace std;
bool age(){
	int n;
	cout<<"Enter an age :";
	cin>>n;
	if(n<18){
		return false;
		}else{
			return true;
		}
	}
		int main(){
			cout<<"Bhavya Jain\n0827CI221043\n";
			bool age();
			if(age()==false){
				cout<<"You are not eligible to vote  :";
			}
				else{
					cout<<"you are eligible to vote :"; 
				}
			}

