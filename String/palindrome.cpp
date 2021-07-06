#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;

    cout<<"enter the string"<<endl;
    getline(cin,str1);
    cout<<"Original string"<<endl;
    cout<<str1;
    cout<<endl;
    std :: string str2(str1);
    reverse (str2.begin(),str2.end());
    cout<<"Reverse string"<<endl;
    cout<<str2;
    cout<<endl;
    if(str1==str2){
        cout<<"Given string is Palindrome"<<endl;
    }
    else{
        cout<<"Given string is not Palindrome"<<endl;
    }

    



}