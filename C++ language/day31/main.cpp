/*

#include<iostream>
using namespace std;
int main(){
	int a[3][3],i,j;
	cout<<"Enter 9 element in Array:"<<endl;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cin>>a[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
return 0;	
}


*/

/*
#include<iostream>
using namespace std;
int main(){
	int a[3][3],i,j;
	cout<<"Enter 9 element in matrix:"<<endl;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cin>>a[i][j];
		}
		cout<<endl;
	}
	cout<<"output of matrix"<<endl;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	cout<<"Transpose of matrix"<<endl;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cout<<" "<<a[j][i];
		}
		cout<<endl;
	}
return 0;	
}
*/

#include<iostream>
using namespace std;
int main(){
	int a[3][3],i,j,r=0,c=0;
	cout<<"Enter 9 element in Array:"<<endl;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cin>>a[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<=2;i++){
		r=0;
		for(j=0;j<=2;j++){
			r=r+a[i][j];
		}
		cout<<"Adding of row = "<<i+1<<" "<<r;
		cout<<endl;
	}
return 0;	
}
