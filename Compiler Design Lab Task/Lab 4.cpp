// Write a C/C++ Program which recognizes all special characters and counts the number of uppercase and lowercase characters.

#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int up = 0, low = 0, sp = 0;
    vector <char> v;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
            up++;
        else if(s[i] >= 97 && s[i] <= 122)
            low++;
        else if((s[i] >= 33 && s[i] <= 41) || (s[i] >= 58 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96))
        {
            sp++;
            v.push_back(s[i]);
        }
    }
    cout << "Upper Characters : " << up << endl;
    cout << "Lower Characters : " << low << endl;
    cout << "Special Characters : " << sp << endl;
    for(auto x: v)
        cout << x << " ";
    cout << endl;

    return 0;
}
