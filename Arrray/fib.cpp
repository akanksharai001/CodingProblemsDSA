 #include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    
    else{
        return fib(n-1)+fib(n-2);
    }
}

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    fib(n);
    cout<<"the fibnocci number is "<<fib(n);
    return 0;
}