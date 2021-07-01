#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter the value of a and b "<<endl;
    cin>>a>>b;
    // temp=a;
    // a=b;
    // b=temp;
    // a=a^b; // with the help of xor operator
    // b=a^b;
    // a=a^b;
    swap(a,b);// inbuilt function in cpp
    cout<<"swap values  a= "<<a<<" b= "<<b;
}