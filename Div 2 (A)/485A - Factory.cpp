#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a,m;
    scanf("%d %d",&a,&m);
    int n=100;
    while(n--)
    {
        int r=a%m;
        if(r==0)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        a+=r;
    }
    cout<<"No"<<endl;
    return 0;
}
