#include<bits/stdc++.h>
using namespace std;


void print_stack(stack<int> ss)
{
    cout<<"Elements in stack :";
    while(!ss.empty())
    {
        cout<<ss.top()<<" ";
        ss.pop();
    }
    cout<<endl;
}

int main()
{
   int h[]={0,6, 2, 5, 5, 5, 1, 6,0};
   int a[100],n,k,l;
   n=sizeof(h)/sizeof(h[0]); cout<<"Size of array :"<<n<<endl;
   memset(a,0,sizeof(a));
   stack<int> s; int t=10;

    s.push(0);
    for (int i=1;i<n;i++)
       {
           print_stack(s);
           if (s.empty()) k=0;    else {  k=s.top() ;}


           while ((h[k]>h[i])&& (!s.empty()))
           {
               printf("h[%d]=%d is greater  than h[%d]=%d\n",k,h[k],i,h[i]);

                s.pop();
//               if (s.empty()) l=0;    else {  l=s.top() ;}
               l=s.top()+1;
//               l=(k-l>1)?l+1:k;
               a[k]=h[k]*(i-l);
               printf("Top of stack: %d and a[%d]=%d   h[k]=%d l:%d \n ",k,k,a[k],h[k],l);
               k=s.top();

           }
           s.push(i);

         cout<<"===================\n";
       }
    print_stack(s);

    cout<<"\n Printing areas : \n";
    for (int i=0;i<n;i++) cout<<a[i]<<" ";


}
