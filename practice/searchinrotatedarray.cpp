#include<iostream>
using namespace std;

int main(){
    int arr[5]={2,3,4,7,11};
    int missing[100];
    int k=5 , i=0 , j=0;
    for (int i = 1; i < 11; i++)
    {
        if (i!=arr[i])
        {
            missing[100]=i;
            j++;
        }
        else {
            continue;
        }
        
    }
    
    for (int j = 0; j <=k; j++)
    {
        cout<<missing[j];
    }
    cout<<endl;
    cout<<missing[k];
    
}