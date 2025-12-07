#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream infile("./3.2t.txt");

    if (!(infile.is_open())){
        cout<<"Ошибка открытия файла"<<endl;
        return 1;
    }

    char ch;
    while (infile.get(ch)){
        if (ch >= '0' && ch <= '9'){
            cout<<ch;
        }
    }
    return 0;
}

