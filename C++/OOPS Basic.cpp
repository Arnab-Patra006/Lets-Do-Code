#include<iostream>
#include<cmath>
using namespace std;

class simplecalculator
{
	float a,b;
	public:
		void getdata()
		{
			cout<<"Enter the values of a "<<endl;
			cin>>a;
			cout<<"Enter the values of b"<<endl;
			cin>>b;
		}
		
		void perform_operators()
		{
			cout<<"The value of a+b is :"<<a+b<<endl;
			cout<<"The value of a-b is :"<<a-b<<endl;
			cout<<"The value of a*b is :"<<a*b<<endl;
			cout<<"The value of a/b is :"<<a/b<<endl;
		}
};

class scientificcalculator
{
	float a,b;
	public:
		void getdata_scientific()
		{
			cout<<"Enter the values of a "<<endl;
			cin>>a;
			cout<<"Enter the values of b"<<endl;
			cin>>b;
		}
		
		void perform_operators_scientific()
		{
			cout<<"The value of sin(a) is :"<<sin(a)<<endl;
			cout<<"The value of cos(a) is :"<<cos(a)<<endl;
			cout<<"The value of tan(a) is :"<<tan(a)<<endl;
			cout<<"The value of exp(b) is :"<<exp(b)<<endl;
		}
};

class hybridcalculator:public simplecalculator,public scientificcalculator
{
	
};

int main()
{
	/*simplecalculator ob;
	ob.getdata();
	ob.perform_operators();

    scientificcalculator ab;
    ab.getdata_scientific();
    ab.perform_operators_scientific();*/
    
    hybridcalculator calc;
    calc.getdata();
    calc.perform_operators();
    
    calc.getdata_scientific();
    calc.perform_operators_scientific();
return 0;
}
