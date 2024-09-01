#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    cin>>word;
    bool shouldChange = true;
    for(int i =1;i<word.length();i++)
    {
        if(islower(word[i]))
        {
            shouldChange = false;
            break;
        }
    }    
    if(shouldChange)
    {
        for(int i = 0;i<word.length();i++)
        {
            if(isupper(word[i]))
            {
                word[i]=tolower(word[i]);
            }
            else
            {
                word[i]=toupper(word[i]);
            }
        }
    }
    cout<<word<<endl;   
}