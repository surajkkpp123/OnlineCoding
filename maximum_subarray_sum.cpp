#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int maxSubArraySum(int a[], int size) 
{ 
   int max_so_for=-10000000;
   int curr_max=0;

   for (int i = 0; i < size; ++i)
    {
      curr_max=curr_max+a[i];

      max_so_for=max(curr_max,max_so_for);
      if (curr_max<0)
          curr_max=0;
    } 
    return max_so_for;
} 

int main()
 {

   int a[] =  {97, 0, -461, -125, -404, -59, -322, -495, -288, -341, -449, -313, -192, -214, -389, -202, -183, -72, -416, -455, -187, -242, -416, 39, -198, -338, -465, -248, -25, -398, -97, -461, -214, -423, -407, -77, -190, -67, -178, -410, -160, 72, -350, -31, -85, -247, -319, -462, -303, -48, -354, -110, 17, 60, 19, 80, -218, -28, -426, -366, -140, 50}; 
   int n = sizeof(a)/sizeof(a[0]); 
   for (int i = 0; i < n; ++i)
   {
     cout<<a[i]<<" ";
   }
   cout<<endl;
   int max_sum = maxSubArraySum(a, n); 
   cout << "Maximum contiguous sum is " << max_sum<<endl; 
   return 0; 
}