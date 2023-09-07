#include <iostream>
using namespace std;
int f(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
}
int main()
{
    int year,month;
    cin >> year >> month;
    switch(month)
    {
        case 1:cout<<31;break;
        case 3:cout<<31;break;
        case 4:cout<<30;break;
        case 5:cout<<31;break;
        case 6:cout<<30;break;
        case 7:cout<<31;break;
        case 8:cout<<31;break;
        case 9:cout<<30;break;
        case 10:cout<<31;break;
        case 11:cout<<30;break;
        case 12:cout<<31;break;
        default:if(f(year)==0)cout<<28;else cout<<29;break;
    }
    return 0;
}