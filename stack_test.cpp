#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>s;
    int h[]={1,3,5,3,2,6,7,7};
    int l=sizeof(h)/sizeof(h[0]);
    for (int i=0;i<l;i++) s.push(h[i]);
    printf("Printing elements of stack:\n");
    for (int i=0;i<l;i++) {cout<<s.top()<<endl;s.pop();}
    s.pop();
    s.pop();
    cout<<s.top();
    return 0 ;
}
