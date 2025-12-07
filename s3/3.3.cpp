#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    ifstream file("./3.3t.txt");
    if (!file.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }
    
    string letters;
    getline(file, letters);
    file.close();
    
    cout << "Исходная строка: " << letters << endl;
    
    string only_letters;
    for (char c : letters) {
        if (isalpha(c)) {  
            only_letters += tolower(c);
        }
    }
    
    if (only_letters.length() < 30) {
        cout << "В файле меньше 30 букв!" << endl;
        return 1;
    }
    
    if (only_letters.length() > 30) {
        only_letters = only_letters.substr(0, 30);
    }
    
    sort(only_letters.begin(), only_letters.end());
    
    cout << "30 отсортированных букв: " << only_letters << endl;
    
    return 0;
}
