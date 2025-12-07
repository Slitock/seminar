#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x = -4;
    for (int i = 0; i<=16 ;i++){
        if (x-1 == 0){
            cout << "Функция не определена " << x << endl;
        }
        else{
            double y = (x*x-2*x+2)/(x-1);
            cout << y << " " << x << endl;

        }
        x = x+0.5;
    }
    return 0;
} 
