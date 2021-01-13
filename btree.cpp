//binary tree presentation:
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

struct Node
{
  struct Node *left,*right;
  int data;

  Node(int data)
  {
    this->data=data;
    left=right=NULL;
  }
};
void io(struct Node *node)
{
  if (node==NULL)
     return ;

   io(node->left);
   cout<<node->data<<" ";
   io(node->right);
}

void po(struct Node *node)
{
  if (node==NULL)
     return ;

   po(node->left);
   po(node->right);
   cout<<node->data<<" ";
}
void pr(struct Node *node)
{
  if (node==NULL)
     return ;

   cout<<node->data<<" ";
   pr(node->left);
   
   pr(node->right);
}

int main() 
{ 

   struct Node *root = new Node(1); 

    root->left  = new Node(2); 
    root->right = new Node(3); 
    root->left->left = new Node(4); 
    root->left->right= new Node(5); 

   io(root);
   cout<<endl;
   pr(root);
   cout<<endl;
   po(root);
   cout<<endl;

    return 0; 
} 
