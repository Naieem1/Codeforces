#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long int l1,r1,l2,r2,k,ans;
    scanf("%lld %lld %lld %lld %lld",&l1,&r1,&l2,&r2,&k);
    long long int l=max(l1,l2);
    long long int r=min(r1,r2);
    if(l>r)
    {
        printf("0\n");
        return 0;
    }
    else if(l<=r){
        if(k>=l && k<=r)
        {
            ans=r-l;
        }
        else{
            ans=r-l+1;

        }
    }
    printf("%lld\n",ans);
    return 0;
}
