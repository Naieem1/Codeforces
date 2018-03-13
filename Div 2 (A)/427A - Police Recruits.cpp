#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,t,cnt=0,k=0;;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&t);
        if(t==-1)
        {

            if(k>0)
            {
                k-=1;
            }
            else{
               cnt+=1;
            }
        }
        else{
            k+=t;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
