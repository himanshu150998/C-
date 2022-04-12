#include<iostream>
using namespace std;
int a=0;
class complex
{
    public:
    complex(){
        a++;
        cout<<"constructor running"<<endl<<a<<endl;
    }
    ~complex(){
        cout<<"destructor running"<<endl<<a<<endl;
        a--;
       
    }
};
int main()
{
    complex m1;
    {
        cout<<"entry";
        complex m2,m3;
        cout<<"exit";
    }
    return 0;
}
