#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string fun(string s,int n)
{
    cout<<"s="<<s<<endl;
    int j=0;
    char s2[s.size()];
    for (int i = 0; i < s.size()-1; ++i)
    {
        if (n==0)
        {
            break;
        }
        if (s[i]>=s[i+1])
        {
            
            n--;
            continue;
        }
        s2[j]=s[i];
        j++;
    }
    if (n!=0)
    {
        s2[j-n+1]='\0';
    }
    //cout<<s2<<endl;
    return s2;
}
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
    	int n;
    	cin>>n;
        int k=s.size();
        if(k>n)
          {
            s=fun(s,n);
            cout<<"s2="<<s<<endl;
          }
        else
            cout<<"Invalid";


    }
	return 0;
}
