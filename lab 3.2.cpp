#include<iostream>
using namespace std;

class complex{
	float real,img,real2,img2;
	~complex()
	 {	cout<<"\ndes";
	 }
public:
		void num1(float real,float img){
			this->img=img;
			this->real=real;
		}
