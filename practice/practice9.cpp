#include<iostream>
using namespace std;

int main(){
    for (int i = 1; i <=7; i++)
    {
        if (i==1 || i==2 || i==3 || i==4 || i==5)
        for (int j = 1; j <=i; j++)
        {
            cout<<j;   
        }
        else
        {
            for (int j = 1; j <=6; j++)
            {
                cout<<j;
            }
            
        }
        
        cout<<endl;
        
    }
    
}