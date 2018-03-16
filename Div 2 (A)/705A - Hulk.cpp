#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==1)
    {
        for(int i=0;i<(n-1)/2;i++)
        {
            cout<<"I hate that I love that ";
        }
        cout<<"I hate it"<<endl;
    }
    else if(n%2==0)
    {
        for(int i=0;i<(n-2)/2;i++)
        {
            cout<<"I hate that I love that ";
        }
        cout<<"I hate that I love it ";
        cout<<endl;
    }
    return 0;
}
