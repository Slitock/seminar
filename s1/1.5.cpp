#include <iostream>

using namespace std;

int main(){
    bool lamp,curtains,sun;

    cout<<"Введите ссотояние лампы, штор и солнца, если 1 1 1 озночает, что лампа включена, шторы открыты и светит солнце"<<endl;
    cin>> lamp>>curtains>>sun;
    int i = lamp + curtains + sun;
    if (lamp == 1){
        cout<<"В комнате светло"<<endl;
    }
    else if (i>=2){
        cout<<"В комнате светло"<<endl;
    }
    else{
        cout<<"В комнате темно"<<endl;
    }
    return 0;
}
