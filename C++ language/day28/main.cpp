// Passing by reference without pointers.
/*
#include<iostream>
using namespace std;
void swap(int &n1, int &n2){
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
int main(){
	int a=1,b=2;
	cout<<"Before Swapping "<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	swap(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
}

*/

//Passing by reference using pointers.

#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
	int a=10,b=20;
	cout<<"Before Swapping "<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	swap(&a,&b);
	cout<<"\nAfter Swapping "<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
}
void swap(int *n1,int *n2){
	int temp;
	temp = *n1;
	*n1 =*n2;
	*n2 = temp; 
}

