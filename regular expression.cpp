#include<bits/stdc++.h>
using namespace std;
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)

int main()
{
    string s="124129";
    int n;
    istringstream iss(s);
    iss>>n; cout<<"string to number:"<<n<<endl;
    string r;
    f0(i,s.length())
    {
        r=s[i];
      cout<<int(s[i])-48 <<" "<<stoi(r)<<" "<<s[i]-'0'<<endl;
    }
    regex re("[0-8]*9[0-8]*");
    int l=1234,f=20349;
    if (regex_match(to_string(n),re)) cout<<"string contains 9"<<endl;


    cout<<to_string(l)+to_string(f)<<endl;

}
