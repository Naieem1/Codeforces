#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,k;
    int a=0,b=0;
    scanf("%d",&n);
    string name="YES";
    for(int i=0;i<n;i++)
    {
        cin>>k;
        if(k==25)
        {
            a+=1;
        }
        else if(k==50)
        {
            b+=1;
            a-=1;
            if(a<0)
            {
                name="NO";
                break;
            }
        }
        else
        {
            if(a>=1 && b>=1)
            {
                a-=1;
                b-=1;
            }
            else if(a>=3)
            {
                a-=3;
            }
            else
            {
                name="NO";
                break;
            }
        }
    }
    cout<<name<<endl;
    return 0;
}
