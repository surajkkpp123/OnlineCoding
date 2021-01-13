#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int binarySearch(int arr[], int l, int r, int x) 
{ 
   if (l<=r)
   {
     int mid=l+(r-l)/2;
      if(arr[mid]==x)
      {
        return mid;
      }
      else if(arr[mid]<x)
      {
       return binarySearch(arr,mid+1,r,x);
      }
      else
      {
       return binarySearch(arr,l,mid-1,x);
      }
   }

   return -1;
} 


int main()
 {

   int n,x;
   cin>n;
   int arr[n];
   for(int i=0;i<n;i++)
   	  cin>>arr[i];
   	cout<<"Enter an Element to search : ";
   	cin>>x;
   int result = binarySearch(arr, 0, n-1, x); 

   (result == -1)? printf("Element is not present in array") 
                 : printf("Element is present at index %d", 
                                                   result); 
   

    return 0;
}