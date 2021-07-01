#include<iostream>
using namespace std;
void rightRotateByOne(int a[], int n) 
{
   int t = a[n-1];
   for (int i = n-1; i > 0; i--)
      a[i] = a[i-1];
   a[0] = t;
}
void leftRotateByOne(int a[], int n) 
{
   int t = a[0];
   for (int i = 0; i <n-1; i++)
      a[i] = a[i+1];
   a[n-1] = t;
}
void printarray(int a[],int n){
 for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
}

int main(){
    int n;
    int a[n];
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    cout<<"array befor rotation"<<endl;
    printarray(a,n);
    cout<<endl;
    cout<<"array after right rotate by one "<<endl;
    rightRotateByOne(a,n);
    printarray(a,n);
    cout<<endl;
    cout<<"array after left rotate by one "<<endl;
    leftRotateByOne(a,n);
    printarray(a,n);



}
