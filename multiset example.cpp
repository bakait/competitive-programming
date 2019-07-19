#include<iostream>
#include<set>
#include<iterator>
#include<algorithm>
#include<math.h>


using namespace std;




int main()
{

multiset<long long > s;
long long  n, k,x,x0,x1;
scanf("%d  %d",&n,&k);
s.insert(n);
multiset<long long>::iterator t;
for(long long i=0;i<k;i++){
    t=prev(s.end());
    x=*t;
    x0=(x-1)/2;
    x1=x/2;
//    printf(" value of x:%ll x0:%ll x1:%ll\n",x,x0,x1);
    s.erase(t);
    s.insert(x0);s.insert(x1);
}

cout<<"Result: "<<x0<<" "<<x1;



//multiset<string> s;
//
//s.insert("rajiv");
//s.insert("akansha");
//s.insert("angad");
//s.insert("srivastava");
//s.insert("mummy");
//s.insert("papa");
//s.insert("rajiv");
//s.insert("srivastava");
//////for (int i=0;i<10;i++){
//////    s.insert(10-i);
////}
//set<string>::iterator it;
////it=prev(s.end());
//it=prev(s.end());
//string w =*it;
//cout<<"String w is : "<<w<<endl;
////string s =it;
////
////cout<<"last string is "<< s;
//
////
////
////cout<<*it;
////s.erase(it);
////*it=8;
//
//s.erase(it);
//for (multiset<string>::iterator it=s.begin();it!=s.end();it++){
//    cout<<*it<<endl;
//}

}
