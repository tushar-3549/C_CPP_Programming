
#include <bits/stdc++.h>

#define      lower(s)        transform(s.begin(),s.end(),s.begin(),::tolower)
#define      upper(s)        transform(s.begin(),s.end(),s.begin(),::toupper)

#define      sq(x)           (x)*(x)
#define      PI              acos(-1.0)
#define      endl            '\n'
#define      mod             1000000007
#define      gcd(x,y)        __gcd(x,y)
#define      lcm(x,y)        (x/gcd(x,y))*y
#define      ll              long long int
#define      ull             unsigned long long int
#define      ui              unsigned int
#define      INF             LLONG_MAX
#define      pb              push_back
#define      all(x)          x.begin(),x.end()
#define      min3(a,b,c)     min(a,min(b,c))
#define      max3(a,b,c)     max(a,max(b,c))
#define      ff              first
#define      ss              second

using namespace std;

int main()
{
    map<string,string> mp;

    mp["int"]="Keyword";
    mp["float"]="Keyword";
    mp["if"]="Keyword";
    mp["else"]="Keyword";
    mp["else if"]="Keyword";
    mp["for"]="Keyword";
    mp["printf"]="Keyword";
    mp["switch"]="Keyword";
    mp["case"]="Keyword";
    mp["return"]="Keyword";

    string s;
    getline(cin, s);
    int id = 0, op = 0, sym = 0, key = 0, sp = 0;
    vector <string> iden;
    vector <char> oper;
    vector <char> symbol;
    vector <string> keyword;

    string temp;
    for(int i = 0; i < s.size(); i++)
    {
        if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        {
            id++;
            temp += s[i];
        }
        else
        {

            if(mp.find(temp) == mp.end())
            {
                if(!temp.empty())
                    iden.push_back(temp);
            }
            else
            {
                if(!temp.empty())
                {
                    key++;
                    keyword.push_back(temp);
                }
            }

            temp = "";
            if(s[i] == ' ')
                continue;

            else if(s[i] >= 42 && s[i] <= 47 || s[i] == 61)
            {
                op++;
                oper.push_back(s[i]);
            }
            else if(s[i] >= 33 && s[i] <= 39 || s[i] >= 58 && s[i] <= 64)
            {
                sym++;
                symbol.push_back(s[i]);
            }
            else
                sp++;
        }

    }


    cout << "Identifier : " << iden.size() << endl;
    for(auto x: iden)
        cout << x << " ";
    cout << endl;
    /*for(char i = 0; i < iden.size(); i++)
        cout << iden[i] << " ";
    cout << endl;*/
    cout << "Operator : " << op << endl;
    for(auto y: oper)
        cout << y << " ";
    cout << endl;
    cout << "Keyword : " << key << endl;
    for(auto yy: keyword)
        cout << yy << " ";
    cout << endl;
    cout << "Symbol : " << sym << endl;
    for(auto z : symbol)
        cout << z << " ";
    cout << endl;

    return 0;
}

