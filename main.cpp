// C++ program to calculate pow(x,n)
#include<iostream>
using namespace std;
class gfg
{

/* Function to calculate x raised to the power y */
public:
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}
};

/* Driver code */
int main()
{
    gfg g;
    int x , d;
    unsigned int n;
    cout<<"enter value of x, n and d\n";
    cin>> x >> n >> d;
    cout << g.power(x, n)%d;
    return 0;
}
