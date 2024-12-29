#include<iostream>
using namespace std;
int main(){
	int a[2][2],b[2][2],c[2][2],i,j;
	cout<<"Enter 4 value of the matrix b :"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cin>>a[i][j];
		}
		cout<<endl;
	}
	cout<<"Enter 4 value of the matrix b :"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cin>>b[i][j];
		}
		cout<<endl;
	}
	cout<<"Value of matrix a:"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Value of matrix b:"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Addition of two matrix a and b:"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"Transpose of matrix c:"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<c[j][i]<<"\t";
		}
		cout<<endl;
	}
	int d1=0;
	cout<<"Addition of left diagional:"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(i==j)
			{
				d1=d1+c[i][j];
			}
		}
	}
	cout<<d1<<endl;
	int d2=0;
	cout<<"Addition of right diagional:"<<endl;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(i+j==1)
			{
				d2=d2+c[i][j];
			}
		}
	}
	cout<<d2;
	return 0;
}
