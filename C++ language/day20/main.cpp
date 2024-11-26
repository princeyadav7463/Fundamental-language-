/*

#include<iostream>
using namespace std;
class Time
{
	public:
	int h,m,s;
	public:
		time()
		{
			h=0,m=0,s=0;
		}
		void setTime();
		void show()
		{
			cout<<h<<":"<<m<<":"<<s;
		}
		Time operator +(Time);
};

Time Time::operator +(Time t1)
{
	Time t;
	int a,b;
	a=s+t1.s;
	t.s=a%60;
	b=(a/60)+m+t1.m;
	t.m=b%60;
	t.h=(b%60)+h+t1.h;
	t.h=t.h%12;
	return t;
}
void Time::setTime()
{
	cout<<"|n Enter hour =";
	cin>>h;
	cout<<"\n Enter minute=";
	cin>>m;
	cout<<"\n Enter second=";
	cin>>s;
}
int main()
{
	Time t1,t2,t3;
	cout<<"\n Enter First time";
	t1.setTime();
	cout<<"\n Enter second time";
	t2.setTime();
	t3=t1+t2;
	cout<<"\n first time";
	t1.show();
	cout<<"\n second time";
	t2.show();
	cout<<"\n sum :";
	t3.show();
	return 0;
}

*/

// Program to illustrate the working of objects and class in c++ programming.

/*
#include<iostream>
using namespace std;
class Room{
	public:
		double length;
		double breadth;
		double height;
		double calculateArea(){
			return length*breadth;
		}
		double calculateVolume(){
			return length*breadth;
		}
};
int main(){
	Room room1;
	room1.length=42.5;
	room1.breadth=30.8;
	room1.height=19.2;
	cout<<"Area of Room="<<room1.calculateArea()<<endl;
	cout<<"Volume of Room="<<room1.calculateVolume()<<endl;
	return 0;
}

*/

//Program to illustrate the working of public and private in c++ class.

/*
#include<iostream>
using namespace std;
class Room{
	private :
		double length;
		double breadth;
		double height;
		public:
			void getData(double len,double brth,double hgt){
				length=len;
				breadth=brth;
				height=hgt;
			}
			double calculateArea(){
				return length*breadth;
			}
			double calculateVolume(){
				return length*breadth*height;
			}
};
int main(){
	Room room1;
	room1.getData(42.5,30.8,19.2);
	cout<<"Area of Room="<<room1.calculateArea()<<endl;
	cout<<"Volume of Room="<<room1.calculateVolume()<<endl;
	return 0;
}

*/

//Public access modifier.

#include<iostream>
using namespace std;

public:
	int age;
	void displayAge(){
		cout<<"age="<<age<<endl;
	}
int main(){
	sample obj1;
	cout<<"Enter your age=";
	cin>>obj1.age;
	obj1.displayAge();
	return 0;
}
