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

   int arr[] = {2, 3, 4, 20, 40}; 
   int n = sizeof(arr)/ sizeof(arr[0]); 
   int x = 2; 
   int result = binarySearch(arr, 0, n-1, x); 

   (result == -1)? printf("Element is not present in array") 
                 : printf("Element is present at index %d", 
                                                   result); 
   

    return 0;
}