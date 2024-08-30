#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    if((a==1 && b==2) || (a==2 && b==1))
    {
        c=3;
    }
    else if((a==2 && b==3) || (a==3 && b==2))
    {
        c=1;
    }
    else
    {
        c=2;
    }
    cout<<c<<endl;
}