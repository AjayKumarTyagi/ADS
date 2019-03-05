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
