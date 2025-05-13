#include <iostream>
using namespace std;

int main(){
    int n;
    
    cout << ".\n1 tu edad esta entre 0 y 10 .\n2 tu edad esta entre 11 y 15 .\n3  tu edad esta entre 16 y 60 .\n4 tu edad es de 61 en adelante "<< endl;
    cin >> n;

    switch (n)
    {
    case 1:
    cout << "tu talla sugerida es 8. " << (n >= 0 && n<=10)<< endl;
    break;
    case 2:
    cout << "Tu talla es 12. "<< (n >= 11 && n <=15) << endl;
    break;
    case 3:
    cout << "tu talla es 16 "<< ( n>= 16 && n<=60)<< endl;
    break;
    case 4:
    cout << "tu talla es 18. "<< endl;
    break;
    


    
    }
    int n1;
    
    cout << ".\n que tipo de ropa necesitas.\n1 Ropa de hombre.\n2 ropa de mujer .\n3  Mostrar todo"<< endl;
    cin >> n1;

    switch (n1)
    {
    case 1:
        cout << "Camisa Casual: $90 (descuento del 30%)" << endl;
        cout << "Pantalón Formal: $130 (descuento del 30%)" << endl;
        cout << "Pantalón Formal: $130 (descuento del 30%)" << endl;
        break;
        case 2:
        cout << " Blusa Moderna: $80 (descuento del 20%)" << endl;
        cout << " Falda Elegante: $110 (descuento del 20%) "<< endl;
        cout << "Abrigo Premium: $250 (descuento del 20%)" << endl;
        break;
        case 3:
        cout << "Camisa Casual: $90 (descuento del 30%)" << endl;
        cout << "Pantalón Formal: $130 (descuento del 30%)" << endl;
        cout << "Pantalón Formal: $130 (descuento del 30%)" << endl;
        cout << " Blusa Moderna: $80 (descuento del 20%)" << endl;
        cout << " Falda Elegante: $110 (descuento del 20%) "<< endl;
        cout << "Abrigo Premium: $250 (descuento del 20%)" << endl;
        break;
        
    
    
    }

    







    return 0;
}