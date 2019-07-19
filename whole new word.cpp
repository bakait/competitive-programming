#include<bits/stdc++.h>
using namespace std;
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)

vector<string> word;
set<char>c;
vector<set<char>>ss;
stringstream  zz;
int t,n,l,u;

void permute(string s,int position)
{
    if (position==l) {cout<<s<<endl;}
    else{
        for (auto i=ss[position].begin();i!=ss[position].end();i++)
        {
            string m(1,*i);s=s+m;
            permute(s,position+1);
            s=s.substr(0,position+1);
        }
    }
}

int main()
{
u=0;
    freopen("test.txt","r",stdin);
    freopen("output.txt","w",stdout);

    string s,k,g;k="";
    cin>>t;
    f1(ii,t)
    {  word.clear();
       cin>> n>>l;
//       cout <<"n:"<<n<<" l:"<<l<<endl;
       f0(i,n)
       {
           cin>>s;
           word.push_back(s);

       }
       f0(i,l)
       {   cout<<endl<<"Printing letters in "<<i<<"th position:"<<endl;
           for(auto j=word.begin();j!=word.end();j++)c.insert((*j)[i]);
            ss.push_back(c);
            c.clear();
        }

       permute(k,0);
//       for(auto i=ss.begin();i!=ss.end();i++)
//       {
//           for(auto j=(*i).begin();j!=(*i).end();j++)
//           {
//              string m(1, (*j));
////               zz<<*j;zz>>m;
//               m=m+k;
//               cout<<m<<" ";
//           }
//
//           cout<<endl;
//       }

//       f0(i,n)cout<<word[i]<<endl;
      if ( std::find(word.begin(), word.end(), k) != word.end() )
           cout<<endl<<endl<<"word found"<<endl;
        else
            cout<<endl<<endl<<"word not found"<<endl;
    }
}
