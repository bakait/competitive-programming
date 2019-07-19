
#include<bits/stdc++.h>

using namespace std;






int lcs(string a, string b,int m, int n)
{
    if (m==0||n==0) return 0;
    if (a[m-1]==b[n-1])
        return( 1+lcs(a,b,m-1,n-1));
    else
        return( max(lcs(a,b, m,n-1),lcs(a,b,m-1,n)));
}

//int lcs( char *X, char *Y, int m, int n )
//{
//   if (m == 0 || n == 0)
//     return 0;
//   if (X[m-1] == Y[n-1])
//     return 1 + lcs(X, Y, m-1, n-1);
//   else
//     return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
//}


int main()
{
    string s1,s2;
    char choice='Y';


    while(choice=='Y')
    {


    printf("Enter string 1: ");
//        cin>>s1;
        getline(cin,s1);
    printf("Enter string 2: ");
       getline(cin,s2);
   cout<<"LCS: "<< lcs(s1,s2,s1.length(),s2.length());
//    cout<<"You hav entered "<<s1<<'\t'<<s2;
    cout<<endl<<"Do you want to continue(Y/N):";
    cin>>choice;

   }
    return 0 ;


}


//void lcs(string a, string b)
//{
//    vector<char> string1,string2;
//    vector< vector<char> > l ;
//
//    cout<<"You hav entered "<<a<<'\t'<<b;
//    for(int i=0;i<a.length();i++) string1.push_back(a[i]);
//    for(int i=0;i<b.length();i++) string2.push_back(b[i]);
//
//    l.push_back(string1);
//    l.push_back(string2);
//
//    for(auto i=string1.begin();i!=string1.end();i++)
//        cout<<*i<<endl;
//    cout<<endl<<endl;
//    for(auto i=string2.begin();i!=string2.end();i++)
//        cout<<*i<<endl;
//
//}
