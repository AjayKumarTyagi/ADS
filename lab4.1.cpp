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
class internal:virtual public student
{
	protected:
		int marks1[6],i;
		public:
			void  int_marks()
			{
				cout<<"internal marks: \n";
				for(i=0;i<6;i++)
				{
					cout<<"enter "<<i+1<<" subject's marks: ";
					cin>>marks1[i];
				}
			}
			void int_display()
			{
				for(i=0;i<6;i++)
				{
					cout<<i+1<<" subject's marks: "<<marks1[i]<<endl;
				}
			}
};
class external:virtual public student
{
	protected:
		int marks2[6],j;
		public:
			void ext_marks()
			{
				cout<<"external marks\n";
				for(j=0;j<6;j++)
				{
				cout<<"enter "<<j+1<<" subject's marks: ";
				cin>>marks2[j];	
				}
			}
			void ext_display()
			{
				
			for(j=0;j<6;j++)
				{
					cout<<j+1<<" subject's marks: "<<marks2[j]<<endl;
				}	
			}
};
