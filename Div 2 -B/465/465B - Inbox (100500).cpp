#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int letter[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&letter[i]);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(letter[i]==1)
        {
            c+=1;
            if(letter[i+1]==0)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(letter[j]==1)
                    {
                         c+=1;
                         break;
                    }
                }

            }
        }
    }
    cout<<c<<endl;
}
