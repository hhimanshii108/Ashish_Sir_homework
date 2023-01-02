
#include<iostream>
using namespace std;
int BinarySearch(int array[], int l, int r, int element){
   while (l <=r){
        int comp=0;
    comp++;
      int m = l + (r- l )/2;
      if (array[m] == element)
         return m;
      if (array[m] < element)
         l = m + 1;
      else
         r = m - 1;
        cout<<"comparison"<<comp;
   }
   return -1;
}
int main()
{
    int n,j,element;
   cout<<"enter the no. of elements in the array";
   cin>>n;
   int array[n];
   for(j=0;j<n;j++)
   {
      cin>>array[j];
   }
  cout<<"enter the searching element";
  cin>>element;
   int index = BinarySearch(array, 0, n-1, element);
   if(index == -1 ) {
     cout<<"Element not found in the array ";
   }
   else {
     cout<<"Element found at index :"<<index;
   }
   return 0;
}
