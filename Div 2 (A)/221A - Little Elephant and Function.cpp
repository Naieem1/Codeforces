#include <iostream>
#include <cstdio>
using namespace std;
void per(int n)
{
    printf("%d ",n);
    for(int i=1;i<n;i++)
    {
        printf("%d ",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    per(n);
    return 0;
}
