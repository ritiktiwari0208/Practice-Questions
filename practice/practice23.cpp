#include <iostream>
using namespace std;

int main(){

    //smallest missing number
    int a[5]={0,1,2,3,4};
    for (int i = 1; i < 5; i++)
    {
        if (a[i]>0)
        {
            int value=a[i]-a[i-1];
            if (value==1)
            {
                continue;
            }
            else{
                cout<<a[i]-1<<endl;
                break;
            }
            
        }
        else{
            continue;
        }
        
    
    }
    cout<<a[4]+1;

    
}