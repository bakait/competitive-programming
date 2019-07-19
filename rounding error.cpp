#include<math.h>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)

struct cnt
{
    double no,d;
};
bool ccompare (cnt lhs, cnt rhs) { return (lhs.d>rhs.d); }
int main()
{
    int t,k,sum,m,n,min_point_5,perc_sum;
    double l,N,f,perc;
    cnt a;
    vector<cnt> c;
    cin>>t;
    f1(ii,t)
     {   double intpart;
         c.clear();sum=0;perc_sum=0;
        cin>>N>>l;
        f=modf(1/N*100,&intpart);
        min_point_5=ceil(.5/f);
        f0(i,l){cin>>a.no;perc=a.no/N*100; a.d=modf(perc,&intpart);c.push_back(a);}
        sort(c.begin(),c.end(),ccompare);
        if (f==double(0.0)) {cout<<"Case #"<<ii<<": "<<100<<endl;continue;}

        f0(i,l) sum+=c[i].no;
        sum=N-sum;
        f0(i,l)
        {
            k=0;
            if (c[i].d<.5)
            {
             k=ceil((.5-c[i].d)/f);
             if (sum>=k){sum-=k;}  else k=0;
            }
            perc_sum+= round((c[i].no+k)/N*100);
        }
        if (sum>=min_point_5)
            {
                m=sum/min_point_5;
                perc_sum+=round(min_point_5/N*100)*m;
            }
        else if (sum>0) perc_sum+=round(sum/N*100);
        cout<<"Case #"<<ii<<": "<<perc_sum<<endl;
        }
}
