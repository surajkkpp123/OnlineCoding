#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	  string  s;
	  cin>>s;
	  
	  int val=next_permutation(s.begin(),s.end());
	  if(val==0)
	  	cout<<"-1"<<endl;
	  else
	  	cout<<s<<endl;
	}
	return 0;
}