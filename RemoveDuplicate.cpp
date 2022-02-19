//Remove Duplicate Character
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char removeDuplicate(char str[],int n)
{
    int i,j,count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
       // {
            if(str[i]==str[j])
         //   {
                break;
        //    }
            if(j==i)
            str[count++]=str[i];
        }
        return str;
 //   }
    
}
int main()
{
    string str[]="geekforgeeks";
    int n = sizeof(str)/sizeof(str[0]);
    cout<<"After Remove : "<<endl;
    cout<<removeDuplicate(str,n)<<endl;
    return 0;
}