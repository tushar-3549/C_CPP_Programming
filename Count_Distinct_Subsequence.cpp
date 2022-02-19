#include<bits/stdc++.h>
using namespace std;
unordered_set <string> sn;
int subsequence(char s[],char op[],int i,int j)
{
    if(s[i]=='\0')
    {
        op[j]='\0';
        sn.insert(op);
        return;
    }
    else
    {
        op[j]=s[i];
        subsequence(str,n,i+1,j+1);

        subsequence(str,n,i+1,j);
    }

}

int main()
{
    char s[]="gfg";
    int n=sizeof(s)/sizeof(char);
    int m=pow(2,n)+1;
    char op[m];
    subsequence(s,n,0,0);
    cout<<sn.size();
    sn.clear();
    return 0;
}
