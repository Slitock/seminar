#include <iostream>

using namespace std;

int main(){
    double x,y;
    cout<<"Введите x, y"<< endl;
    cin>>x>>y;
    cout<<x<<" + "<<y<<" = "<<x+y<<endl;
    cout<<x<<" - "<<y<<" = "<<x-y<<endl;
    cout<<x<<" * "<<y<<" = "<<x*y<<endl;
    if (y!=0){
        cout<<x<<" / "<<y<<" = "<<x/y<<endl;
    }

    return 0;
}
