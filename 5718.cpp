#include <iostream>
using namespace std;
int main()
{
    int a[100],n,min=1000000;
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(min>=a[i])min=a[i];
    }
    cout<<min;
}