#include <iostream>
using namespace std;
/*void Angle(int a,int b,int c)
{
    if(a*a+b*b > c*c)cout<<"Acute triangle"<<endl;
    if(a*a+b*b == c*c)cout<<"Right triangle"<<endl;
    if(a*a+b*b < c*c)cout<<"Obtuse triangle"<<endl;
}*/
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d;
    if(a>b){d=a;a=b;b=d;}
    if(a>c){d=a;a=c;c=d;}
    if(b>c){d=b;b=c;c=d;}
    if(a+b<=c){cout<<"Not triangle"<<endl;return 0;}

    if(a*a+b*b > c*c)cout<<"Acute triangle"<<endl;
    if(a*a+b*b == c*c)cout<<"Right triangle"<<endl;
    if(a*a+b*b < c*c)cout<<"Obtuse triangle"<<endl;

//    Angle(a,b,c);
    if(a==b || b==c || a==c)cout<<"Isosceles triangle"<<endl;
    if(a==b && b==c)cout<<"Equilateral triangle"<<endl;
    return 0;

}