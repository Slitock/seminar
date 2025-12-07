#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double S, r, m, n, p, mp, answer=0;
    
    cout << "Введите S, m, n: ";
    cin >> S >> m >> n;
    
    p = 0;
        
    for (p = 1; p <= 100; p += 0.1) {  
        r = p / 100;
        if (r == 0) continue;         
        mp = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
        
        if (abs(mp - m) < 0.1) {
            answer = p;
            break;
        }

    }
    if (answer == 0){
        cout<<"Неверные данные или нет решения"<<endl;

    }
    else {
        cout<<"P = "<<answer<<"%";
                        
    }
    
    return 0;
}
