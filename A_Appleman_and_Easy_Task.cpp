#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];

        }
    }
    bool ans = true;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int count = 0;
            //(a[i-1][j] == 'o') + (a[i][j-1] == 'o') + (a[i+1][j] == 'o') + (a[i][j+1] == 'o');;
            if(i-1>=0&&a[i-1][j]=='o')
             count++;
            if(i+1<n&&a[i+1][j]=='o')
             count++;
            if(j-1>=0&&a[i][j-1]=='o')
             count++;
            if(j+1<n&&a[i][j+1]=='o')
             count++;


            if(count%2!=0)
            {
                ans = false;
                //cout<<count<<"@"<<i<<"@"<<j<<"@";
            }

        }
    }

    if(ans)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


}