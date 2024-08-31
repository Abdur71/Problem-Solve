#include <iostream>
using namespace std;

int main()
{
    int n,cn=0,m=1;
    cin >> n;
    
    int a[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]>=a[i-1])
        {
            cn++;
            m=max(m,cn);
        }
        else
        {
            cn=1;
        }
    }
    cout<<m<<endl;
    return 0;
}
