//Store information of a student using structure.
/*
#include<stdio.h>
struct student{
	char name[50];
	int roll_number;
	float marks;
};
int main(){
	struct student student1;
	printf("Enter name=");
	fgets(student1.name,sizeof(student1.name),stdin);
	printf("Enter roll number=");
	scanf("%d",&student1.roll_number);
	printf("Enter marks=");
	scanf("%f",&student1.marks);
	printf("\nstudent Information=\n");
	printf("Name=%s",student1.name);
	printf("Roll Number=%d\n",student1.roll_number);
	printf("Marks=%2f\n",student1.marks);
	return 0;
}
*/
//Add two distnces (in inch to feet).
/*
#include<stdio.h>
struct Distance{
	int feet;
	float inches;
};
struct Distance addDistance(struct Distance d1, struct Distance d2){
	struct Distance result;
	result.feet=d1.inches+d2.inches;
	if(result.inches>12.0){
		result.inches-= 12.0;
		result.feet+=12;
	}
	return result;
}
int main(){
	struct Distance d1,d2,sum;
	printf("Enter firt distance(feet inches)=");
	scanf("%d %f",&d1.feet,&d2.inches);
	printf("Enter second distance(feet inches)=");
	scanf("%d %f",&d2.feet,&d2.inches);
	sum = addDistance(d1,d2);
	printf("Sum of distance=%d feet %.1f inches\n",sum.feet, sum.inches);
	return 0;
}
*/

//Add two complex numbers by passing structures to a function.
/*

#include<stdio.h>
struct complex{
	float real;
	float imaginary;
};
struct complex addcomplex(struct complex c1, struct complex c2){
	struct complex result;
	result.real=c1.real+c2.real;
	result.imaginary=c1.imaginary+c2.imaginary;
	return result;
}
int main(){
	struct complex num1, num2, sum;
	printf("Enter first complex number(real imaginary)=");
	scanf("%f%f",&num1.real,&num1.imaginary);
	printf("Enter second complex number(real imaginary)=");
	scanf("%f%f",&num2.real, &num2.imaginary);
	sum=addcomplex(num1,num2);
	printf("sum of complex number =%.2f +  %.2f\n",sum.real,sum.imaginary);
	return 0;
}
*/
// Calculate the difference between two time periods.

/*
#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateDifference(struct Time start, struct Time end) {
    struct Time difference;
    if (end.seconds < start.seconds) {
        --end.minutes;
        end.seconds += 60;
    }
    difference.seconds = end.seconds - start.seconds;
    if (end.minutes < start.minutes) {
        --end.hours;
        end.minutes += 60;
    }
    difference.minutes = end.minutes - start.minutes;
    difference.hours = end.hours - start.hours;
    return difference;
}

int main() {
    struct Time startTime, endTime, diff;
    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
    printf("Enter end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);
    diff = calculateDifference(startTime, endTime);
    printf("Time difference: %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);
    return 0;
}
*/
//Store information of 10 studnets using structures.
/*
#include<stdio.h>
struct Student{
	char name[50];
	int roll_number;
	float marks;
};
int main(){
	struct Student students[10];
	int i;
		for( i=0;i<10;i++){
		printf("Enter information for student %d:\n",i+1);
		printf("Name =");
		scanf(" %[^\n]s",students[i].name);
		printf("Roll Number=");
		scanf("%d",&students[i].roll_number);
		printf("Marks=");
		scanf("%f",&students[i].marks);
	}
	printf("\n Student Information\n");
	for(i=0;i<10;i++){
		printf("Student %d=\n",i+1);
		printf("Name=%s\n",students[i].name);
		printf("Roll Number=%d\n" ,students[i].roll_number);
		printf("marks =%.2f\n\n",students[i].marks);
	}
	return 0;
}

*/

//Store information of n students using structures.
#include<stdio.h>
struct student{
	char firstname [50];
	int roll;
	float marks;
} s[5];
int main(){
	int i;
	printf("Enter Information of students=\n");
	for(i=0;i<5;i++)
	{
		s[i].roll=i+1;
		printf("\n for roll number %d,\n",s[i].roll);
		scanf("%s",s[i].firstname);
		printf("Enter marks=");
		scanf("%f",&s[i].marks);
	}
	printf("Displaying Information=\n\n");
	for(i=0;i<5;i++){
		printf("\n Roll Number=%d\n",i+1);
		printf("First name=");
		puts(s[i].firstname);
		printf("marks=%.1f",s[i].marks);
		printf("\n");
	}
	return 0;
}
