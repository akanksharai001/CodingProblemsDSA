#include<iostream>
using namespace std;
void reversearray(int a[],int start,int end){
    while(start<end){
       swap(a[start],a[end]);
        end--;
        start++;
    }

}
void printArray(int a[], int size)
{
   for (int i = 0; i < size; i++)
   cout << a[i] << " ";
 
   cout << endl;
}

int main(){
     int n;
    int a[n];
    cout<<"Enter the size"<<endl;
    cin>>n;
   
    cout<<"Enter the elements in array"<<endl;
     for (int i = 0; i < n; i++){
           cin>>a[i];
     }
     cout<<"Original Array"<<endl;
     printArray(a,n);
     reversearray(a,0,n-1);
     cout<<"Reverse array"<<endl;
      printArray(a,n);




}