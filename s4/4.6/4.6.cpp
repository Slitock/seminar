#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>  

using namespace std;

vector<vector<double>> readMatrix(const string& filename) {
    ifstream file(filename);
    vector<vector<double>> matrix;
    string line;
    
    while (getline(file, line)) {
        vector<double> row;
        stringstream ss(line);
        double num;
        
        while (ss >> num) {
            row.push_back(num);
        }
        
        if (!row.empty()) {
            matrix.push_back(row);
        }
    }
    
    return matrix;
}

int main() {
    auto sellers_items = readMatrix("./4.6_A.txt");  
    auto items_prices = readMatrix("./4.6_B.txt");       
    if (sellers_items.empty() || items_prices.empty()) {
        cout << "Ошибка чтения файлов!" << endl;
        return 1;
    }
    
    int sellers = sellers_items.size();
    int items = sellers_items[0].size();
    
    if (items != items_prices.size() || items_prices[0].size() != 2) {
        cout << "Неверные размеры матриц!" << endl;
        return 1;
    }

    vector<vector<double>> results(sellers, vector<double>(2, 0));

    for (int i = 0; i < sellers; i++) {               
        for (int j = 0; j < items; j++) {            
            results[i][0] += sellers_items[i][j] * items_prices[j][0];
            results[i][1] += sellers_items[i][j] * items_prices[j][1];
        }
    }

    cout << "Результаты по продавцам:" << endl;
    for (int i = 0; i < sellers; i++) {
        cout << "Продавец " << i + 1 << ": ";
        cout << "Выручка = " << results[i][0] << ", ";
        cout << "Комиссионные = " << results[i][1] << endl;
    }
    
    double total_money = 0, total_commission = 0;
    int best_seller = 0, worst_seller = 0;
    int best_comm = 0, worst_comm = 0;
    
    for (int i = 0; i < sellers; i++) {
        total_money += results[i][0];
        total_commission += results[i][1];
        
        if (results[i][0] > results[best_seller][0]) best_seller = i;
        if (results[i][0] < results[worst_seller][0]) worst_seller = i;
        if (results[i][1] > results[best_comm][1]) best_comm = i;
        if (results[i][1] < results[worst_comm][1]) worst_comm = i;
    }
    
    cout << "\n=== ИТОГИ ===" << endl;
    cout << "1. Лучший по выручке: продавец " << best_seller + 1 
         << " (" << results[best_seller][0] << ")" << endl;
    cout << "   Худший по выручке: продавец " << worst_seller + 1 
         << " (" << results[worst_seller][0] << ")" << endl;
    
    cout << "2. Больше комиссионных: продавец " << best_comm + 1 
         << " (" << results[best_comm][1] << ")" << endl;
    cout << "   Меньше комиссионных: продавец " << worst_comm + 1 
         << " (" << results[worst_comm][1] << ")" << endl;
    
    cout << "3. Общая выручка: " << total_money << endl;
    cout << "4. Всего комиссионных: " << total_commission << endl;
    cout << "5. Общая сумма через руки: " << total_money + total_commission << endl;
    
    return 0;
}
