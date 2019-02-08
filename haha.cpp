#include<iostream>
using namespace std;
class haha
{
haha()
{
cout<<"const called";
}
  public:
 void blah()
 {
 cout<<"fun called";
 }
};
int main()
{
haha a;
  a.blah();
}
