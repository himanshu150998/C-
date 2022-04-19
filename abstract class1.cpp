#include<iostream>
#define pie 3.14
using namespace std;
class shape{
    
    double h,w;
    
    public:
    int abc(int x)
    {
        h=x;
        return h;
    }
    int xyz(int y)
    {
        w=y;
        return w;
    }
    virtual double perimeter()=0;//pure virtual function
     void show(A);
};
void A::show()
{
    
}
class rectangle:public shape{
    public:
    double perimeter()
    {
        return 2*(abc(55)+xyz(55));
    }
};
class circle:public shape{
    public:
    double perimeter(){
        return 2*pie*xyz(55);
        
    }
};
int main()
{
    rectangle o;
    circle o1;
   // o.abc();
    //o.xyz(33);
    cout<<o.perimeter()<<endl;
    cout<<o1.perimeter()<<endl;
   // o.h=50.00;
    //o.w=2.00;
    return 0;
}