 #include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    fact(n);
    cout<<"factorial is "<< fact(n)<<endl;
   

    
    return 0;
}