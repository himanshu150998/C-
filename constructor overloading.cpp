#include<iostream>
using namespace std;
class chetu{
    int room,croom;
    public:
    chetu(){
        room=0;
        croom=0;
        cout<<"1";
    }
    chetu(int x,int y){
        room=x;
        croom=y;
        cout<<"2";
        
    }
    chetu(int x,float y){
        room=x;
        croom=y;
        cout<<"3";
        
    }
    chetu(double x,double z=55.44){
        room=x;
        croom=z;
        cout<<"4"<<endl;
        
    }
    
    void pdata(){
        cout<<room<<endl<<croom<<endl;
    }
        };
int main()
{
    chetu emp(10,12.11f);
    emp.pdata();
    chetu emp1=chetu(13.11);// chetu emp1(13.11)
    emp1.pdata();
    return 0;
}