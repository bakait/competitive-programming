#include<iostream>
#include<string>


using namespace std;

string s ;
int l ;

void swap (string &s ,int m, int n )
{
    char temp;
    temp=s[m];s[m]=s[n];s[n]=temp;
    cout<<s;

}


void test(string s, char g, int s_start,int s_len )
{
    string str=s.substr(s_start,s_len);
    cout<<str<<"  "<<g<<endl<<endl ;

    cout<<g<<str<<endl ;
        for(int i=1;i<s_len;i++)
        {
            cout<<str.substr(0,i)<<g<<str.substr(i,s_len-i)<<endl ;
        }
        cout<<str<<g<<endl;


}

void permute (int n )
{
    if (n==1){
            swap(s,l-1,l-2);
    //   cout<<"\n"<<n<<':'<<s.substr(0,n);
    }
    else
    {
       // cout<<"\n"<<n<<':'<<s.substr(0,n);
        permute (n-1) ;
    }

//   swap(s,2,3);
}


int main()
{


//    cout<<"Enter the string : ";
//    cin>>s;

//    getline(cin,s) ;
    string s="rajiv";
    l=s.length();
//    swap(s,2,3);

//    cout<<"\nLength of string: "<<s.length();
//    permute(s.length());
//  cout<<s.substr(0,1)<<" "<<s.substr(1,l-1) ;

//cout<<s.substr(l-2,1)<<'\t'<<s.substr(l-3,1)<<endl;
  test(s,s[1],2,3);




}
