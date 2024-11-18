// C++ Program to Store information of a student in a structure.
/*

#include<iostream>
using namespace std;
struct student{
	char name[50];
	int roll;
	float marks;
};
int main()
{
	student s;
	cout<<"Enter Information."<<endl;
	cout<<"Enter Name=";
	cin>>s.name;
	cout<<"Enter roll number=";
	cin>>s.roll;
	cout<<"Enter Marks=";
	cin>>s.marks;
	cout<<"\n Displaying Information."<<endl;
	cout<<"Name="<<s.name<<endl;
	cout<<"Roll="<<s.roll<<endl;
	cout<<"Marks="<<s.marks<<endl;
	return 0;
}

*/

//C++ Program to Add Two Distances(in inch-feet) System Using Structures.
/*
#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
}d1 , d2, sum;

int main() {
    cout << "Enter 1st distance," << endl;
    cout << "Enter feet: ";
    cin >> d1.feet;
    cout << "Enter inch: ";
    cin >> d1.inch;

    cout << "\nEnter information for 2nd distance" << endl;
    cout << "Enter feet: ";
    cin >> d2.feet;
    cout << "Enter inch: ";
    cin >> d2.inch;

    sum.feet = d1.feet+d2.feet;
    sum.inch = d1.inch+d2.inch;
    if(sum.inch > 12) {
        int extra = sum.inch / 12;

        sum.feet += extra;
        sum.inch -= (extra * 12);
    } 

    cout << endl << "Sum of distances = " << sum.feet << " feet  " << sum.inch << " inches";
    return 0;
}
*/

//C++ program to claculate Difference Between two tie period.
/*
#include<iostream>
using namespace std;
typedef struct complex{
	float real;
	float imag;
} complexNumber;
complexNumber addComplexNumbers(complex,complex);

int main(){
		complexNumber num1,num2,complexSum;
		char singOfImag;
		cout<<"For 1st complex number,"<<endl;
		cout<<"Enter real and imaginary parts respectively="<<endl;
		cin>>num1.real>>num1.imag;
		cout<<endl<<"For 2nd complex number,"<<endl;
		cout<<"Enter real and imaginary parts respectiverly="<<endl;
		cin>>num2.real>>num2.imag;
		complexSum=addComplexNumbers(num1,num2);
		singOfImag= (complexSum.imag>0)?'+':'-';
		complexSum.imag=(complexSum.imag>0)?complexSum.imag: - complexSum.imag;
		cout<<"sum="<<complexSum.real<<singOfImag<<complexSum.imag<<"i";
		return 0;
	}
complexNumber addComplexNumbers(complex num1,complex num2){
	complex temp;
	temp.real=num1.real+num2.real;
	temp.imag=num1.imag+num2.imag;
	return(temp);
}
*/


//C++ Program to store and Display informaiton using structure.
#include<iostream>
using namespace std;
struct student{
	char name[50];
	int roll;
	float marks;
}s[10];
int main()
{
cout<<"Enter informaiton of studnets"<<endl;
for(int i=0;i<10;i++){
	s[i].roll=i+1;
	cout<<"For roll number="<<s[i].roll<<","<<endl;
	cout<<"Enter name=";
	cin>>s[i].name;
	cout<<"Enter marks=";
	cin>>s[i].marks;
	cout<<endl;
}	
cout<<"Displaying Information:"<<endl;
for(int i=0;i<10;i++)
{
	cout<<"\n Roll Number="<<i+1<<endl;
	cout<<"Name="<<s[i].name<<endl;
	cout<<"marks="<<s[i].marks<<endl;
}
return 0;
}
