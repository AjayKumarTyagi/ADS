#include<iostream>
using namespace std;
class hydrogen;
class sulphur;
class oxygen
{
	int o;
	public:
		void geto(int a)
		{
			o=a;
		}
		friend void compound(oxygen o1,hydrogen h1,sulphur s1);
};
class hydrogen
{
	int h;
	public:
		void geth(int b)
		{
			h=b;
		}
	friend void compound(oxygen o1,hydrogen h1,sulphur s1);	
};
class sulphur
{
	int s;
	public:
		void gets(int c)
		{
			s=c;
		}
		friend void compound(oxygen o1,hydrogen h1,sulphur s1);
};
