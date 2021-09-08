#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int key){
    int s=0,e=n-1,mid;
    while(s<e){
        mid=s+(e-s)/2;
      
         if(a[mid]==key){
            return mid;
         }
         else if(a[mid]>key){
              e=mid-1;
           
          }
          else{
            s=mid+1;
        }
     

    }
    return -1;

    
    
}

int main(){
    int n,pos;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    pos=binarySearch(a,n,key);
    if(pos==-1){
        cout<<"Not Found";
    }
    else{
        cout<<"element found at pos  "<<pos;
    }

    return 0;
}
   