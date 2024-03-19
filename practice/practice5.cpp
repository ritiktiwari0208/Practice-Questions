#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for (int i = 280; i >=250; i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for (int i = 0; i <=25; i++)
    {
        char ch='A'+i;
        cout<<ch<<" ";
    }
    cout<<endl;
    for (int i = 25; i >=0; i--)
    {
        char ch='A'+i;
        cout<<ch<<" ";
    }
    cout<<endl;
    for (int i = 220; i <=730; i+=7)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    int ans=0;
    for (int i = 1; i <=num; i++)
    {
        ans=ans+i*i;
        
    }
    cout<<ans<<endl;
    
    int last=0,pre=1,curr,n;
   cout<<"enter value of n: ";
   cin>>n;
   for(int i=0; i<n-2; i++){
    curr=last+pre;
    last=pre;
    pre=curr;
   }
cout<<curr;
    

    
    
}
