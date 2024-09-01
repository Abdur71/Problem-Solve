#include<iostream>
using namespace std;

int main()
{
    int t,l,r;
    cin>>t;
    while(t>0)
    {
        int count=1;
        cin>>l>>r;
        int c=1;
        for(int i=l;i<=r;i++)
        {
           if(l+c>r)
           {
            break;
           }
           else
           {
            l+=c;
            count++;
            c++;
           }
        }
        cout<<count<<endl;
        t--;
    }
}