#include<iostream>
using namespace std;
class student
{
	protected:
	char name[20],gender[5];
	int roll;
	public:
	void details()
	{
		cout<<"enter the name: ";
		cin.getline(name,20);
		cout<<"enter the gender: ";
		cin.getline(gender,5);
		cout<<"enter the roll no: ";
		cin>>roll;
	}
	void display()
	{
		cout<<"name: "<<name<<endl;
		cout<<"gender: "<<gender<<endl;
		cout<<"roll no: "<<roll<<endl;
	}	
};
