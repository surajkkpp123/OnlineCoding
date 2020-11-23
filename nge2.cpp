#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void nge(vector<ll> v,ll n)
{
  stack<ll> s;
  vector<ll> b;
  for (ll i = n-1; i>=0; i--)
  {
     while(!s.empty()&&v[i]>s.top())
       s.pop();

     if(s.empty())
       b.push_back(-1);
     else
       b.push_back(s.top()); 

    s.push(v[i]);        
  }

  for (int i =n-1; i>=0; --i)
  {
    cout<<b[i]<<" ";
  }

  return;
}
int main()
{
  
  	ll n;
  	cin>>n;
  	vector<ll> a;
  	for (ll i = 0; i <n; ++i)
  	{
  		ll k;
  		cin>>k;
  		a.push_back(k);
  	}
    
     nge(a,n);
  	cout<<endl;
  
  return 0;
}