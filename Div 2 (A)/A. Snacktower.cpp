#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int x=n;
    vector <bool> v (n+1);
    for(int i=0;i<n;i++)
    {
        int m;
        scanf("%d",&m);
        v[m]=1;
        while(v[x]==1)
        {
            printf("%d ",x);
            x--;
        }
        printf("\n");
    }
    return 0;
}
