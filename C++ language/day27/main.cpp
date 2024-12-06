/*

#include<iostream>
using namespace std;


int add(int a, int b){
	return a+b;
}

int subtract(int a, int b){
	return a-b;
}
int factorial(int n){
	if(n==0||n==1)
		return 1;
	else
		return n*factorial(n-1);
}

int main(){
	int choice, num1,num2;
	cout<<"====== Function Exaple Program ======"<<endl;
	cout<<"1. Add Two Number"<<endl;
	cout<<"2. Subtract Two Numbers"<<endl;
	cout<<"3. Calculate Factorial"<<endl;
	cout<<"Enter Your Choice=";
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"Enter two number=";
			cin>>num1>>num2;
			cout<<"The sum is="<<add(num1,num2)<<endl;
			break;
		case 2:
			cout<<"Enter two number=";
			cin>>num1>>num2;
			cout<<"The difference is="<<subtract(num1,num2)<<endl;
			break;
		case 3:
			cout<<"Enter a number=";
			cin>>num1;
			cout<<"The factorial of "<<num1<<" is ="<<factorial(num1)<<endl;
			break;
		default:
			cout<<"Invalid choice!"<<endl;
			break;
	}
	return 0;
}

*/

#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n){
	int original=n,sum=0,digit=0;
	while(n>0){
		n/=10;
		digit++;
	}
	n=original;
	while(n>0){
		int digit=n%10;
		sum+=pow(digit,digit);
		n/=10;
	}
	return sum==original;
}
bool isPrime(int n){
	if(n<=1)return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}
	return true;
}
int reverseNumber(int n){
	int reversed=0;
	while(n>0){
		reversed=reversed*10+n%10;
		n/=10;
	}
	return reversed;
}
int factorial(int n){
		if(n==0||n==1)
		return 1;
	else
		return n*factorial(n-1);
}
int main(){
	int choice,number;
	cout<<"=======Multifunction calculator========="<<endl;
	cout<<"1. Check Armstrong Number"<<endl;
	cout<<"2. Check Prime Number"<<endl;
	cout<<"3. Reverse a NUmber"<<endl;
	cout<<"4. Find Factorial"<<endl;
	cout<<"Enter your choice=";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Enter a number=";
			cin>>number;
			if(isArmstrong(number))
				cout<<number<<"is an Armstrong number."<<endl;
			else
				cout<<number<<number<<"is not an Armstrong number."<<endl;
			break;
		case 2:
			cout<<"Etner a number";
			cin>>number;
			if(isPrime(number))
				cout<<number<<"is a Prime number."<<endl;
			else
				cout<<number<<"is not a Prime number."<<endl;
			break;
		case 3: 
            cout << "Enter a number: ";
            cin >> number;
            cout << "The reverse of " << number << " is: " << reverseNumber(number) << endl;
            break;

        case 4: 
            cout << "Enter a number: ";
            cin >> number;
            cout << "The factorial of " << number << " is: " << factorial(number) << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;	
	}
	return 0;
}
