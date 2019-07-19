//#include<bits/stdc++.h>
#include<iostream>
#include <cstdio>
#include <map>
using namespace std;

//practicing maps

map<int, string > m;

int main()
{

 m[1]="rajiv";
 m[9]="srivastava";
 m[2]="akansha";
 m[3]="srivastava";
 m[4]="angad";

 map<int, string>::iterator it;

 for (it=m.begin();it!=m.end();it++)
    cout<<it->second<<endl;



}
