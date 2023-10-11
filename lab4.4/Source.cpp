// Lab_04_4.cpp
// < Якубенко Олександра>
// Лабораторна робота № 4.4
// .  Табуляція функції, заданої графіком.
// Варіант 28
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double x, xp, xk, dx, y{}, R;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(7) << "R" << "    |" << endl;
    cout << "---------------------------" << endl;
    for (x = xp; x <= xk; x += dx)
    {
        if (x <= -8 - R)
            y = -R;
        else if (-8 - R < x && x <= -8 + R)
            y = sqrt(R * R - x * x - 16 * x - 64) - R;
        else if (-8 + R < x && x <= 2)
            y = -R + ((2 + R) / (10 - R)) * (x + 8 - R);
        else if (2 < x && x <= 6)
            y = 0;
        else
            y = pow((x - 6), 2);

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
    }

    cout << "---------------------------" << endl;
    return 0;
}
