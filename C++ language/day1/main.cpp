// c++ "Hello world!" program.
/*
#include<iostream>
using namespace std;
int main(){
	cout<<"Hello world!";
	return 0;
}
*/

//C++ program to print Number Entred by user.
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter any number you want to print=";
	cin>>n;
	cout<<"You want to print="<<n;
	return 0;
}
*/

//C++ program to add two number.
/*
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter the value of a=";
	cin>>a;
	cout<<"Enter the value of b=";
	cin>>b;
	c=a+b;
	cout<<"Additions of two number="<<c;
	return 0;
}
*/

//C++ program to find Quotient and reminder.
/*
#include<iostream>
using namespace std;
int main(){
	int divisor,dividend,quotient,remainder;
	cout<<"Enter Dividend=";
	cin>>dividend;
	cout<<"Enter Divisor=";
	cin>>divisor;
	quotient=dividend/divisor;
	remainder=dividend %divisor;
	cout<<"Quotient="<<quotient<<endl;
	cout<<"Remainder="<<remainder;
	return 0;
}
*/

//C++ Program to find size of int float double and char in your system.
/*
#include<iostream>
using namespace std;
int main(){
	cout<<"Size of char ="<<sizeof(char)<<"byte"<<endl;
	cout<<"Size of int ="<<sizeof(int)<<"byte"<<endl;
	cout<<"Size of float="<<sizeof(float)<<"byte"<<endl;
	cout<<"Size of double="<<sizeof(double)<<"byte"<<endl;
	return 0;
}
*/

//C++ program to swap two numbers.
/*
#include<iostream>
using namespace std;
int main(){
	int a=5,b=10,temp;
	cout<<"Before swapping"<<endl;
	cout<<"a="<<a<<"b="<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"\n After swapping"<<endl;
	cout<<"a="<<a<<"b="<<b<<endl;
	return 0;
}

*/

//C++ program to find ASCII value of a character.
/*
#include<iostream>
using namespace std;
int main(){
	char c;
	cout<<"Enter a character=";
	cin>>c;
	cout<<"ASCII value of "<< c <<"is ="<<int(c);
	return 0;
}

*/

//C++ program to multiply two number.

#include<iostream>
using namespace std;
int main(){
	int n1,n2,res;
	cout<<"Enter first number=";
	cin>>n1;
	cout<<"Enter second number=";
	cin>>n2;
	res=n1*n2;
	cout<<"Multiply of two number="<<res;
	return 0;
}
