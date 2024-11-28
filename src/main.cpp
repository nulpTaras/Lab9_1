#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "e = "; cin >> e;
    cout << endl;

    // Друк заголовка таблиці
    cout << "+----------+---------------+-------------------+-------+" << endl;
    cout << "|    x     |     Sum(s)    |    exp(x^2)       |   n   |" << endl;
    cout << "+----------+---------------+-------------------+-------+" << endl;

    x = x_p;
    while (x <= x_k) {
        sum(); // Обчислення суми ряду


        cout << "| " << setw(8) << fixed << setprecision(6) << x << " | "
             << setw(13) << s << " | "
             << setw(17) << exp(x * x) << " | "
             << setw(5) << n << " |" << endl;

        x += dx; // Збільшення x на заданий крок
    }

    cout << "+----------+---------------+-------------------+-------+" << endl;

    return 0;
}
