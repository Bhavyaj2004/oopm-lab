#include<iostream>
using namespace std;
class A{
	public:
		double a,b;
		int val=0;
		A(int x, int y){
			a=x;
			b=y;
		}
		void operator ++(){
			++val;
			cout<<a<<" + "<<b<<" = "<<a+b<<"\n";
		}
		void operator ++(int ){
			val++;
			cout<<a<<" - "<<b<<" = "<<a-b;
		}
};
int main(){
	cout<<"Bhavya Jain\nEnrollment no.0827CI221043";
	A a(10,20);
	++a;
	a++;
}
