#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using  namespace std;
bool arr[27];
int main()
{
    int n;
    string ch;
    scanf("%d",&n);
    cin>>ch;

    if(n<26)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        transform(ch.begin(), ch.end(), ch.begin(), ::tolower);
        for(int i=0;i<ch.size();i++)
        {
            arr[ch[i]-97]=1;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }
    return 0;
}

