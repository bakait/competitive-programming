#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);

    vector<int>::iterator i=a.begin();
    i++;
    while(i!=a.end())
    {
        cout<<*i<<" "<<*prev(i)+1<<endl;
        i++;

    }

}
