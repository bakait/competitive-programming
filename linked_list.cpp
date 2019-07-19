#include<iostream>
#include<chrono>
using namespace std;


struct node
{
    int data;
    node* next;
};

int main()
{
    cout<<"rajiv ";
    node a ;
    a->data=1;
    node b;
    a->next= &b;

    b->data=2;
    b->next=null;



    cout<<a->data<<'  '<<a->next;

}

