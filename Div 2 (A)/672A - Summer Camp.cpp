#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int n;
    string s1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s1+= to_string(i);
    }
    cout<<s1[n-1]<<endl;
    return 0;
}
