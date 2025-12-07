#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a,x;

    cout<<"Введите a, x"<<endl;
    cin>>a>>x;
    
    if (abs(x)<1){
        if (x!=0){
            cout<<"w = "<<a*log(abs(x));
        }
        else{
            cout<<"Ошибка, ln(x) не оределяется";
        }
    }
    else{
        if (sqrt(a-(x*x))>=0){
            cout<<"w = "<<sqrt(a-(x*x));
        }
        else{
            cout<<"Ошибка, корень из 0";
            return 1;
        }
    }
    return 0;
}
