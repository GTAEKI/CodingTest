#include<bits/stdc++.h>
using namespace std;

string context;

int main()
{
    getline(cin,context);
    
    for(auto i : context)
    {
        if(i >= 'a' && i <= 'z')
        {
            cout << (char)('a' + ((i - 'a' + 13) % 26));
        }
        else if(i >= 'A' && i <= 'Z')
        {
            cout << (char)('A' + ((i - 'A' + 13) % 26));
        }
        else
        {
            cout << i;
        }
    }
    return 0;
}