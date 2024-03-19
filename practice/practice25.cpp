#include<iostream>
using namespace std;

void selectionsortdecreasing(int a[]){
    for(int i=0; i<5; i++){
        int index=i;
        for(int j=i+1; j<6; j++){
            if (a[j]>a[index])
            {
                index=j;
            }
            
        }
        swap(a[i],a[index]);
    }
}

void selectionsortincreasing(int a[]){
    for (int i = 0; i < 5; i++)
    {
        int index=i;
        for (int j = i+1; j < 6; j++)
        {
            if (a[j]<a[index])
            {
                index=j;
            }
            swap(a[index],a[i]);
        }
    }
}

void sortedarray(int a[]){
    for (int  i = 0; i < 6; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
    


int main(){
    // sort array in descending order
    int arr[6]={7,4,9,5,8,10};
    selectionsortdecreasing(arr);
    sortedarray(arr);

    selectionsortincreasing(arr);
    sortedarray(arr);
    

    /*for(int i=0; i<5; i++){
        int index=i;
        for(int j=i+1; j<6; j++){
            if (arr[j]>arr[index])
            {
                index=j;
            }
            
        }
        swap(arr[i],arr[index]);
    }
    for (int  i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }

    sort array from back of array
    for(int i=6; i>0; i--){
        int index=i;
        for(int j=i-1; j>=0; j--){
            if (arr[j]>arr[index])
            {
                index=j;
            }
            
        }
        swap(arr[i],arr[index]);
    }
    for (int  i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }

    //sort char in ascending order
    char ch[5]={'f','a','h','d','c'};
    for (int i = 0; i < 5; i++)
    {
        int index=i;
        for (int j =i+1; j < 5; j++)
        {
            if (ch[j]<ch[index])
            {
                index=j;
            }
            
        }
        swap(ch[i],ch[index]);
        
    }
    for (int  i = 0; i < 5; i++)
    {
        cout<<ch[i]<<" ";
    } */
}