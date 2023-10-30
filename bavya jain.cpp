#include<iostream>
using namespace std;
class A{
	public: int a,b;
	int Sub(int a,int b){
		return a-b;
	}
};
int main(){
	A a;
	cout<<"\nBhavya Jain\n0827CI221043\n";
	cout<<"Enter two numbers: ";
	int c,d;
	cin>>c>>d;
	cout<<"sub="<<a.Sub(c,d);
}
