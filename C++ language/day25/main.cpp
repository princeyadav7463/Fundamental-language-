#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class temp{
	string userName,Email,Password;
	string searchName,searchPass,sreachEmail;
	fstream file;
	public:
		void login();
		void signup();
		void forgot();
}obj;
int main(){
	char choice;
	cout<<"\n 1. Login";
	cout<<"\n 2. Sign-Up";
	cout<<"\n 3. Forgot Password";
	cout<<"\n 4. Exit";
	cout<<"\n Enter Your Choice = ";
	cin>>choice;
	
	switch(choice){
		case '1':
			obj.login();
		break;
		case '2':
			obj.signup();
		break;
		case '3':
			obj.forgot();
		break;
		case '4':
			return 0;
		break;
		default:
			cout<<"Invalid Selection..";
	}
}
void temp singUP(){
	cout<<"\n Enter your User Name :: ";
	getline(cin,unserName);
	cout<<"Enter Your Email Addres :: ";
	getline(cin,Email);
	cout<<"Enter Your Password :: ";
	getline(cin,password);
	
	file.open("loginDate.txt",ios :: out | ios :: app);
	file<<userName<<"*"<<Email<<"*"<<password<<endl;
	file.close();
}
void temp :: login(){
	
	cout<<"----------LOGIN-----------"<<endl;
	cout<<"Enter Your User Name ::"<<endl;
	getline(cin,searchName);
	cout<<"Enter Your Password :: "<<endl;
	getline(cin,searchpass);
	
	file.open("loginDate.txt",ios:: in);
	getline(file,userName,'*');
	getline(file,Email,'*');
	getline(file,password,'\n';)
	while(!file.eof()){
		if(userName == searchName){
			if(password == searchPass){
			cout<<"\n Account Login Successful...";
			cout<<"\n Username::"<<userName<<endl;
			cout<<"\n Email ::"<<Email<<endl
				}else{
			cout<<"Password is Incorrect...!";
			}
		}
		getline(file,userName,'*');
		getline(file,Email,'*');
		getline(file,password,'\n';)
	}
	file.close();
}
void temp::forgot(){
	cout<<"\n Enter Your UserName :: ";
	getline(cin,seachName);
	cout<<"\n Enter Your Email Address :: ";
	getline(cin,searchEmail);
	
	file.open("loginData.txt",ios :: in);
	getline(file,userName,'*');
	getline(file,Email,'*');
	getline(file,password,'\n');
	while(!file.eof()){
		if(userName == searchName){
			if(Email == seachEmail){
				cout<<"\n Accoutn foudn ....";
				cout<<" Your Password :: "<<password<<endl;
				
			}else{
				cout<<"Not found....\n";
			}
		}else {
			cout<<"\n Not found...\n";
		}
		file.closed();
	}
	return
}

