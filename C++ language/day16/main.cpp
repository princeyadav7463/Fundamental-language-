//Wap to input two numbers to find out greatest and smallest using simple if.
/*
#include<iostream>
using namespace std;
int main(){
	int a , b;
	cout<<"Enter the value of a = ";
	cin>>a;
	cout<<"Enter the value of b = ";
	cin>>b;
	if(a>b){
		cout<<"Greatest number is="<<a<<endl<<"Smallest number is="<<b<<endl;
	}
	cout<<"Greatest number is="<<b<<endl<<"Smallest number is="<<a;
	return 0;
}
*/

//Wap to input two numbers and print the square of the smaller and cube of the greater value.
/*
#include<iostream>
using namespace std;
int main(){
	int a , b;
	cout<<"Enter the value of a = ";
	cin>>a;
	cout<<"Enter the value of b = ";
	cin>>b;
	if(a>b){
		cout<<"Greatest number is = "<<a<<" Cube is "<<a*a*a<<endl<<"Smallest number is = "<<b<<" Square is "<<b*b<<endl;
	}
	cout<<"Greatest number is = "<<b<<" Cube is "<<b*b*b<<endl<<"Smallest number is = "<<a<<" Square is "<<a*a<<endl;
	return 0;
}
*/

//Wap find out the smllest of 3 numbers using nested if statement values entered by the user.
/*
#include<iostream>
using namespace std;
int main(){
	int n1, n2, n3;
	cout<<"Enter the three number=";
	cin>>n1>>n2>>n3;
	if(n1<=n2&&n1<=n3)
		cout<<"Smallest number="<<n1;
		else if(n2<=n1&&n2<=n3)
			cout<<"Smallest number="<<n2;
	else
	cout<<"Smallest number="<<n3;
return 0;
}

*/

//Wap input age of a person determine for how many years he has been voting or how many years after will he be eligible to vote.
/*
#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter the age your want to check person are eligible for voting = ";
	cin>>age;
	if(age>=18){
		cout<<"Person are eligible for voting.";
	}
	else{
		cout<<"Person are not eligible for voting.";
	}
	return 0;
}
*/

//Wap input the age of a person and check if he is a senior citizen or not.
/*
#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter the age you want to check person is a senior citizen = ";
	cin>>age;
	if(age>=60){
		cout<<"Person is a senior citizen.";
	}
	cout<<"Person in not a senior citizen.";
	return 0;
}
*/

//Wap input a character and check whether it is an alphabet number or special character.
/*
#include<iostream>
using namespace std;
int main(){
	char a;
	cout<<"Enter any Chaacter=";
	cin>>a;
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z')){
		cout<<"Character is alphabet.";
	}
	else if(a>='0'&&a<='9'){
		cout<<"Character is number.";
	}
	else{
		cout<<"Character is special character.";
	}
	return 0;
}

*/
//Wap input a character and check that whether it is a vowel or consonant.
/*
#include<iostream>
using namespace std;
int main(){
	char c;
	cout<<"Enter character you want to check vowel or consonant = ";
	cin>>c;
	if(c=='a'||c=='A'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u'){
		cout<<"Input Character is vowel.";
	}
	else{
		cout<<"Input Character is Consonat.";
	}
	return 0;
}
*/
//Wap input any year and check if it a leap year or not.
/*
#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter a year=";
	cin>>year;
	if(year%400==0){
		cout<<year<<" is a leap year.";
	}
	else if(year%100==0){
		cout<<year<<" is not a leap year";
	}
	else if(year%4==0){
		cout<<year<<" is a leap year.";
	}
	else{
		cout<<year<<" is not a leap year.";
	}
	return 0;
}
*/
//Wap input number form 1 to 7 and display the corresponding day of the week using switch case.
#include<iostream>
using namespace std;
int main(){
	int var;
	cout<<"Enter the value of var[1 to 7]=";
	cin>>var;
	switch(var){
		case 1:
			cout<<"Monday";
			break;
		case 2: 
			cout<<"Tuesday";
			break;
		case 3:
			cout<<"Wednesday";
			break;
		case 4:
			cout<<"Thurday";
			break;
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Saturday";
			break;
		case 7:
			cout<<"Sunday";
			break;
		default :
			cout<<"Please Enter valid number.";
	}
	return 0;
}
