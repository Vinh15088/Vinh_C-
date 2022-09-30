#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    float x1, x2;
    cin >> a >> b >> c;
    int delta;
    delta = b * b - 4 * a * c;

    if (a == 0) //giai phuong trinh bac nhat bx + c = 0
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "INF"; //vo so nghiem
            }
            else
            {
                cout << "NO"; //vo nghiem
            }
        }
        else if (b > 0)
        {
            cout << fixed << setprecision(2) << (float)(-c) / b;
        }
        else if (b < 0)
        {
            if (c == 0)
            {
                b = abs(b);
                cout << fixed << setprecision(2) << (float)(-c) / b;
            }
            else if (c != 0)
            {
                cout << fixed << setprecision(2) << (float)(-c) / b;
            }
        }
    }
    else // a != 0 => Giai pt ax2 + bx + c = 0
    {
        if (delta > 0)
        {
            x1 = ((-b - sqrt(delta)) / (2 * a));
            x2 = ((-b + sqrt(delta)) / (2 * a));
            if (x1 < x2)
            {
                cout << fixed << setprecision(2) << x1 << ' ' << x2;
            }
            else
            {
                cout << fixed << setprecision(2) << x2 << ' ' << x1;
            }
        }
        else if (delta < 0)
        {
            cout << "NO";
        }
        else
        {
            cout << fixed << setprecision(2) << (float)-b / (2 * a);
        }
    }

    return 0;
}