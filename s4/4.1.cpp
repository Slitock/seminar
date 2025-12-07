#include <iostream>
using namespace std;

int S_rectangel(){
    int a,b;

    cout<<"Нахождение площади прямоугольника."<<endl;
    cout<<"Введите a и b: ";
    cin>>a>>b;

    return a*b;
}

int S_trangel(){
    int a, h;
    
    cout<<"Нахождение площади треугольника."<<endl;
    cout<<"Введите a и h: ";
    cin>>a>>h;

    return a*h*(1/2);
}

int S_circle(){
    int r, p=3.14;

    cout<<"Нахождение площади круга."<<endl;
    cout<<"Введите r: ";
    cin>>r;

    return p*r*r;
}


int main(){
    int choise;

    cout<<"1.Площадь прямоугольника\n2.Площадь треугольника\n3.Площадь круга\n4.Все сразу\nВведите номер дейстия: ";
    cin>>choise;

    if (choise == 1){
        cout<<S_rectangel()<<endl;
    }
    else if(choise == 2){
        cout<<S_trangel()<<endl;
    }
    else if (choise == 3){
        cout<<S_circle()<< endl;
    }
    else if (choise = 4){
        cout<<S_rectangel()<<endl;
        cout<<S_trangel()<<endl;
        cout<<S_circle()<<endl;
    }

    return 0;
}
