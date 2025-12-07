#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double S,r,n,p,m;

    cout<<"Введите S,p,n"<<endl;
    cin>>S>>p>>n;

    r = p/100;
    m = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));

    cout<<m<<" руб."<<endl;

    return 0;
}
