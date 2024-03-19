#include<iostream>
using namespace std;

int main(){
    int degree , num , age;
    cout<<"enter the degree , number , age: ";
    cin>>degree>>num>>age;
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if (degree>70&&degree<90)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    cout<<endl;
    if (num%2==0&&num>0)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    cout<<endl;
    if (age>=13&&age<=19)
    {
        cout<<"Teenager";
    }
    cout<<endl;
    if (a>b&&a>c)
    {
        cout<<"A is greater than b&c.";
    }
    else{
        cout<<"Not greater";
    }
    
    
    
    
}