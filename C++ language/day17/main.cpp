//Wap to enter number from 1 to 7 and display the corresponding day of the week using if else.
/*
#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter the value of a[1 to 7]=";
	cin>>a;
	if(a==1)
		cout<<"Monday";
	else if(a==2)
		cout<<"Tuesday";
	else if(a==3)
		cout<<"Wednesday";
	else if(a==4)
		cout<<"Thursday";
	else if(a==5)
		cout<<"Friday";
	else if(a==6)
		cout<<"Saturday";
	else if(a==7)
		cout<<"Sunday";
	else
		cout<<"Please Enter the value under [1 to 7].";
return 0;
}
*/

/*Write a menu driven program to input/assign/store 2 numbers and perform the followin mathematics operations ,
on the two variables as given below in the menu 1.Addition(+) 2.Subtraction(-) 3.Multiplication(*) 4.Divided(/)
*/
/*
#include<iostream>
using namespace std;
int main(){
	int a,b,n;
	cout<<"Enter two number =";
	cin>>a>>b;
	cout<<"1.Addition \n";
	cout<<"2.Subtraction \n";
	cout<<"3.Multiplication \n";
	cout<<"4.Divided \n";
	cout<<"Please choose number under [1 to 4] You want to perform mathematical operation=";
	cin>>n;
	switch(n){
		case 1:
			cout<<"Addition = "<<a+b;
			break;
		case 2:
			cout<<"Subtraction = "<<a-b;
			break;
		case 3:
			cout<<"Multiplication = "<<a*b;
			break;
		case 4:
			cout<<"Divided = "<<a/b;
			break;
		default :
			cout<<"Please enter valid number under[1 to 4].";
	}
return 0;
}
*/

/* write a menu driven program to calculate the area of 
a.circle(pi*r*r)
b.square(side*side)
c.Rectangle(l*b)
*/
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	float r,s,l,b,res;
	cout<<"1.Circle \n ";
	cout<<"2.Square \n ";
	cout<<"3.Rectangle \n";
	cin>>n;
	switch(n){
		case 1:
			cout<<"Enter radius of circle=";
			cin>>r;
			res=3.145*r*r;
			cout<<"Area of circle="<<res;
			break;
		case 2:
			cout<<"Enter the side of Square=";
			cin>>s;
			res=s*s;
			cout<<"Area of Square="<<res;
			break;
		case 3:
			cout<<"Enter the the length and breath=";
			cin>>l>>b;
			res=l*b;
			cout<<"Area of rectange="<<res;
			break;
		default :
			cout<<"Please Enter vaild number.";
	}
	return 0;
}
*/

//Wap to enter a three digit number to check the number is armstron or not.
/*
#include<iostream>
using namespace std;
int main(){
	int n,r,sum=0,temp;
	cout<<"Enter the number=";
	cin>>n;
	temp=n;
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
		cout<<"Armstrong number.";
	else
		cout<<"Not armstrong number.";
return 0;
}

*/
// Wap to enter a three digits number to check the number is palindrome or not.
#include<iostream>
using namespace std;
int main(){
	int n,r,sum=0 ,temp;
	cout<<"Enter the number=";
	cin>>n;
	temp=n;
	while(n>0){
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
		cout<<"Palindrome number.";
	else
		cout<<"Not palindrome.";
	return 0;
}



