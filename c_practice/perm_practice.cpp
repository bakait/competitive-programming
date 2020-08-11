#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

template<typename T>
void print(T t)
{
    for(const auto&e : t) cout<<e<<" ";
    cout<<endl;
}



void permute (string s,int m,int n)
{
    if (m==n-1)
        {
//             cout<<s<<endl ;
           print(s) ;
        }
   else{
    for(int i=m;i<n;i++)
    {
        swap(s[m],s[i]);
        permute(s,m+1,n);
        swap(s[m],s[i]);
    }
   }
}



int main()
{
    string s;
//    cout<<"Enter string:";
//    cin>> s;
    s="rajiv";

    permute(s,0,s.length());
}
