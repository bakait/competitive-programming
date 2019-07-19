#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("test.txt","r",stdin);
    long long int t, n, k , v,r,r1 ,r2;
    string s[50],result1,result2;
    cin>>t;
    for(int ii=1;ii<=t;ii++)
    {   result1=result2="";
        cin>>n>>k>>v;
        for (int i=0;i<n;i++) cin>>s[i];
        v--;  r1=k*v;   r2=ceil(double(k*v)/double(n))*n;
        r=(k*v)<n?k*v:n-(r2%r1);
        for (int i=0;i<k;i++)
            {
              if(r<n) result2=result2+" "+s[r];
              else {result1=result1+" "+s[r%n];}
              r++;
             }
       cout<<"Case #"<<ii<<": "<<result1<<result2<<endl;
    }
}


