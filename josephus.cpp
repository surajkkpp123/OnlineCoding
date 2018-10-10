#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int fun(int n,int k)
{
  if(n==1)
  	return 1;
  return ((fun(n-1,k)+k-1)%n+1);
}

int main()
{
    
    int n,k;
    cin>>n>>k;
    
      int ans=fun(n,k);
       cout<<ans<<endl;
     
	return 0;
}