// Knuth  Morris  Pratt Algorithm
// complexity : O(n+m)  here, n = length of text , m = length of pattern

#include <bits/stdc++.h>
using namespace std;
vector <int> createArray(string pattern)
{
    vector <int> lps(pattern.length());
    int ind = 0;
    for(int i = 1; i < pattern.length();)
    {
        if(pattern[ind] == pattern[i])
        {
            lps[i] = ind + 1;
            ind++;
            i++;
        }
        else
        {
            if(ind != 0)
                ind = lps[ind - 1];
            else
                lps[i] = ind;
            i++;
        }
    }
    return lps;
}

void KMP(string text, string pattern)
{
    bool f = false;
    vector <int> lps = createArray(pattern);
    int i = 0, j = 0;  // i -> for text , j -> for pattern
    while(i < text.length())
    {
        if(text[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            if(j != 0)
                j = lps[j-1];
            else
                i++;
        }
        if(j == pattern.length())
        {
            cout << "Found\n";
            f = true;
            cout << "Found index : " << (i - pattern.length()) << endl;
            j = lps[j-1];
            //break;
        }
    }
    if(!f)
        cout << "Not Found\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string text, pattern;
    getline(cin,text);
    getline(cin,pattern);


    KMP(text, pattern);
    
    
    return 0;
}
