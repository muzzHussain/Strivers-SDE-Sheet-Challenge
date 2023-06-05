#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int low = 0;
   int end = n-1;
   int mid = 0;

   while(mid <= end) {
      switch(arr[mid]){
         case 0:
            swap(arr[low++], arr[mid++]);
            break;
         case 1:
            mid++;
            break;
         case 2:
            swap(arr[mid], arr[end--]);
            break;
      } 
   }
}