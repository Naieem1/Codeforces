#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    long long int d1=a+b+b+a;
    long long int d2=a+c+c+a;
    long long int d3=a+b+c;
    long long int d4=b+c+c+b;
    if(d1<=d2 && d1<=d3 && d1<=d4)
    {
        cout<<d1<<endl;
    }
    else if(d2<=d1 && d2<=d3 && d2<=d4)
    {
        cout<<d2<<endl;
    }
    else if(d3<=d1 && d3<=d2 && d3<=d4)
    {
        cout<<d3<<endl;
    }
    else if(d4<=d1 && d4<=d2 && d4<=d3)
    {
        cout<<d4<<endl;
    }
    return 0;
}
