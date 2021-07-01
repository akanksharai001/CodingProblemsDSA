#include<iostream>
using namespace std;

 class student{
    public:
    int rollno;
    int age;

};
int main(){
    student s1;
    student s2;
    
    s1.age = 10;
    s1.rollno = 123;
    cout<<s1.age<<endl;
    cout<<s1.rollno<<endl;
}