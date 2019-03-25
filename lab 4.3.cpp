#include<iostream>
using namespace std;
class result;
class student
{
	char name[20];
	int sap,marks[6],i;
	public:
	void details()
	{
		cout<<"enter the name: ";
		cin.getline(name,20);
		cout<<"enter sap id: ";
		cin>>sap;
		cout<<"enter marks in 6 subjects: ";
		for(int i=0;i<6;i++)
		{
			cout<<"subject "<<i+1<<" :";
			cin>>marks[i];
		}
	}
	friend class result;	
};
