#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double h, R, r;
    double pi = 3.14;

    do {
        cout << "Введите h, R, r: ";
        cin >> h >> R >> r;
        if (R < r) {
            cout << "Ошибка: R должен быть >= r!" << endl;
        }
    } while (R < r);

    double l = sqrt(h * h + (R - r) * (R - r));
    double V = (1.0/3.0) * pi * h * (R*R + R*r + r*r);
    double S = pi * (R*R + r*r + (R + r) * l);

    cout << "Образующая l = " << l << endl;
    cout << "Объем: " << V << endl;
    cout << "Площадь: " << S << endl;

    return 0;
}
