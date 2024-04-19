#include <iostream>

using namespace std;

int main()
{
    int numberBacteria;
    int numberDrop;
    int powerDrop = 10;
    bool condition = false;
    do {
        cout << "Введите количество бактерий: ";
        cin >> numberBacteria;
        cin.ignore(100, '\n');
        cout << "Введите количество антибиотика: ";
        cin >> numberDrop;
        cin.ignore(100, '\n');
        //cout << "Введите силу антибиотика: ";
        //cin >> powerDrop;
        //cin.ignore(100, '\n');
        if (numberBacteria < 1 || numberDrop < 1 || powerDrop < 1) {
            cout << "Не корретный ввод данных!!!\n";
            condition = true;
        }else condition = false;
    } while (condition);
    
    for (int hour = 1; numberBacteria > 0 && powerDrop > 0; hour++) {
        numberBacteria *= 2;
        numberBacteria -= powerDrop * numberDrop;
        powerDrop--;
        if (numberBacteria < 0) numberBacteria = 0;
        cout << "После " << hour << " часа бактерий осталось " << numberBacteria << endl;
        if (powerDrop == 0) cout << "Мы все умрём!\n";
    }

    
    
    
    
    
    
    
    
    
    
    return 0;
}