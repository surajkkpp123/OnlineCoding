#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int mid,int r)
{
  int i=l,j=mid+1,k=l;
  int tmp[];
}
void ms(int a[],int l,int r)
{
  if(l<r)
   {
     int mid=(l+r)/2;
     ms(a,l,mid);
     ms(a,mid+1,r);
     merge(a,l,mid,r);
   }
   return ;
}
int main()
{
  cout<<"Enter the total no. of elements:\n";
  int n;
  int a[n];
  cout<<"Enter all elements:\n";
  for(int i=0;i<n;i++)
     cin>>a[i];
  
  ms(a,0,n-1);
  cout<<"After sorting array elements are:\n";
  for(int j=0;j<n;j++)
     cout<<a[j]<<"  ";
  cout<endl;      
  return 0;
} 
