//function.
/*
#include<iostream>
using namespace std;
int add(int num1, int num2)
{
	int sum=num1+num2;
	return sum;
}

int main(){
	int a=5;
	int b=20;
	cout<<add(a,b)<<endl;
	
}
*/
/*
#include<iostream>
using namespace std;
int sum(int a,int b){
	int c=a+b;
	return c;
}
int main(){
	int num1,num2;
	cout<<"Enter first number"<<endl;
	cin>>num1;
	cout<<"Enter second number"<<endl;
	cin>>num2;
	cout<<"The sum is "<<sum(num1,num2);
	return 0;
}
*/
/*
#include<iostream>
using namespace std;
int add(int ,int);
int main(){
	int sum;
	sum=add(100,78);
	cout<<"100+78="<<sum<<endl;
	return 0;
}
int add(int a, int b){
	return(a+b);
}

*/
/*
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double number,squareRoot;
	number=25.0;
	squareRoot = sqrt(number);
	cout<<"Square root of "<<number<<" = "<<squareRoot;
	return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
void myFunction(string country="Norway"){
	cout<<country<<"\n";
}
int main(){
	myFunction("Sweden");
	myFunction("India");
	myFunction();
	myFunction("USA");
	return 0;
}

*/
/*
#include<iostream>
#include<string>
using namespace std;
	void myFuncation(string fname, int age){
	cout<<fname<<"Refsnes."<<age<<"years old.\n";
}	
int main(){
	myFunction("Liam",5);
	myFunction("Jenny",10);
	myFunction("Anja",30);
	return 0;
}
*/
#include<iostream>
using namespace std;
int myFunction(int x, int y){
	return x+y;
}
int main(){
	int z=myFunction(5,3);
	cout<<z;
	return 0;
}
