#include <iostream>
using namespace std;

int main(){
    


    //sort thr array in discending order
    // for(int i=0; i<4; i++){
    //     int index=i;
    //     for(int j=i+1; j<=4; j++){
    //         if(arr[j]>arr[index]){
    //            index=j;
    //         }
    //     }
    //     swap(arr[i],arr[index]);
    // }
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;


    // //sort the array in ascending order but start from last.
    // for(int i=4; i>0; i--){
    //     int index = i;
    //     for(int j=i-1; j>=0; j--){
    //         if(arr[j]>arr[index]){
    //            index=j;
    //         }
    //     }
    //     swap(arr[i],arr[index]);
    // }
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    

    // //sort the array of char in ascending order
    // char ch[5]={'d','h','a','r','i'};
    // for(int i=0; i<4; i++){
    //     int index=i;
    //     for(int j=i+1; j<=4; j++){
    //         if(ch[j]<ch[index]){
    //            index=j;
    //         }
    //     }
    //     swap(ch[i],ch[index]);
    // }
    // for(int i=0; i<5; i++){
    //     cout<<ch[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=4; i>0; i--){
    //     int index = i;
    //     for(int j=i-1; j>=0; j--){
    //         if(ch[j]>ch[index]){
    //            index=j;
    //         }
    //     }
    //     swap(ch[i],ch[index]);
    // }
    // for(int i=0; i<5; i++){
    //     cout<<ch[i]<<" ";
    // }

int arr[5]={5,4,7,2,9};
for (int j = 0; j < 5; j++)
{
for (int i = 0; i < 4; i++)
{
   if (arr[i]>arr[i+1])
   {
    swap(arr[i],arr[i+1]);
   }
   
   
}
}
for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
}


    
}