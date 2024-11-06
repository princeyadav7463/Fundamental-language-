// write a program in c to add two integers entered by the users.
/*#include<stdio.h>
int main(){
  int n1,n2,sum=0;
  printf("Entered two integer value=");
  scanf("%d %d",&n1,&n2);
  sum=n1+n2;
  printf("Sum of integer two value=%d",sum);
  return 0;
}
*/


//Write a program in c to multiply two floating points numbers.
/*
#include<stdio.h>
int main(){
  float a,b,c;
  printf("Enter two floating points number=");
  scanf("%f %f",&a,&b);
  c=a*b;
  printf("Multiply of two floting points number=%f",c);
  return 0;
}
*/
// Write a program in c to find ASCII value of a characters entered by the users.

/*#include<stdio.h>
int main()
{
  char c;
  printf("\n Enter the characters=");
  scanf("%c",&c);
  printf("\n ASCII value of character =%d",c);
  return 0;
}
*/
// Write a program in c to find quotient and remender of two integers.
/*
#include<stdio.h>
int main(){
  int dividend , divisor, quotient,remainder;
  printf("\n Enter the Dividend=");
  scanf("%d",&dividend);

  printf("\n Enter the divisor=");
  scanf("%d",&divisor);
  quotient = dividend/divisor;
  remainder = dividend%divisor;
  printf("\n Quotient is= %d",quotient);
  printf("\n Remainder is= %d",remainder);
  return 0;
}
*/
// Write a program in c to find the size of int float double and char.
#include<stdio.h>
int main(){
int a;
float b;
double c;
char d;
printf("Size of int = %lu bytes \n",sizeof (a));
printf("Size of float = %lu bytes \n",sizeof (b));
printf("Size of double = %lu bytes \n",sizeof (c));
printf("Size of char = %lu bytes \n",sizeof (d));
return 0;
}