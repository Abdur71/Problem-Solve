#include<iostream>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    while (t>0)
    {
        int s=0;
        cin>>a>>b;
        s=(a*1)+(b*2);
        if(s%2==0)
        {
            int c=s/2;
            if(c%2==0)
            {
                cout<<"YES"<<endl;
            }
            else if(a>0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
        t--;
    }
    
}