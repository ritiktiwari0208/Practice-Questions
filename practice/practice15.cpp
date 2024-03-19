#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    /*int i=0;
    while (i<=num)
    {
        if (i%2==0)
        {
            cout<<i<<" ";
        }
        
        i++;
    }
    cout<<endl;
    int i=1;
    int ans=1;
    while(i<=num){
        ans=ans*i;
        i++;
    }
    cout<<ans<<endl;
    int i=0;
    while (i<=num)
    {
        if (i%3==0&&i%5==0)
        {
            cout<<i<<" ";
        }
        
        i++;
    }
    cout<<endl;
    
}

switch (num)
{
case 1:
    cout<<"January";
    break;
case 2:
    cout<<"February";
    break;
case 3:
    cout<<"March";
    break;    
case 4:
    cout<<"April";
    break;
case 5:
    cout<<"May";
    break; 
case 6:
    cout<<"June";
    break;
case 7:
    cout<<"July";
    break;           
case 8:
    cout<<"August";
    break;
case 9:
    cout<<"September";
    break;
case 10:
    cout<<"October";
    break;
case 11:
    cout<<"November";
    break;
case 12:
    cout<<"December";
    break;
    
}*/
char ch='A';
int i=0;
while (i<=59)
{
    char ans=ch+i;
    cout<<ans<<" ";
    i++;
}
cout<<endl;




}