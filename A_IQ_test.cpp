#include<iostream>
using namespace std;

int main()
{
    int a,j=0,b=0,i,arr[100];
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            j++;
        }
        else
        {
            b++;
        }
    }
    if(j>b)
    {
        for(i=0;i<a;i++)
        {
            if(arr[i]%2!=0)
            {
                cout<<i+1<<endl;
            }
        }
    }
    else
    {
        for(i=0;i<a;i++)
        {
            if(arr[i]%2==0)
            {
                cout<<i+1<<endl;
            }
        }
    }
}