#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* next;
	struct node* prev;
};

struct node* newn(int n)
{
	struct node* newnn=(struct node*)malloc(sizeof(struct node));
    newnn->data=n;
    newnn->next=NULL;
    newnn->prev=NULL;
    return newnn;
}

int main()
{
   int n,m,i;
   cin>>n>>m;
   struct node* start=NULL,*pre;
   for(i=1;i<=n;i++)
   	{
   		struct node *temp=newn(i);
        if(start==NULL)
        {
        	start=temp;
        	pre=temp;
        }
        temp->prev=pre;
        pre->next=temp;
        pre=temp;
   	}
   	pre->next=start;
   	start->prev=pre;
   	struct node* a=start;
   	// for(i=0;i<n;i++)
   	// {
    //        cout<<a->data<<" ";
    //        a=a->prev;
   	// }

    struct node *pp,*pp1;
    if(m==0)
    {
    	cout<<0;
    }
    else if(m>0)
    {
    	int x=n;
    	
    	while(x!=1)
    	{
    		int c=1;
    	    while(c<m)
    	    {

    		   pp=a;
    		   a=a->next;
    		   c++;
    	    }
    	    pp1=a->next;
    	    pp->next=pp1;
        	pp1->prev=pp;
    	    a=pp1;
    	    x--;
        }
        cout<<a->data;
    }

    else if(m<0)
    {
    	int x=n;
    	m=m*-1;
    	
    	while(x!=1){
    		int c=1;
    	    while(c<m)
    	    {

    		   pp=a;
    		   a=a->prev;
    		   c++;
    	    }
    	    pp1=a->prev;
    	    pp->prev=pp1;
        	pp1->next=pp;
    	    a=pp1;
    	    x--;
        }
        cout<<a->data;
    }
    
}