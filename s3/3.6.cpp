#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

int main(){

    vector<int> numbers(10);
    cout << "Введите 10 чисел через пробел: ";
    
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }
    
    ofstream outfile("./3.6t.txt");
    if (!(outfile.is_open())){
        cout<<"Файл не открыт";
        return 1;
    }
    for (int num : numbers) {
        outfile << num << " ";
    }
    outfile.close();

    
    ifstream infile("./3.6t.txt");
    int num, sum = 0;

    while(infile >> num){
        sum = sum + num;
    }

    outfile.close();
    
    cout<<sum;

    return 0;
   
}


