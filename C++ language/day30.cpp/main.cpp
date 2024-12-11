//C++ new and delete operator for objects
/*

#include<iostream>
using namespace std;
class student{
	int age;
	public:
		student():age(12){}
	void getage(){
		cout<<"Age="<<age<<endl;
	}
};
int main(){
	student *ptr=new student();
	ptr->getage();
	delete ptr;
	return 0;
}

*/

//Program to demonstrate inheritance.
/*
#include<iostream>
using namespace std;
class Animals{
	public:
		void eat(){
			cout<<"I can eat!"<<endl;
		}
		void sleep(){
			cout<<"I can sleep!"<<endl;
		}
};
class Dog:public Animals{
	public:
		void bark(){
			cout<<"I can bark! woof woof!!"<<endl;
		}
};
int main(){
	Dog dog1;
	dog1.eat();
	dog1.sleep();
	dog1.bark();
	return 0;
}

*/
/*


#include<iostream>
using namespace std;
class A{
	public:
	void display(){
		cout<<"Base class content";
	}
};
class B:public A{};
class C:public B{};
int main(){
	C obj;
	obj.display();
	return 0;
}

*/
/*
#include<iostream>
using namespace std;
class A;
class B{
	public:
		int a;
		void getdata(int n)
		{
			a=n;
		}
		friend int sum(A,B);
};
class A{
	public:
		int b;
		void getdata(int m){
			b=m;
		}
		friend int sum(A,B);
};
int sum(A m, B n){
	int result;
	result=m.b+n.a;
	return  result;	
}
int main()
{
	B obj1;
	A obj2;
	obj2.getdata(10);
	obj1.getdata(20);
	cout<<"Result of sum="<<sum(obj2,obj1);
	return 0;
}
*/

// C++ Program to demonstrate the working of friend function.
/*
#include<iostream>
using namespace std;
class Distance{
	private:
	int meter;
	friend int addfive(Distance);
	public:
	Distance(): meter(0){}
};
int addfive(Distance d){
	d.meter +=5;
	return d.meter;
}
int main(){
	Distance D;
	cout<<"Distance:"<<addfive(D);
	return 0;
}
*/

//Add members of two different classes using frined functions.
/*
#include<iostream>
using namespace std;
class classA{
	public:
		classA():numA(12){}
	private:
		int numA;
};
class classB{
	public:
		classB():numB(1){}
		private:
			int numB;
			friend int add(classA, classB);
};
	int add(classA objectA, classB objectB);
	return (objectA.numA+objectB.numB);
 	int main(){
 		classA objectA;
 		classB objectB;
 		cout<<"Sum:"<<add(objectA, objectB);
 		return 0;
 }
 */
 
 //Program to demonstrate the working of friend class.
#include<iostream>
using namespace std;
class classB;
class classA{
	private:
	int numA;
	friend class classB;
	public:
		classA():numA(12){}
};
class classB{
	private:
		int numB;
	public:
		classB():numB(10){}
	int add(){
		classA objectA;
		return objectA.numA+numB;
	}
};
int main(){
	classB objectB;
	cout<<"Sum :"<<objectB.add();
	return 0;
}
