#include<iostream>
using namespace std;

int main()
{
    int n,key;
        cout<<"enter number of elements:";
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

       cout<<"enter key:";
        cin>>key;

        for(int i=0;i<n;i++)
        {
              if (a[i]==key)
                {
                cout<<"key found at"<<i;
                break;
                }
        }

    return 0;
}
