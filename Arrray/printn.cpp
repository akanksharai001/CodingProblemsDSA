#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    if(n==0){
        return;
    }
    print1(n-1);
    cout<<n<<endl;
    
}
void print2(int n){
    if(n==0){
        return;
    }
 
    cout<<n<<endl;
    print1(n-1);
    
}
 int main()
{
    int n;
    cout<<"print the numbers";
    cin>>n;
    print1(n);
        cout<<"print the numbers in reverse"<<endl;
    print2(n);
    return 0;
}