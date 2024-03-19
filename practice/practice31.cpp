#include <iostream>
using namespace std;

int main(){
    
    

/*// sqrt[x]
    int target=40;
    int  start=0 , end=target, mid , ans;
    while(start<=end){
        mid=start+(end-start)/2;
        if (mid*mid==target)
        {
            ans=mid;
            break;
        }
        else if(mid*mid<target){
            start=mid+1;
            ans=mid;
        }
        else{
            end=mid-1;
            
        }
        
    }
    
    cout<<ans;*/
    

    //for first
    int nums[8]={2,7,7,7,7,7,7,15};
    int target=7;
    int  first=-1 , last=-1 ;
    for (int i = 0; i < 8; i++)
    {
        if (nums[i]==target)
        {
            if (first==-1)
            {
                first=i;
            }
            else{
                last=i;
            }
            
        }
        
    }
    cout<<first<<" , "<<last;
    
    /*int  start=0 , end=7, mid , first=-1 , last=-1 ;
    if (first==-1)
    {
    while(start<=end){
        mid=start+(end-start)/2;
        if (nums[mid]==target)
        {
            first=mid;
            end=mid-1;
            
        }
        else if(nums[mid]<target){
            start=mid+1;

        }
        else{
            end=mid-1;
            
        } 
    }
    
    }
    
    
    //for last
    else{
    while(start<=end){
        mid=start+(end-start)/2;
        if (nums[mid]==target)
        {
            last=mid;
            start=mid+1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        
    }
    }
    
    cout<<first<<" , "<<last;*/
    int num=80;
    int ans , start=0 , end=num , mid;
    if(num<2)
    ans=num;
    mid=start+(end-start)/2;
    while (start<=end)
    {
        if (mid==num)
        {
           ans=mid; 
        }
        
    }
    

    
}