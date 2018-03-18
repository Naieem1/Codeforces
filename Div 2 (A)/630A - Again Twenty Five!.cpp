#include <iostream>
#include <cstdio>
using namespace std;
int mode(int b,long long int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n%2==0)
    {
        int p=(mode(b,n/2))%100;
        return (p*p)%100;
    }
    else{
        int p1=b%100;
        int p2=(mode(b,n-1))%100;
        return (p1*p2)%100;
    }
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    int ans=mode(5,n);
    printf("%d\n",ans);
    return 0;
}
