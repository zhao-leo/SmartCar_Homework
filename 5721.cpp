#include <iostream>
using namespace std;
void pri(int x)
{
    if (x<=9 && x>=1) cout<<"0"<<x;
    else cout<<x;
}
int main()
{
    int n,s=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            pri(s);
            s++;
        }
        
        cout<<endl;
    }
    return 0;
}