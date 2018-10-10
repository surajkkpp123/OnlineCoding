#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
    {
      long long int n,minx,maxx;
      cin>>n>>minx>>maxx;
      long long int w[n],b[n];
      for(long long int i=0;i<n;i++)
         {
           cin>>w[i];
           cin>>b[i];
         }

      int c=0,c2=0;
      for(int x=minx;x<=maxx;x++)
        {
            int y,k=x;
            for(int i=0;i<n;i++)
              {
                 
                 y=w[i]*k+b[i];
                 k=y; 
               
             } 
             if(y%2==0)
               c++;
             else
               c2++;     
      }
      
      cout<<c<<" "<<c2<<endl;  
      
    }
 return 0;
} 
