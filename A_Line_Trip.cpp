#include<iostream>
using namespace std;

int main()
{
    int t,n,x,mx;
    cin>>t;
    while(t>0)
    {
        cin>>n>>x;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int mx=0;
        for(int i=1;i<n;i++)
        {
            int diff =a[i]-a[i-1];
            mx=max(mx,diff);
        }
        mx=max(mx,a[0]-0);
        mx=max(mx,2*(x-a[n-1]));
        cout<<mx<<endl;
        t--;
    }
}