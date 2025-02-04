#include <iostream>
#include <locale.h> 
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "El numero ingresado es: " << num << endl;

    for (int i = 0; i < num; i++) {
        cout << "Hola Mundo!" << endl;
    }
    system("pause");
    return 0;
}
