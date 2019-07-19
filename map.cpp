#include<bits/stdc++.h>
using namespace std;



int main()
{
 map<int,int>m;
 m[1]=6;
 m[3]=0;
 m[8]=3;
 m[11]=1;

 m[9]-=2;
 map<int,int>::iterator it;

 it=prev(m.end());

// while(!m.empty())
// {
//     cout<<(--m.end())->first<<" "<<(--m.end())->second<<endl;
// }

for(it=m.begin();it!=m.end();it++)
 cout<<it->first<<" "<<it->second<<endl;






}
