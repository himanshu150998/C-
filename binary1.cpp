#include<iostream>
using namespace std;
int binary(int a[], int n,int key)
{
    int s=0;
    int e=n;
    int mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(a[mid]==key)
        return mid+1;
        else if(a[mid]<key)
        s=mid+1;
        else
        e=mid-1;
    }
    return -1;
}
int main()
{
    int n,key,temp;
    int a[n];
    cout<<"enter the numbers";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"elements in sorting order";
    for( int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"enter the search key";
    cin>>key;
    cout<<binary(a,n,key);
    return 0;
    
}