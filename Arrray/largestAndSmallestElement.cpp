#include<iostream>
using namespace std;
int main(){
    int l=INT_MIN;
    int s=INT_MAX;
    int a[10],n;
    cout<<"enter the  no of element in array"<<endl;
    cin>>n;
    cout<<" enter the elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
     for(int i=0;i<n;i++){
         if(a[i]>l){
             l=a[i];

         }
         
     }
     for(int i=0;i<n;i++){
         if(a[i]<s){
             s=a[i];

         }
     }
     cout<<" the largest  element in array is  "<<l<<endl;
     cout<<" the smallest element in array is  "<<s<<endl;
}
