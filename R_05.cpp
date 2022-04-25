// Reverse a string using dynamic memory allocation
#include <bits/stdc++.h>
using namespace std;

char* reverseString(char* str)
{

	int n = strlen(str);
	char *rev = new char[n+1];
	strcpy(rev, str);

	for (int i=0, j=n-1; i<j; i++,j--)
		swap(rev[i], rev[j]);
	return rev;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	char *s = "Engineer Rahat";
	printf("Output : %s\n", reverseString(s));
	return (0);
}
