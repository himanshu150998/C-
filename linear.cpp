#include<iostream>
using namespace std;
int linear(int a[],int n,int key)
{
    int count=0;
    for( int i=0;i<n;i++)
    {
        if(a[i]==key)
       // cout<<"position is"<<i+1;
        return i+1;        
}
return -1;
}
int main()
{
    int n,key;
    int a[n];
    cout<<"enter the elements";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    cout<<"enter the key";
    cin>>key;
    cout<<linear(a,n,key);
    return 0;
    
}
