#include<iostream>
using namespace std;
class stack
{
	struct node
{
	int val;
	struct node *next;
};
struct node *head=NULL;
	public:
		void push(int x)
		{
			node *temp=new node;
			temp->val=x;
			temp->next=head;
			head=temp;
		}
	void pop()
		{
			node *temp=new node;
			temp=head;
			head=temp->next;
			delete temp;
		}
};
