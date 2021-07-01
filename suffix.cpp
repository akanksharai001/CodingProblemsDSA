#include<iostream>
#include<cstring>
using namespace std;
void suffix(char str[]){
    int len=strlen(str);
    for(int e=len-1;e>0;e--){
        for(int s=0;s<=e;s++){
            cout<<str[s];
        }
        cout<<endl;

    }

}
int main(){
    char str[100];
    cout<<"enter the string"<<endl;
    cin>>str;
    cout<<"suffix are "<<endl;
    suffix(str);
    
}