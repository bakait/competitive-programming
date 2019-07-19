#include<bits/stdc++.h>
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
using namespace std;

int main()
{
    int t,r,c,h,v,w[100][100],cnt,cnt_row,cnt_col,col_divide,row_divide,waffle_divide,waffle_count,n,n_prev;
    vector<int> b;
    string result;
    char s;
    freopen("test.txt","r",stdin);
    cin>>t;
    f1(ii,t)
    {    cnt=cnt_row=cnt_col=n=n_prev=0;
         b.clear();b.push_back(-1);
         result="Possible";
        cin>>r>>c>>h>>v;h++;v++;
        f0(i,r)f0(j,c) {cin>>s; w[i][j]= (s=='@')?1:0; cnt+=w[i][j];}
        if (cnt%(h*v)>0) {result="Impossible";}
        else {row_divide=cnt/h;col_divide=cnt/v;waffle_divide=cnt/(h*v);}
        f0(i,r)
           {
            f0(j,c)   cnt_row+=w[i][j];
            if (cnt_row==row_divide) {b.push_back(i);cnt_row=0;}
            else if (cnt_row>row_divide)result="Impossible";
           }
        vector<int>::iterator it=b.begin(); it++;
        f0(i,c)
        {
            f0(j,r)   cnt_col+=w[j][i];
            if (cnt_col==col_divide)
                {
                   while(it!=b.end())
                   {
                       for(int y=n_prev;y<=i;y++)
                       {
                           for(int x=(*prev(it)+1);x<=*it;x++)
                           {
                               waffle_count+=w[x][y];
                           }
                       }

                       if (waffle_count!=waffle_divide)
                          {result="Impossible";
                          }
                       it++;waffle_count=0;
                   }
                   n_prev=i+1;cnt_col=0;it=b.begin();it++;

                }
            else if (cnt_col>col_divide)result="Impossible";
        }
  cout<<"Case #"<<ii<<": "<<result<<endl;
    }
}

