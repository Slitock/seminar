#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream infile("./3.1t.txt");
    string data;

    while (getline(infile,data)){
        cout<<data<<endl;
    }
    return 0;

}
