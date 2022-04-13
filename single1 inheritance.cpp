#include<iostream>
using namespace std;
class base{
    int num1,num2;
    public:
    void set_value();
    //base();
    int getvalue1();
    int getvalue2();
};
class derived:public base{
    public:
    int num3;
    void multiply();
    void result();
};
void base::set_value()
{
    num1=50;
    num2=60;
};
/*base::base()
{
    num1=50;
    num2=60;
}*/
int base::getvalue1()
{
    return num1;
    
};
int base::getvalue2()
{
    return num2;
};
void derived::multiply()
{
    base::set_value();
    num3=getvalue1()*getvalue2();
};
void derived::result()
{
    cout<<"number 1  "<<getvalue1()<<endl;
     cout<<"number 2  "<<getvalue2()<<endl;
      cout<<"result "<<num3<<endl;
};
int main()
{
    derived obj;
    //obj.set_value();
    obj.multiply();
    obj.result();
    return 0;
}