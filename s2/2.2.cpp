#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x,y,b;
    cout<<"Введите x,y,b"<<endl;
    cin>>x>>y>>b;

    if ((b-y>0) && (b-x>=0)){
        double z = log(b-y)*sqrt(b-x);

        cout<<"z = "<<z<<endl;
    }
    else{
        cout<<"невозможное выражение";
    }
    return 0;
}
