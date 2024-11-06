//C++ program to check wheather number is even or odd.
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter an integer=";
	cin>>n;
	if(n%2==0)
	cout<<n<<" is even.";
	else
	cout<<n<<" is odd";
	return 0;
}
*/

//C++ program to check wheather a character is vowel or consonant.
/*
#include<iostream>
using namespace std;
int main(){
	char c;
	bool lower,upper;
	cout<<"Enter an alphabet=";
	cin>>c;
	lower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	upper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	if(!isalpha(c))
	printf("Error! non-alphabet character=");
	else if(lower||upper)
	cout<<c<<" is a vowel.";
	else 
	cout<<c<<" is a consenant";
	return 0;
}

*/

//C++ program to find largest number among three numbers.
/*
#include<iostream>
using namespace std;
int main(){
	double n1,n2,n3;
	cout<<"Enter three number=";
	cin>>n1>>n2>>n3;
	if(n1>=n2&&n1>=n3)
	cout<<"Largest number= "<<n1;
	else if(n2>=n1&&n2>=n3)
	cout<<"Largest number= "<<n2;
	else
	cout<<"Largest number= "<<n3;
	return 0;
}
*/
//C++ program to calculate sum of natural numbers.
/*
#include<iostream>
using namespace std;
int main(){
	int n, sum=0;
	cout<<"Enter a positive integer= ";
	cin>>n;
	for(int i=1;i<=n;i++){
		sum=sum+i;
	}
	cout<<"Sum of Natural number ="<<sum;
	return 0;
}
*/

//C++ program to find factorial .
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	long fact=1.0;
	cout<<"Enter a positive interger=";
	cin>>n;
	if(n<0)
	cout<<"Error! factorial of a negative number does not exist.";
	else{
		for(int i=1;i<=n;i++){
			fact=fact*i;
		}
		cout<<"Factorial of "<<n<<"="<<fact;
	}
	return 0;
}
*/

//C++ program to Generate multiplication table.
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a positive integer=";
	cin>>n;
	for(int i=1;i<=10;i++){
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
	return 0;
}
*/
//c++ program to Display fibonacci series.
/*
#include<iostream>
using namespace std;
int main(){
	int n,t1=0,t2=1,nextTerm=0;
	cout<<"Enter the number of terms=";
	cin>>n;
	cout<<"Fibonacci series=";
	for(int i=1;i<=n;i++){
		if(i==1){
			cout<<t1<<",";
			continue;
		}
		if(i==2){
			cout<<t2<<",";
			continue;
		}
		nextTerm=t1+t2;
		t1=t2;
		t2=nextTerm;
		cout<<nextTerm<<",";
	}
	return 0;
}
*/

//C++ program to find GCD.
/*
#include<iostream>
using namespace std;
int main(){
	int n1,n2,hcf;
	cout<<"Enter two number=";
	cin>>n1>>n2;
	if(n2>n1){
		int temp=n2;
		n2=n1;
		n1=temp;
	}
	for(int i=1;i<=n2;i++){
		if(n1%i==0&&n2%i==0){
			hcf=i;
		}
	}
	cout<<"HCF="<<hcf;
	return 0;
}
*/
//C++ program to find lcm.
#include<iostream>
using namespace std;
int main(){
	int n1,n2,max;
	cout<<"Enter two number=";
	cin>>n1>>n2;
	max=(n1>n2)?n1:n2;
	do{
		if(max%n1==0&&max%n2==0)
		{
			cout<<"LCM="<<max;
			break;
		}
		else 
		max++;
	}
	while(true);
	return 0;
}
