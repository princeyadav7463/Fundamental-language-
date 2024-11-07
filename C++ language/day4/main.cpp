// C++ program to Reverse a number.
/*
#include<iostream>
using namespace std;
int main(){
	int n,rem, rev=0;
	cout<<"Enter an integer=";
	cin>>n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	cout<<"Reversed number="<<rev;
	return 0;
}

*/

//C++ program to calculate power of a number.
/*
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float base, exponent, result;
	cout<<"Enter base and exponent respectively=";
	cin>>base>>exponent;
	result=pow(base,exponent);
	cout<<base<<"^"<<exponent<<+"="<<result;
	return 0;
}
*/

//C++ program to check whether a number is polindrome or not.
/*
#include<iostream>
using namespace std;
int main(){
	int n, num,digit, rev=0;
	cout<<"Enter a positive number=";
	cin>> num;
	n=num;
	do{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}while(num!=0);
	cout<<"The reverse of the number is ="<<rev<<endl;
	if(n==rev and n>0)
	cout<<"The number is a palindrome";
	else
	cout<<"The number is not palindrome";
	return 0;
}

*/


//C++ program to check wheater a number is prime or not.
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,m=0,flag=0;
	cout<<"Enter the number to check prime=";
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			cout<<"Number is not prime."<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"Number is prime."<<endl;
	return 0;
}
*/

//C++ program to check armstrong number.
/*
#include<iostream>
using namespace std;
int main(){
	int n, r, sum=0,temp;
	cout<<"Enter the number=";
	cin>>n;
	temp=n;
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	cout<<"Armstrong number."<<endl;
	else
	cout<<"Not armstrong number"<<endl;
	return 0;
}
*/

//C++ program to display armstrong number between two intervals.
/*
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int num1,num2,i,num, digit,sum,count;
	cout<<"Enter first number=";
	cin>>num1;
	cout<<"Enter second number=";
	cin>>num2;
	if(num1>num2){
		num1=num1+num2;
		num2=num1-num2;
		num1=num1-num2;
	}
	cout<<"Armstrong numbers between"<<num1<<"and"<<num2<<"are"<<endl;
	for(i=num1;i<=num2;i++){
		count=0;
		num=i;
		while(num>0){
			count++;
			num=num/10;
		}
		sum=0;
		num=i;
		while(num>0){
			digit=num%10;
			sum=sum+pow(digit,count);
			num=num/10;
		}
		if(sum==i){
			cout<<i<<",";
		}
	}
	return 0;
}
*/

//C++ program to display factorial of a number.
/*

#include<iostream>
using namespace std;
int main(){
	int n,i;
	long fact =1.0;
	cout<<"Enter a positive integer=";
	cin>>n;
	if(n<0)
	cout<<"Error! factorial of a negative number doesnot exist.";
	else{
		for(i=1;i<=n;i++){
			fact= fact*i;
		}
		cout<<"factorial of"<<n<<"="<<fact;
	}
	return 0;
}
	
*/
//C++ program to create pyramid and pattern.
/*
#include<iostream>
using namespace std;
int main(){
	int r;
	cout<<"Enter number of rows=";
	cin>>r;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
*/

//C++ program to make a simple calculator to add. subtract, multiply or divide using switch case.
#include<iostream>
using namespace std;
int main(){
	char op;
	float num1,num2;
	cout<<"\nEnter operator + - * / ";
	cin>>op;
	cout<<"Enter two operands=";
	cin>>num1>>num2;
	switch(op){
		case'+':
			cout<<num1<<"+"<<num2<<"="<<num1+num2;
			break;
		case'-':
			cout<<num1<<"-"<<num2<<"="<<num1-num2;
			break;
		case'*':
			cout<<num1<<"*"<<num2<<"="<<num1*num2;
			break;
		case'/':
			cout<<num1<<"/"<<num2<<"="<<num1/num2;
			break;	
		default:
		cout<<"Error! operator is not correct";
		break;				
	}
	return 0;
}
