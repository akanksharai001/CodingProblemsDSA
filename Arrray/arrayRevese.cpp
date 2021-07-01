#include<iostream>
using namespace std;
int main(){
    int n ,a[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"normal order"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        
    }
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
    cout<<endl;
    cout<<"Reverse order"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        
    }

    
    
}