// Find the sum of natural number using recursion.
/*

#include<stdio.h>
int factorial(int n);
int main()
{
  int n;
  printf("\n Ebter the Number=");
  scanf("\n%d",&n);

  printf("\n factorial is =%d",factorial(n));
  return 0;
}
int factorial(int n)
{
  if(n>=1)
  return n*factorial(n-1);
  else
  return 1;
}

*/


// Calculate the factorail of a number using recursion.
/*
#include<stdio.h>
int gcd(int n1,int n2);
int main()
{
	int n1,n2;
	printf("\n Enter 2 number=");
	scanf("\n %d %d",&n1,&n2);
	
	printf("\n gcd is = %d",gcd(n1,n2));
	
	return 0;
}
int gcd(int n1, int n2){
	if(n2!=0){
		return gcd(n2,n1%n2);
	}
	else{
		return n1;
	}
}
*/

//Convert a binary number to decimal and vice versa.
/*
#include<stdio.h>
#include<math.h>
int btod(long n);
int main()
{
	long n;
	printf("\n Entered binary number=");
	scanf("%d",&n);
	
	printf("\n result is =%d",btod(n));
	return 0;
}
int btod(long n){
	int i=0, rem,dec=0;
	while(n!=0){
		rem=n%10;
		n=n/10;
		dec=dec+rem*pow(2,i);
		++i;
	}
	return dec;
}
*/

//Calculate the power of a number using recursion.
/*
#include<stdio.h>
#include<math.h>
int abc(int n1,int n2);
int main(){
	int a, result, base;
	printf("\n Enter the base value=");
	scanf("%d",&base);
	
	printf("\n Enter the power=");
	scanf("%d",&a);
	
	result=abc(base,a);
	printf("\n result is = %d",result);
	return 0;
}
int abc(int n1,int n2){
	if(n2!=0)
		return(n1*abc(n1,n2-1));
	else
		return 1;
}
*/
//  Example: Sum of natural Number using recursion

 #include<stdio.h>

 int sum (int n);

 int main(){
   int number, result;
   printf("Enter a positive integer: ");
   scanf("%d", &number);

   result= sum(number);
  printf("Sum = %d", result);
  return 0;
 }

