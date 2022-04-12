#include<iostream>
using namespace std;
class abc
{
  int a;
  public:
  abc()            //default constructor
  {
      a=0;
  }
  abc(int x)        //parameterised constructor
  {
      a=x;
  }
 /* abc(abc &obj)           //copy constructor
  {
      a=obj.a;
      cout<<"copy"<<endl;
  }*/
  void pdata()
  {
      cout<<"value"<<a<<endl;
  }
  
};
int main()
{
    abc m1,m2,m3(50);//call the parameterised constructor
    m1.pdata();
    m2.pdata();
    m3.pdata();
    abc m4(m3);// call the copy constructor
    m4.pdata();
    abc m5=m3;
    m5.pdata();
    //m4.pdata();
    return 0;
}