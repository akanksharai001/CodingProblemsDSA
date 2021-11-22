 #include<iostream>
using namespace std;
int count(int n){
    if(n==0){
        return 0;
    }
    
    int last=n%10;
    if(last==0){
        return 1+count(n/10);
    }
    return count(n/10);

}

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"the number of zero is "<<count(n);
    return 0;
}