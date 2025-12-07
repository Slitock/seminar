#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c;
    cout<<"Введите a,b,c"<<endl;
    cin>>a>>b>>c;


    if (a == 0){
        if (b==0){
            cout<<"ERROR"<<endl;
            return 1;
        }
        cout<<"x = "<< (-c)/b<<endl;
    } 
    else{
        double d = pow(b, 2)-4*a*c;
        if (d < 0){
            cout<<"Корней нет, D<0"<<endl;
            return 2;
        }
        if (d == 0){
            cout<<"x = "<<(-b)/(2*a)<<endl;
        }
        else{
            cout<<"x1 = "<<(-b+sqrt(d))/(2*a)<<endl;
            cout<<"x2 = "<<(-b-sqrt(d))/(2*a)<<endl;
        }
    }
    return 0;
}
