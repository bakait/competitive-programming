#include <iostream>
#include<algorithm>
using namespace std;
void permutations(string str, int i, int n)
{
    if (i == n - 1)
    {
        cout << str << endl;
        return;
    }
    for (int j = i; j < n; j++)
    {
        swap(str[i], str[j]);
        permutations(str, i + 1, n);
        swap(str[i], str[j]);
    }
}

int main()
{
//    string str = "abc";
     string str;
     cout<<"Enter string:";
     cin>>str;
//     getline(cin,str);
    sort(str.begin(),str.end());
    cout<<str;
//    permutations(str, 0, str.length());



    return 0;
}
