 #include<iostream>
using namespace std;
int linearSearch(int a[],int n, int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
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
    pos=linearSearch(a,n,key);
    if(pos==-1){
        cout<<"Not Found";
    }
    else{
        cout<<"element found at pos  "<<pos;
    }

    return 0;
}