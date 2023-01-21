#include<iostream>
using namespace std;
class sorting
{
public:
void bubblesort(int a[],int n)
{
for(int i=0;i<n-1;++i)
{
int c=0;
for(int j=0;j<n-i-1;++j)
{
if(a[j]>a[j+1])
{
int t=a[j];
a[j]=a[j+1];
a[j+1]=t;
++c;
}
}
if(c==0)
return;
}
}
void selctionsort(int a[],int n)
{
for(int i=0;i<n;++i)
{
int sm=a[i];
int pos=i;
for(int j=i+1;j<n;++j)
{
if(a[j]<sm)
{
pos=j;
sm=a[j];
}
}
if(pos!=i)
{
a[pos]=a[i];
a[i]=sm;
}
}
}
void insertionsort(int a[],int n)
{
for(int i=1;i<n;++i)
{
int t=a[i];
int j=i-1;
while(j>=0&&t<a[j])
{
a[j+1]=a[j];
j--;
}
a[j+1]=t;
}
}
void quicksort(int a[],int lb,int ub)
{
int i=lb,j=ub,key=a[lb],t=0;
if(lb>=ub)
return;
while(i<j)
{
while(key>=a[i]&&i<j)
i++;
while(key<a[j])
j--;
if(i<j)
{
t=a[j];
a[j]=a[i];
a[i]=t;
}
}
a[lb]=a[j];
a[j]=key;
quicksort(a,lb,j-1);
quicksort(a,j+1,ub);
}
void mergesort(int a[],int t[],int lb,int ub)
{
int mid=0;
if(lb<ub)
{
mid=(lb+ub)/2;
mergesort(a,t,lb,mid);
mergesort(a,t,mid+1,ub);
merge(a,t,lb,mid,ub);
}
}
void merge(int a[],int t[],int lb,int mid,int ub)
{
int k=lb,le=mid,c=lb;
while(lb<=le&mid
      +1<=ub)
{
if(a[lb]<a[mid+1])
{
t[k]=a[lb];
k++;
lb++;
}
else
{
t[k]=a[mid+1];
k++;
mid++;
}
}
while(lb<=le)
{
t[k]=a[lb];
k++;
lb++;
}
while(mid+1<=ub)
{
t[k++]=a[mid+1];
mid++;
}
for(int w=c;w<=ub;++w)
a[w]=t[w];
}
void display(int a[],int n)
{
for(int i=0;i<n;++i)
cout<<a[i]<<" ";
}
};
int main()
{
int ch;
system("CLS");
cout<<"1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n4.Quick Sort\n5.Merge Sort\nEnter Choice:";
cin>>ch;
int n;
cout<<"Enter Array Size:";
cin>>n;
int a[n];
int t[n];
sorting obj;
cout<<"Enter Numbers Of The Array"<<endl;
for(int i=0;i<n;++i)
cin>>a[i];
switch(ch)
{
case 1:
obj.bubblesort(a,n);
obj.display(a,n);
break;
case 2:
obj.selctionsort(a,n);
obj.display(a,n);
break;
case 3:
obj.insertionsort(a,n);
obj.display(a,n);
break;
case 4:
obj.quicksort(a,0,n-1);
obj.display(a,n);
break;
case 5:
obj.mergesort(a,t,0,n-1);
obj.display(a,n);
break;
default:
cout<<"Wrong Choice Entered";
break;
}
}
