#include<iostream>
using namespace std;
int main(){
    int a[5],sum=0;
    cout<<"Enter the element in the array"<<endl;
    for (int i = 0; i < 5; i++)
    {
       cin>>a[i];
       sum=sum+a[i];
    }
    cout<<"the sum of element of array is  "<<sum;
    
}