#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int com(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first<b.first;
}

int main()
{
    int s,n,a,b;
    vector < pair<int,int> > v;
    scanf("%d %d",&s,&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        v.push_back(make_pair(a,b));
    }

    sort(v.begin(),v.end(),com);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s<=v[i].first)
        {
            cout<<"NO"<<endl;
            break;
        }
        else{
            s+=v[i].second;
            c+=1;
        }
    }
    if(c==n)
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
