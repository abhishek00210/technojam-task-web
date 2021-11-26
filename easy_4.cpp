#include<iostream>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>s;
    n=s.size();
    if(n>10)
    {
        cout<<s[0]<<n-2<<s[n-1];
    }
    else
    {
        cout<<s;
    }
    return 0;
}