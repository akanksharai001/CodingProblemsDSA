 #include<iostream>
using namespace std;
void selectionSort(int a[],int n){
    for(int i=0;i<=n-2;i++){
        int smallest=i;
        for(int j=i+1;j<=n-1;j++){
            if(a[j]<a[smallest]){
                smallest=j;
            }

        }
    
            swap(a[i],a[smallest]);
        

    }

}

 int main()
{
    int n;
    cout<<"enter the number of element"<<endl;
    cin>>n;
    int a[n];
     cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
      cout<<"Array before sorting"<<endl;
      for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    selectionSort(a,n);
     cout<<"Array after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }



    
    return 0;
}