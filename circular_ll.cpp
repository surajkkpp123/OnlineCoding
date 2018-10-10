#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct node
{
	int data;
	struct node *next;
};
struct node *newnode(int n)
{
	struct node *tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=n;
	tmp->next=NULL;
	return tmp;
}
int main()
 {
	int n;
	cin>>n;
	struct node *head=NULL,*p;
	p=head;
	for (int i = 0; i < n; ++i)
	{
		struct node *tmp=newnode(i+1);
		if(head==NULL)
		{
			head=tmp;
			p=head;
		}
		else
		{
          p->next=tmp;
          p=tmp;    
		}
	}
	p->next=head;
    p=head;
    for (int i = 0; i < n*2; ++i)
    {
    	cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
	return 0;
}