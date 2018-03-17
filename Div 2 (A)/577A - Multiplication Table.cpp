#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    int c=0;
    for(long long int i=1;i<=n;i++)
    {
        if(k%i==0 and i*n>=k)
        {
            c+=1;
        }
    }
    cout<<c<<endl;
    return 0;
}
