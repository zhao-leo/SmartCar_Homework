#include <iostream>
using namespace std;
int main()
{
    int n,t1,t2;
    cin>>n;
    t1=5*n;
    t2=3*n+11;
    if(t1<t2)cout<<"Local";
    else cout<<"Luogu";
    return 0;
}