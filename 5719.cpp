#include <iostream>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0,k;
    double s1,s2;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        if(i%k==0){sum1++;s1+=i;}
        if(i%k!=0){sum2++;s2+=i;}
    }
    s1=s1/sum1;
    s2=s2/sum2;
    printf("%.1f %.1f",s1,s2);
}