#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,t,c;
    scanf("%d %d %d",&n,&t,&c);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int cnt_1=0;
    int cnt_2=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=t)
        {
            cnt_1+=1;
        }
        else
        {
            if(cnt_1>=c)
            {
                cnt_2+=cnt_1-(c-1);
            }
            cnt_1=0;
        }
    }
    if(cnt_1>=c)
    {
        cnt_2+=cnt_1-(c-1);
    }
    cout<<cnt_2<<endl;
    return 0;
}
