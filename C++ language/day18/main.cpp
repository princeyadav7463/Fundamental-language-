
/*
#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int countPositive = 0, countNegative = 0, countZero = 0;
    int evenPositive = 0, evenNegative = 0, oddPositive = 0, oddNegative = 0;
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > 0) {
            countPositive++;
            if (numbers[i] % 2 == 0) {
                evenPositive++;
            } else {
                oddPositive++;
            }
        } else if (numbers[i] < 0) {
            countNegative++;
            if (numbers[i] % 2 == 0) {
                evenNegative++;
            } else {
                oddNegative++;
            }
        } else {
            countZero++;
        }
    }
    cout << "Positive numbers: " << countPositive << endl;
    cout << "Negative numbers: " << countNegative << endl;
    cout << "Zeros: " << countZero << endl;
    cout << "Even positive numbers: " << evenPositive << endl;
    cout << "Even negative numbers: " << evenNegative << endl;
    cout << "Odd positive numbers: " << oddPositive << endl;
    cout << "Odd negative numbers: " << oddNegative << endl;

    return 0;
}
*/
//wap to input a number and print the sum of all the digits that are even exaple 456 output is 10.
/*
#include<iostream>
using namespace std;
int main(){
	int num,sum=0;
	cout<<"Enter a number=";
	cin>>num;
	while(num>0){
		int digit=num%10;
		if(digit%2==0){
			sum=sum+digit;
		}
		num=num/10;
	}
	cout<<"The sum of all even digit is="<<sum<<endl;
	return 0;
}
*/

//Wap generate fibonacci series up to n.

#include<iostream>
using namespace std;
int main(){
	int n, t1=0,t2=1,nextTerm=0;
	cout<<"Enter the number of terms=";
	cin>>n;
	cout<<"Fibonacci series=";
	for(int i=1;i<=n;i++){
		if(i==1){
			cout<<t1<<", ";
			continue;
		}
		if(i==2){
			cout<<t2<<", ";
			continue;
		}
		nextTerm=t1+t2;
		t1=t2;
		t2=nextTerm;
		cout<<nextTerm<<", ";
	}
	return 0;
}

