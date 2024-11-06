//Write a program to find sum of digit of number.
/*
#include<stdio.h>
int main(){
  int num, sum=0,digit;

  printf("Enter a number=");
  scanf("%d",&num);
  
  while(num>0){
    digit=num%10;
    sum=sum+digit;
    num=num/10;
  }
  printf("sum of digits= %d\n",sum);
  return 0;
}

*/
// Write a program to reverse digit of number.
/*
#include<stdio.h>
int main()
{
	int num, rem,rev;
	printf("Enter any number=");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("Reversed Number=%d",rev);
	return 0;
}

*/

// Write a program to find if is perfect number.
/*
#include<stdio.h>
int main(){
	int i=1,num, sum=0;
	printf("Enter any number to check Perfect number=\n");
	scanf("%d",&num);
	while(i<num){
		if(num%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==num){
		printf("\n %d is perfect Number",num);
	}
	else{
		printf("\n %d is not a Perfect number",num);
		return 0;
	}
}

*/

// Write a program to identify if the number is palidrone or not.
/*
#include<stdio.h>
int main()
{
	int n, rev=0,temp;
	printf("Enter the number=");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	if(temp==rev){
		printf("Palindrome number");
	}
	else{
		printf("Not palindrome");
	}
	return 0;
}
*/

//Write a program to add numbers until the user enters zero.
/*
#include<stdio.h>
int main(){
	double num, sum=0;
	do{
		printf("Enter a number=");
		scanf("%lf",&num);
		sum= sum+num;
	}
	while(num!=0.0);
	{
		printf("Sum=%.2lf",sum);
		return 0;
	}
}
*/
// Write a calculate the sum of numbers if the user enters a negative number the loop terminates.
/*
#include<stdio.h>
int main()
{
	int i;
	double number, sum=0.0;
	for(i=1;i<=10;i++)
	{
		printf("Enter a n%d=",i);
		scanf("%lf",&number);
		if(number<0.0)
		{
			break;
		}
		sum=sum+number;
	}
	printf("Sum=%.2lf",sum);
	return 0;
}



#include<stdio.h>
int main()
{
	int i;
	double number, sum=0.0;
	for(i=1;i<=10;i++)
	{
		printf("Enter a n%d=",i);
		scanf("%lf",&number);
		if(number<0.0)
		{
			continue;
		}
		sum=sum+number;
	}
	printf("Sum=%.2lf",sum);
	return 0;
}

*/
//Write a program for arithmetic calculator using switch case statement.
/*
#include<stdio.h>
int main()
{
	int a,b;
	int choice;
	printf("Enter Two number=");
	scanf("%d%d",&a,&b);
	
	printf("\n 1. Addition");
	printf("\n 2. Subtraction");
	printf("\n 3. Multiplaction");
	printf("\n 4. Divided");
	printf("\nEnter your choice");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: printf("\n Addition is =%d",a+b);
		break;
		
		case 2: printf("\n Subtraction is =%d",a-b);
		break;
		
		case 3: printf("\n Multiplaction is =%d",a*b);
		break;
		
		case 4: printf("\n Divided is =%d",a/b);
		break;
		
		default : printf("\n You have enter wrong choice");
		break;
	}
	return 0;
}
*/

//Write a program to calculate the sum and average of positive numbers 
//If the user enters a negative number the sum and average are displayed.

/*
#include<stdio.h>
int main()
{
	const int maxinput=100;
	int i;
	double number,average,sum=0.0;
	for(i=1;i<=maxinput;i++)
	{
		printf("%d. Enter a number=",i);
		scanf("%lf",&number);
		if(number<0.0){
			goto jump;
		}
		sum=sum+number;
	}
	jump: average=sum/(i-1);
	printf("Sum =%2f\n",sum);
	printf("Average=%2f",average);
	return 0;
}

*/

//Check whether number is positive or negative or zero.
/*
#include<stdio.h>
int main()
{
	double num;
	printf("Enter a number=");
	scanf("%lf",&num);
	if(num<=0.0)
	{
		if(num==0)
		printf("You Entered 0.");
		else
		printf("You entered a negative number.");
	}
	else 
	printf("You entered a positive number,");
	return 0;
}
*/
// Write a program to Print table of any integer number.

/*
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter an integer=");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d=%d\n",n , i, n*i);
	}
	return 0;
}
*/

//Write a program to number is armstrong or not.
/*
#include<stdio.h>
int main()
{
	int num, m,rem ,res=0;
	printf("Enter a three difit Integer=");
	scanf("%d",&num);
	m=num;
	while(m!=0){
		rem=m%10;
		res=res+rem*rem*rem;
		m=m/10;
	}
	if(res==num)
	{
		printf("%d is an Armstrong number.",num);
	}
	else{
		printf("%d is not an Armstrong number.",num);
	}
	return 0;
}
*/

// Half Pyramid of *

#include<stdio.h>
int main(){
int i,j,rows;
printf("Enter the number of rows=");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	printf("\n");
}
return 0;
}
