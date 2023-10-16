#include <iostream>

using namespace std;

void print1(int a){
    cout<<"ÿour number is : "<<a;// defining  a function
}
void print2(int *b){
    cout<<"your number is : "<<*b; // deining a function
}
int main(){
    cout<<"Bhavya Jain \n0827CI221043";
    void print1(int);// declearing a function
    int a,b;
    cout<<"Ënter any number:";
    cin>>a>>b;
    print1(a);
    print2(&b);// clling in a function
    

    return 0;
}

