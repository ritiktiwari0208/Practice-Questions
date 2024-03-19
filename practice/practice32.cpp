#include<iostream>
using namespace std;

int main(){
    int arr[6]={2,3,5,7,1,4};
    int target=1;
    int start=0 , end=5 , mid , ans;
    /*while (start<=end)
    {
        mid=end+(start-end)/2;
        //peak element
        if (arr[mid]>arr[mid+1]&&arr[mid>arr[mid-1]])
        {
            return mid;
        }
        //right side move
        else if (arr[mid]>arr[mid-1])
        {
            start=mid+1;
        }
        //left side move
        else{
            end=mid-1;
        }  
    }
    
    return -1;*/
    mid=end+(start-end)/2;
    if (arr[0]>target){
        while (start<=end)
        {
          if (arr[mid]==target)
          {
            ans=mid;
          }
          else if (arr[mid]>arr[0])
          {
            start=mid+1;
          }
          else {
            end=mid-1;
          }
            
        }
        cout<<ans;
        
    }
    else {
        while (start<=end)
        {
          if (arr[mid]==target)
          {
            ans=mid;
          }
          else if (arr[mid]>arr[0])
          {
            end=mid-1;
          }
          else {
            start=mid+1;
          }
            
        }
        cout<<ans;
    }
   
}