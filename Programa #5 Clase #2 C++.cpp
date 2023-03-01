//Programa #5 codigo de area:
#include <iostream>

using namespace std;

int main() {
    int pais;

    cout << "Ingrese el número del país:\n";
    cout << "1. Belice\n";
    cout << "2. Costa Rica\n";
    cout << "3. El Salvador\n";
    cout << "4. Guatemala\n";
    cout << "5. Honduras\n";
    cout << "6. Nicaragua\n";
    cout << "7. Panamá\n";
    cout << "> ";
    cin >> pais;

    switch(pais) {
        case 1:
            cout << "El código de área de Belice es +501.\n";
            break;
        case 2:
            cout << "El código de área de Costa Rica es +506.\n";
            break;
        case 3:
            cout << "El código de área de El Salvador es +503.\n";
            break;
        case 4:
            cout << "El código de área de Guatemala es +502.\n";
            break;
        case 5:
            cout << "El código de área de Honduras es +504.\n";
            break;
        case 6:
            cout << "El código de área de Nicaragua es +505.\n";
            break;
        case 7:
            cout << "El código de área de Panamá es +507.\n";
            break;
        default:
            cout << "El número de país ingresado no es válido.\n";
            break;
    }

    return 0;
} 
