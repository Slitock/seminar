#include <iostream>

using namespace std;

int evklid(int a, int b){
    if (a!=0 && b!=0){
         if (a>b){
             return evklid(a%b,b);
         }
         else{
             return evklid(a,b%a);
         }
    }
    else{
        return a+b;
    }
}

int subtraction(int a, int b){
     if (a==b){
         return a;
     }
     
     if (a<b){
         return subtraction(a,b-a);
     }
     else {
        return subtraction(a-b,a);
     }

}

int main(){
    int a,b;

    cout<<"Введите a,b: ";
    cin>>a>>b;
    
    cout<<"Способ Евклида - "<<evklid(a,b)<<endl;
    cout<<"Способ вычитания - "<<subtraction(a,b);

}
