#include<iostream>
using namespace std;

int main(){
    int arr[5]={4,7,2,9,1};
    for (int i = 1; i < 5; i++)
    {
        
        for (int j = i; j > 0; j--)
        {
            if (arr[j]>arr[j-1])
            {
                swap(arr[j-1],arr[j]);
            }
            else{
                break;
            }  
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    for (int i = 4; i >1; i--)
    {
        
        for (int j = i; j > 0; j--)
        {
            if (arr[j]>arr[j-1])
            {
                break;
            }
            else{
                swap(arr[j-1],arr[j]);
                
            }  
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    
}