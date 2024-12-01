// s=1+2+3+4+5+6+7+8+.........+n
/*
#include<iostream>
using namespace std;
int main(){
	int i,sum=0,n;
	cout<<"Enter a number =";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"sum of all number = "<<sum;
	return 0;
}
*/

//s=1^2+2^2+3^2+...............n^2
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0;
	cout<<"Enter a number=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i*i;
	}
	cout<<"sum of all power number="<<sum;
	return 0;
}

*/

//s=1+3+5+7+9......................+n
/*
#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0;
	cout<<"Enter a number=";
	cin>>n;
	for(i=1;i<=n;i+=2)
	{
		sum=sum+i;
	}
	cout<<"Sum of all even number="<<sum;
	return 0;
}
*/

//s=1+2-3+4-5+6-7+8-9+............n
/*
#include<iostream>
using namespace std;
int main(){
	int i,n,sum=0;
	cout<<"Enter a number=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%2==0)
		{
			sum=sum+i;
		}
		else{
			sum=sum-i;	
		}
	}
	cout<<sum;
	return 0;
}
*/

// x+x^2+x^3+x^3+x^4..............x^n
/*
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i;
	double x,sum=0;
	cout<<"Enter the value of x=";
	cin>>x;
	cout<<"Enter the value of n=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum+=pow(x,i);
	}
	cout<<"The sum of the series is="<<sum;
	return 0;
}

*/

// s=x+x^2/2+n^3/3+x^4/4..............x^n/n
/*
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i;
	double x,sum=0;
	cout<<"Enter the value of x=";
	cin>>x;
	cout<<"Etner the value of n=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum+=pow(x,i)/i;
	}
	cout<<"The sum of the series is="<<sum;
	return 0;
}
*/

// s=x+x^2/2!+x^3/3!+x^4/4!.......................x^n/n!
/*
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i;
	double x,sum=0,fact=1;
	cout<<"Enter the value of x=";
	cin>>x;
	cout<<"Etner the value of n=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact*=x/i;
		sum+=fact;	
	}
	cout<<"The sum of the series is="<<sum;
	return 0;
}
*/

//s=x-x^2/2+n^3/3-x^4/4..............x^n/n.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double x,sum=0,term;
	int n;
	cout<<"Enter the value of x=";
	cin>>x;
	cout<<"Enter the value of n=";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		term=pow(-1,i+1)*pow(x,i)/i;
		sum+=term;
	}
	cout<<"The sum of the series is="<<sum;
	return 0;
}


