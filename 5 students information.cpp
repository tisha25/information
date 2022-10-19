#include <iostream>
using namespace std;

class customer
{
	private:
		int id;
		char  name[30];
		int   age;
		int   total;
		char course[50];
		char number[10];
		char city[50];
		char clg[50];
	public:
	
		void getDetails(void);
		
		void putDetails(void);
};

void customer::getDetails(void){
	
	for(int i = 0; i <=4 ; ++i){
	
	cout<<"Enter Id : ";
	cin >> id ;
	cout << "Enter name: " ;
	cin >> name;
	cout << "Enter Age: ";
	cin >> age;
	cout<<"Enter Telecom Brannd : ";
	cin>>course;
	cout<<"Enter Mobile Number : ";
	cin>>number;
	cout<<"Enter City : ";
	cin>>city;
	cout<<"Enter Sim Card Validity : ";
	cin>>clg;
	cout<<endl;
}
    
}

void customer::putDetails(void){
	
	for(int i = 0; i <=4 ; ++i){
	cout<<endl<<endl << "Customer Details:\n";
	cout<<"Id : "<<id<<endl;
	cout << "Name:"<< name <<endl;
	cout<< "Age :"<<age<<endl;
	cout<<"Telecom : "<<course<<endl;
	cout<<"Mobile Number : "<<number<<endl;
	cout<<"City : "<<city<<endl;
	cout<<"Sim Valadity : "<<clg<<endl;
}
}

int main()
{
	customer std;	
	std.getDetails();
	std.putDetails();
	
	return 0;
}
