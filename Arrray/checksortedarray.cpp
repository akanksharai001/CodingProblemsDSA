 #include<iostream>
using namespace std;
bool issorted(int a[],int n){
    if(n==0 ||n==1){
        return  true;
    }
    if(a[0]>a[1]){
        return false;
    }
    return issorted(a+1,n-1);
 
}

int main()
{
  
    int a[5]={1,2,3,4,5};
    if(issorted(a,5)){
        cout<<"sorted";
    }
    else{
    cout<<"not sorted";
    }
    
    
    return 0;
}