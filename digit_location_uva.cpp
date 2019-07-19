#include<bits/stdc++.h>

using namespace std;


int no_of_digits(int n)
{
    int r=0;
    for(int i =1;i<=n;i*=10)
    {
        r+=(n-i+1);
    }
    return r;
}

int main()
{
    string str;
    int n,s=0,t;
    cin>>t;

    for(int j=0;j<t;j++)
    {
    cin>>n;
    int c=0,s=0;
    str = "";
    while(s<n)
    {
        c++;
        s+=no_of_digits(c);
    }

   s-=no_of_digits(c);
   int x=n-s;
    for(int i=1;i<=x;i++)
    {
        str+=  to_string(i);
    }

    cout<<str[x-1]<<endl;
    }
}
