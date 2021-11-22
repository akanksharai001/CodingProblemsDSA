 #include<bits/stdc++.h>
using namespace std;
int count(int n){
    if(n==0){
        return 0;
    }
    return count(n/10)+1;
}

int main(){

 int n;
 cout<<"enter the number"<<endl;
 cin>>n;
 count(n);
 cout<<"the number of digit is "<<count(n);


    return 0;
}