#include <bits/stdc++.h>
using namespace std;
int main()
{
    int length1,s=0;
    cin>>length1;
    do
    {
        length1=ceil(float(length1)/2);
        s++;
    } while(length1!=1);
    cout<<s;
}