#include <iostream>
using namespace std;
bool isLucky(int n)
{
    bool arr[10];
    for(int i=0; i<10; i++)
    {
        arr[i]=false;
    }
    while(n > 0)
    {
        int d = n % 10;
        // already seen return false
        if(arr[d])
            return false;
            //mark this digit as seen
        arr[d]=true;
        n = n/10;
    }
    return true;
}
int main()
{
    int arr[]= {1231,1234,5675,7890,4563,1074};
    int n = sizeof(arr)/sizeof(arr[0]);
    //isLucky(int arr[],int n);
    for(int i=0; i<n; i++)
    {
        if(isLucky(arr[i]))
            cout << arr[i] <<" is Lucky numbers"<<endl;
        else
            cout << arr[i] <<" is not Lucky numbers"<<endl;
    }
    return 0;
}
