#include<iostream.h>
#include<conio.h>

class A
{
public :
	 float hra,da;
	long int  gross_salary,salary,net_salary;
	 void gross(){
	 cout<<"enter the basic salary";
	 cin>>salary;
	 if(salary>90000)
	 {
	 hra=salary*0.2;
	 da=salary*0.07;
	 }
	  else if(salary>40000){
			     hra=salary*0.15;
			     da=salary*0.06;
			     }
	 else if(salary>20000)
	 {
	 hra=salary*0.1;
	  da=salary*0.03;
	  }

	 else  {
	 hra=salary*0;
	 da=salary*0;
	 }
	  gross_salary=salary+hra+da;
	  net_salary=gross_salary - salary;
	  }
  void print_salary()
  {
  cout<<"gross_salary "<<gross_salary;
  cout<<"net_salary"<<net_salary;
  }

};
void main()
{
A obj;
obj.gross();
obj.print_salary();
getch();
}