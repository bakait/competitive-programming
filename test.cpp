#include<iostream>
#include<vector>

using namespace std;


int main()
{
  vector<int>a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);

//  vector<int>::iterator i ;
  for (auto i=a.begin();i!=a.end();i++)
    cout<<*i<<endl;


}

