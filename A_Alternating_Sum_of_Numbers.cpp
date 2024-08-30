#include<iostream>
using namespace std;

int main()
{
    int t,n,a[1000],sumA=0,sumB=0,sum;
    cin>>t;
    while (t > 0)
    {
        cin>>n;
        sumA = 0; 
        sumB = 0; 

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2==0)
            {
                sumA += a[i];
            }
            else
            {
                sumB += a[i];
            }
        }

        sum = sumA - sumB; 
        cout << sum << endl; 
        t--;
    }
    
    return 0;
}
