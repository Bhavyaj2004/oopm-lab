#include<iostream>
using namespace std;
float area(float r){
	return 3.14*r*r;
}
double area(double  a){
	return a*a;
}
double area(double a, double b){
	return a*b;0;
}
int main(){
	cout<<"Bhavya Jain\n0827CI221043\n";
	float r;
	double a,b,s;
	cout<<"Enter radius of a circle :"<<area(r)<<"\n";
	cout<<"Enter side of square :";
	cin>>s;
	cout<<"Area of square : "<<area(s)<<"\n";
	cout<<"Enter length and beadth of rectangle :";
	cin>>a>>b;
	cout<<"Area of rectangle :"<<area(a,b)<<"\n";
	return 0; 
}
