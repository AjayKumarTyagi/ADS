#include<iostream>
using namespace std;
class temperature
{
	protected:
	float celsius,fahrenheit;
	public:
		temperature(float x)
		{
			celsius=x;
		}
		virtual void convert()
		{
			cout<<"celsius: "<<celsius<<endl;
			fahrenheit=celsius*(9/5)+32;
			cout<<fahrenheit;	
		}
};
