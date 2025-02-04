#include <iostream>
#include <locale.h> 
using namespace std;

int main() {
    int num, a, b, resultado;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "El numero ingresado es: " << num << endl;
    system("cls"); 

    for (int i = 0; i < num; i++) {
        cout << "Hola Mundo!" << endl;
    }
    system("pause");

    cout << "ingrese un numero:"<<endl;
    cin>>a;
    cout << "ingrese otro numero:"<<endl;
    cin>>b;
    resultado=a+b;  
    cout << "El resultado de la suma es: " << resultado << endl;
    return 0;
}
