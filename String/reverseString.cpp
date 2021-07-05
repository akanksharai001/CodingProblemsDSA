#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter the string"<<endl;
    getline(cin,str);
    cout<<"Original string"<<endl;
    cout<<str;
    cout<<endl;
    reverse (str.begin(),str.end());
    cout<<"Reverse string"<<endl;
    cout<<str;


}