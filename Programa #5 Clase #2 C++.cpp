//Programa #5 codigo de area:
#include <iostream>

using namespace std;

int main() {
    int pais;

    cout << "Ingrese el n�mero del pa�s:\n";
    cout << "1. Belice\n";
    cout << "2. Costa Rica\n";
    cout << "3. El Salvador\n";
    cout << "4. Guatemala\n";
    cout << "5. Honduras\n";
    cout << "6. Nicaragua\n";
    cout << "7. Panam�\n";
    cout << "> ";
    cin >> pais;

    switch(pais) {
        case 1:
            cout << "El c�digo de �rea de Belice es +501.\n";
            break;
        case 2:
            cout << "El c�digo de �rea de Costa Rica es +506.\n";
            break;
        case 3:
            cout << "El c�digo de �rea de El Salvador es +503.\n";
            break;
        case 4:
            cout << "El c�digo de �rea de Guatemala es +502.\n";
            break;
        case 5:
            cout << "El c�digo de �rea de Honduras es +504.\n";
            break;
        case 6:
            cout << "El c�digo de �rea de Nicaragua es +505.\n";
            break;
        case 7:
            cout << "El c�digo de �rea de Panam� es +507.\n";
            break;
        default:
            cout << "El n�mero de pa�s ingresado no es v�lido.\n";
            break;
    }

    return 0;
} 
