//Print pattern 
/*
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
*/
/*

*
**
***
****
*****
*/
/*
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
*/
/*
*****
****
***
**
*
*/
/*

#include<iostream>
using namespace std;
int main(){
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

*/

/*
*****
 *****
   *****
    *****
*/
/*
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++)
	{
		for(int k=1;k<=i;k++)
		{
			cout<<" ";
		}
		for(int j=1;j<=5;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
*/
/*
*****
 ****
  ***
   **
    *
*/

/*
#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++)
	{
		for(int k=1;k<=2*i;k++)
		{
			cout<<" ";
		}
		for(int j=5;j>=i;j--){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
*/
/*
     *
    **
   ***
  ****
 *****  
 
*/
/*
#include<iostream>
using namespace std;
int main(){
	for(int i=5;i>=1;i--)
	{
		for(int k=1;k<=i;k++)
		{
			cout<<" ";
		}
		for(int j=5;j>=i;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
*/

/*
*****
****
***
**
*

*/
#include<iostream>
using namespace std;
int main(){
	for(int i=5;i>=1;i--)
	{
		for(int k=i;k<2-i;k++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}



