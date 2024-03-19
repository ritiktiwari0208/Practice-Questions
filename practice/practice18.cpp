#include <iostream>
using namespace std;
int cube(int n){
    int ans = n*n*n;
    return ans;
}
int reverse(int n){
    int rem , ans=0;
    while (n)
    {
       rem = n%10;
       n/=10;
       ans=ans*10+rem;
    }
    return ans;
    
}
void valuegives(int &a , int &b , int &c){
    int temp=a;
    a=c;
    c=b;
    b=temp;
}
void swap(int &x,int &y){
    x=x+y;
    y=x-y;
    x=x-y;

}
int factorial(int n){
    int ans=1;
    for (int i = 1; i<=n; i++)
    {
       ans=ans*i; 
    }
    return ans;
    
}
int combination(int n , int r , int s){
    int ans = n/r*s;
    return ans;
}

int main(){
    int num,a,b,c,x,y,n,r;
    cout<<"Enter number: ";
    cin>>num>>a>>b>>c>>x>>y>>n>>r;
    cout<<cube(num)<<endl;
    cout<<reverse(num)<<endl;
    valuegives(a,b,c);
    cout<<a<<" "<<b<<" "<<c<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    int f1=factorial(n);
    int f2=factorial(r);
    int f3=factorial(n-r);
    cout<<f1<<" "<<f2<<" "<<f3<<endl;
    cout<<combination(f1,f2,f3);
    


    

}