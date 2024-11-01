//Write a program to c store temperature of two cities of a week and display it.
/*
#include<stdio.h>
const int city=2;
const int week=7;
int main(){
	int i,j;
	int temp[city][week];
	for(i=0;i<city;++i)
	{
		for(j=0;j<week;++j){
			printf("city %d,Day %d=",i+1,j+1);
			scanf("%d",&temp[i][j]);
		}
	}
	printf("\n Displaying values=\n\n");
	for(i=0;i<city;++i){
		for(j=0;j<city;++j){
			printf("city %d, Day %d=%d\n",i+1,j+1,temp[i][j]);
		}
	}
	return 0;
}

*/

// Pass array to a function in c .
/*
#include<stdio.h>
void display(int age1,int age2){
	printf("%d\n",age1);
	printf("%d\n",age2);
}
int main()
{
	int ageArray[]={2,7,3,12,9,78};
	display(ageArray[1],ageArray[3]);
	return 0;
}

*/
// scamf() to read a string.
/*
#include<stdio.h>
int main(){
	char name[20];
	printf("Enter name=");
	scanf("%s",name);
	printf("Your name is %s",name);
	return 0;
}

*/

//can use puts() to display the string.
/*
#include<stdio.h>
int main()
{
	char name[30];
	printf("Enter name=");
	fgets(name,sizeof(name),stdin);
	printf("Your Name Is =");
	puts(name);
	return 0;
}

*/

//Passing string to a function .
/*
#include<stdio.h>
void displayString(char str[]);
int main(){
	char str[50];
	printf("Enter string=");
	fgets(str,sizeof(str),stdin);
	displayString(str);
	return 0;
}
void displayString(char str[]){
	printf("string output=");
	puts(str);
}
*/

//Find the frequency of a character in a strign.
/*
#include<stdio.h>
int main(){
	char frequency[50],ch;
	int count=0;
	printf("\n Enter the string=");
	fgets(frequency,sizeof(frequency),stdin);
	printf("\n Enter the character that needs to be checked for frequency=");
	scanf("%c",&ch);
	int i;
	for(i=0;frequency[i]!='\0';i++){
		if(ch==frequency[i])
		count++;
	}
	printf("\n frequency of character is = %d",count);
	return 0;
}

*/
// Find the number of vowels consonant digits and shite spaces.
/*

#include<stdio.h>
int main(){
	char str[100];
	int i;
	int vol=0,cons=0,digit=0,space=0;
	printf("Enter a string=");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';++i){
		char ch=tolower(str[i]);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
			vol++;
		}
		else if(ch>='a'&& ch<='z'){
			digit++;
		}
		else if(ch==' '){
			space++;
		}
	}
	printf("vowels=%d\n",vol);
	printf("consonants=%d\n",cons);
	printf("Digit=%d\n",digit);
	printf("White spaces=%d\n",space);
	return 0;
}

*/

// Reverse a string using recursion.
/*
#include<stdio.h>
#include<string.h>
void reverseString(char str[],int start, int end){
	if(start>=end){
		return ;
	}
	char temp=str[start];
	str[start]=str[end];
	str[end]=temp;
	reverseString(str,start+1,end-1);
}
int main(){
	char str[100];
	printf("Enter a string=");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]=0;
	reverseString(str,0,strlen(str)-1);
	printf("Reversed string=%s\n",str);
	return 0;
}
*/

// Find the length of a strings.
/*
#include<stdio.h>
int stringLength(char str[]){
	int length=0;
	while(str[length]!='\0'){
		length++;
	}
	return length;
}
int main()
{
	char str[100];
	printf("Enter a string =");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]=0;
	int length=stringLength(str);
	printf("Length of the string=%d\n",length);
	return 0;
}
*/

// C program to copy a string.

#include<stdio.h>
#include<string.h>
int main(){
	char original[100],copy [100];
	printf("Enter a string value=");
	fgets(original,sizeof(original),stdin);
	
	strcpy(copy,original);
	printf("Copied string=%s",copy);
	return 0;
}


*/

//Remove all characters in a string except alphabets.
/*
#include<stdio.h>
int main(){
	char original[100],result[100];
	int i,j=0;
	printf("Enter a String=");
	fgets(original,sizeof(original),stdin);
	for(i=0;original[i]!='\0';i++){
		if(isalpha(original[i])){
			result[j]=original[i];
			j++;
		}
	}
	result[j]='\0';
	printf("String after removing non-alphabet characters=%s",result);
	return 0;
}


//Short elements in the lexigraphical order(dictionary order)
/*
#include<stdio.h>
#include<string.h>
int main(){
	int n,i,j;
	char string[100][100],temp[100];
	printf("Enter the number of String=");
	scanf("%d",&n);
	getchar();
	printf("Enter %d strings=\n",n);
	for(i=0;i<n;i++){
		fgets(string[i],sizeof(string[i]),stdin);
		string[i][strcspn(string[i],"\n")]='\0';
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n;j++){
			if(strcmp(string[i],string[j])>0){
				strcpy(temp,string[i]);
				strcpy(string[i],string[j]);
				strcpy(string[j],temp);
			}
		}
	}
	printf("\n String in lexicographical order=\n");
	for(i=0;i<n;i++){
		printf("%s\n",string[i]);
	}
	return 0;
}
*/
//


