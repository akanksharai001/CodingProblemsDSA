#include<iostream>
using namespace std;
void unionSorted(int a1[],int a2[],int n1, int n2){
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(a1[i] < a2[j]){
            cout<<a1[i]<<" ";
            i++;
        }
        else if (a2[j] < a1[i]){
             cout<< a2[j]<< " ";
             j++;

        }
        else{
            cout<<a2[j]<<" ";
            j++; 
            i++;
        }

    }
    while(i<n1){
        cout<<a1[i]<<" ";
        i++;
    }
    while(j<n2){
        cout<<a2[j]<<" ";
        j++;
    }

}
int main(){
    int n1,n2;
    cout<<"enter the size of both array"<<endl;
    cin>>n1;
    cout<<endl;
    cin>>n2;
    
    int a1[n1],a2[n2];
    cout<<" enter the element in first array"<<endl;
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    cout<<endl;
    cout<<" enter the element in second array"<<endl;
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    cout<<"both array"<<endl;
    for(int i=0;i<n1;i++){
        cout<<a1[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<n2;i++){
        cout<<a2[i]<<" ";
    }
    cout<<endl;
    cout<<"Union of both Array"<<endl;
    unionSorted(a1,a2,n1,n2);
    return 0;

}
