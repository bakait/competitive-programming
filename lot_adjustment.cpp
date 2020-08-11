
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={100,300,50,20,30}, b[]={200,30,100,40,10,20,20,20,20,20,20},j=0;
    string result;
    int n=b[0],k=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<k;i++)
    {
        int m=a[i];
        while(m>0)
        {
             if (b[j]==0) {j++;n=b[j];}
             m=m>b[j]?(m-b[j]):0;
             n=n>a[i]?(n-a[i]):0;
                     result=result+to_string(j)+"("+to_string(a[i]-m)+"),";
             a[i]=m;b[j]=n;
        }
        cout<<i<<":"<<result.substr(0,result.length()-1)<<endl;
        result="";
    }
}
