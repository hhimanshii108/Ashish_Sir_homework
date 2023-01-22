#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int>a,pair<int,int>b)
{
    return a.first>b.first;
}

int main()
{
    vector<pair<int,int>>job;
    int n,p,d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p>>d;
        job.push_back(make_pair(p,d));
    }
    sort(job.begin(),job.end(),compare);

    int maxd=0;
    for(int i=0;i<n;i++)
    {
        if(job[i].second>maxd)
            maxd=job[i].second;
    }
    int arr[maxd];
    int count=0;
    int maxp=0;
    for(int i=0;i<maxd;i++)
    {
        arr[i]=-1;
    }

    for(int i=0;i<n;i++)
    {
        int j=job[i].second -1;
        while(j>=0 && arr[j]!= -1)
        {
            j--;
        }
        if(j>=0 && arr[j]== -1)
        {
            arr[j]=i;
            count++;
            maxp +=job[i].first;
        }
    }
    cout<<count<<" "<<maxp<<endl;
}
