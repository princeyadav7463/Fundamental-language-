// illustrates the use of inline functions.
/*
#include<iostream>
using namespace std;
	inline float mul(float x,float y)
	{
		return(x+y);
	}
	inline double div(double p,double q)
	{
		return(p/q);
	}
int main()
{
	float a=12.534;
	float b=43.345;
	cout<<mul(a,b)<<"\n";
	cout<<div(a,b)<<"\n";
	return 0;
}

*/

#include<iostream>
using namespace std;
class student
{
	protected:
	int roll_number;
	public:
		void get_number(int);
		void put_number(void);
};
void student::get_number(int a)
{
	roll_number=a;
}
void student :: put_number()
{
	cout<<"Roll Number="<<roll_number<<"\n";
}
class test:public student 
{
	protected:
		float sub1;
		float sub2;
	public:
		void get_marks(float,float);
		void put_marks(float x,float y)
		{
			sub1=x;
			sub2=y;
		}
		void test::put_marks()
		{
			cout<<"Marks in sub1="<<sub1<<endl;
			cout<<"Marks in sub2="<<sub2<<endl;
		}
		class result:public test
		{
			float total;
			public:
				void display(void);
		};
		void result::display(void)
		{
			Total=sub1+sub2;
			put-number();
			put_marks();
			cout<<"Total ="<<total<<endl;
		}
		int main()
		{
			result student1;
			student1.get_number(111);
			student2.get_marks(75.0,59.0);
			student1.display();
			return 0;
		}
}
