#include<iostream>
using namespace std;
int main(){
    int n;
    int a[n];
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<" enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            if(i!=j){
                swap(a[i],a[j]);
                j++;
            }
        }
    }
    cout<<" Array after Rearrange"<<endl;
     for(int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
    
}