#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t>0)
    {
        int count=0;
        cin>>n;
        cin>>s;
        int x=sqrt(n);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
        }
        if(x*x==n)
        {
            int count0=n-count;
            int c=x-2;
            if(c*c==count0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        }
        else 
        {
            cout<<"No"<<endl;
        }
        t--;
    }

}