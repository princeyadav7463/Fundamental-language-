//Reverse a sebtence using recursion.
/*
#include<iostream>
using namespace std;
void reverse(const string& a);
int main(){
	string str;
	cout<<"Please enter a string"<<endl;
	getline(cin,str);
	reverse(str);
	return 0;
}
void reverse(const string& str){
	size_t numOfChars=str.size();
	if(numOfChars==1){
		cout<<str<<endl;
	}
	else{
		cout<<str[numOfChars-1];
		reverse(str.substr(0, numOfChars - 1));
	}
}
*/

//Program to computer power using recursion.
/*
#include<iostream>
using namespace std;
int cal(int,int);
int main(){
	int base,pow,result;
	cout<<"Enter base number="<<endl;
	cin>>base;
	cout<<"Enter power number(Positive integer)=";
	cin>>pow;
	result=cal(base,pow);
	cout<<base<<"^"<<pow<<"="<<result;
	return 0;
}
int cal(int base, int pow){
	if(pow!=0)
	return (base*cal(base, pow-1));
	else
	return 1;
}

*/

//Calculate average of Number using Arrays.
/*
#include<iostream>
using namespace std;
int main(){
	int n,i;
	float num[100],sum=0.0,average;
	cout<<"Enter the numbers of data=";
	cin>>n;
	while(n>100||n<=0){
		cout<<"Error! number should in range of(1 to 100)."<<endl;
		cout<<"Enter the number again=";
		cin>>n;
	}
	for(i=0;i<n;i++){
		cout<<i+1<<".Enter number=";
		cin>>num[i];
		sum=sum+num[i];
	}
	cout<<"Sum of the number="<<sum<<endl;
	average=sum/n;
	cout<<"Average="<<average;
	return 0;
}
*/

// Display largest element of an array.
/*
#include<iostream>
using namespace std;
int main(){
	int i,n;
	float arr[100];
	cout<<"Enter total number of elements(1 to 100)=";
	cin>>n;
	cout<<endl;
	for(i=0;i<n;i++){
		cout<<"Enter Number"<<i+1<<":";
		cin>>arr[i];
	}
	for(i=1;i<n;i++){
		if(arr[0]<arr[i])
		arr[0]=arr[i];
	}
	cout<<endl<<"Largest element="<<arr[0];
	return 0;
}
*/

//Add two matrices using multi-dimensional Arrays;
#include<iostream>
using namespace std;
int main(){
	int r,c,a[100][100],b[100][100],sum[100][100],i,j;
	cout<<"Enter number of rows(between 1 and 100)";
	cin>>r;
	cout<<"Enter number of columns(between 1 and 100)";
	cin>>c;
	cout<<endl<<"Enter elements of 1st matrix"<<endl;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++){
			cout<<"Enter element a"<<i+1<<j+1<<":";
			cin>>a[i][j];
		}
		cout<<endl<<"Enter elements opf 2nd matrix"<<endl;
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
			{
				cout<<"Enter element b"<<i+1<<j+1<<":";
				cin>>b[i][j];
			}
			for(i=0;i<r;i++)
				for(j=0;j<c;j++)
				sum[i][j]==a[i][j]+b[i][j];
				cout<<endl<<"Sum of two matrix is="<<endl;	
			for(i=0;i<r;i++)
				for(j=0;j<c;j++){
					cout<<sum[i][j]<<" ";
					if(j==c-1)
						cout<<endl;
				}
		return 0;
}
