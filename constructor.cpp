#include<iostream>
using namespace std;
class chetu{
    int room,croom;
    public:
    chetu(){
        room=0;
        croom=0;
    }
    chetu(int x,int y){
        room=x;
        croom=y;
    }
    void pdata(){
        cout<<room<<endl<<croom<<endl;
    }
        };
int main()
{
    chetu emp;
    emp.pdata();
    return 0;
}
