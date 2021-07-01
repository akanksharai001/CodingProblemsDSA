#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    int a[n];
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  
    cout<<"array before sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
      cout<<endl;
    sort(a,a+n);
      cout<<endl;
    cout<<"array after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
      cout<<endl;
    cout<<" enter the kth postion"<<endl;
    cin>>k;
    if(k<n){
        cout<<"the smallest kth no is "<<a[k-1]<< endl;
    }
    else{
        cout<<"postion not found"<<endl;
    }



    
}