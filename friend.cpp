#include<iostream>
using namespace std;
class A
{
    int x;
    friend void addvalue(A);
    public:
    A()
    {
        x=0;
    
    }
    A(int z)
    {
        x=z;
        
    }
    void pdata()
    {
        cout<<"value"<<x;
    }
};
void addvalue(A obj)
{
    obj.x=100;
    cout<<obj.x;
}
int main()
{
    A obj;
    addvalue(obj);
    return 0;
    
}