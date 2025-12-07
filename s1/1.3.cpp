#include <iostream>

using namespace std;

int main(){
    double b, c;
    cout<<"Введите b, c"<<endl;
    cin>>b>>c;

    if (b==0){
        cout<<"ERROR"<<endl;
        return 1;
    }
    cout<<"x = "<< (-c)/b<<endl;

    return 0;
}
