//No argement passed and no return value;
/*
#include<stdio.h>
void prime();
int main(){
	prime();
	return 0;
}
void prime(){
	int n,i,flag=0;
	printf("\n Enter number=");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0){
			flag=1;
		}
	}
	if(flag==1){
		printf("\n Entered number is not a prime number");
	}else{
		printf("\n Entered number is a prime number");
	}
}
*/

//No argument passed but a return value.
/*
#include<stdio.h>
int getvalue();
int main(){
	int n,i,flag=0;
	n=getvalue();
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\n It is not prime number");
	}
	else{
		printf("\n It is prime number");
	}
	return 0;	
}
int getvalue()
{
	int n;
	printf("\n Enter the number=");
	scanf("%d",&n);
	return 0;
}

*/

//Argument passed but no return value
/*
#include<stdio.h>
void prime(int n);
int main()
{
	int n;
	printf("\n Enter the number=");
	scanf("\n%d",&n);
	prime(n);
	return 0;
}
void prime(int n){
	int i, flag=0;
	for(i=2;i<=n%2;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("\n It is not prime number");
	}else{
		printf("\n It is prime number");
	}
}

*/

// Argument passed and a return value.
#include<stdio.h>
int prime(int n);
int main()
{
	int n, flag=0;
	printf("\n Ebter the number=");
	scanf("%d",&n);
	flag=prime(n);
	if(flag==1){
		printf("\n It is not prime number");
	}else{
		printf("\n it is prime number");
	}
	return 0;
}
int prime(int n){
	int i;
	for(i=2;i<=n%2;i++){
		if(n%i==0){
			return 1;
		}
	}
	return 0;
}
