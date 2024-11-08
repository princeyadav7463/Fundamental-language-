//Function with no argument and no return value.
/*
#include<iostream>
using namespace std;
void checkprime();
int main(){
	checkprime();
	return 0;
}
void checkprime(){
	int n,i,flag=0;
	cout<<"Enter the number=";
	cin>>n;
	for(i=2;i<=n/2;i++){
		if(n%2==0){
			flag=1;
		}
	}
	if(flag==1)
	cout<<"\n It is not prime";
	else
	cout<<"\n It is prime";
}
*/

//Function with no argument but return value.
/*
#include<iostream>
using namespace std;
int getnumber();
int main(){
	int n,i,flag=0;
	n=getnumber();
	for(i=2;i<=n/2;i++){
		if(n%2==0){
			flag=1;
		}
	}
	if(flag==1)
	cout<<"\n It is not prime";
	else
	cout<<"\n It is prime";
}
int getnumber(){
	int n;
	cout<<"\n Enter the number=";
	cin>>n;
	return 0;
}
*/

//Function with argument but no return value.
#include<iostream>
using namespace std;
void checkprime(int n);
int main(){
	int n;
	cout<<"Enter number=";
	cin>>n;
	checkprime(n);
	return 0;
}
void checkprime(int n){
	int i, flag=0;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;
		}
	}
	if(flag==1)
	cout<<"\n It is not prime";
	else
	cout<<"\n It is prime";
}
