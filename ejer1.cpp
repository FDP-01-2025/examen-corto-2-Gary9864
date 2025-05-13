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
    int cartera=300;
    
    cout << ".\n que tipo de ropa necesitas.\n1 Ropa de hombre.\n2 ropa de mujer .\n3  Mostrar todo"<< endl;
    cin >> n1;

    switch (n1)
    {
    case 1:

    int ropah,ropam;
    cout << " \n1 Camisa Casual: $90 (descuento del 30%).\n2 Pantalon formal: 130 (descuento del 30%).\n3 chaqueta premium: 900 (descuento del 30%) " << endl;
    cin >> ropah;

    switch (ropah)
    {
    case 1:
    cout << "se agrega a tu cartera" << cartera - 90*0.3 << endl;
        
        break;
        case 2:
        cout << "se agrega a tu cartera" << cartera - 130*0.3 << endl;
        break;
        case 3:
        cout << "se agrega a tu cartera" << cartera - 900*0.3 << endl;
        break;
    
    default:
    cout << " no es valido ingresa otro numero" << endl;
        break;
    }
        cout << "Camisa Casual: $90 (descuento del 30%)" << endl;
        cout << "Pantalón Formal: $130 (descuento del 30%)" << endl;
        cout << "Abrigo premium: $250 (descuento del 30%)" << endl;
        break;
        case 2:
        cout << " \n1 Blusa Moderna: $80 (descuento del 20%).\n2 Falda Elegante: $110 (descuento del 20%) .\n3 Abrigo Premium: $250 (descuento del 20%) " << endl;
        cin >> ropam;

        switch (ropam)
        {
        case 1:
            cout << "se agrego a tu cartera "<< cartera - 80*0.2 << endl;
            break;
            case 2:
            cout << "se agrego a tu cartera "<< cartera - 110*0.2 << endl;
            break;
            case 3:
            cout << "se agrego a tu cartera" << cartera -250*0.2 << endl;
            break;
        default:
        cout << "No es valido tu respuesta"<< endl;
            break;
        }


        cout << " Blusa Moderna: $80 (descuento del 20%)" << endl;
        cout << " Falda Elegante: $110 (descuento del 20%) "<< endl;
        cout << "Abrigo Premium: $250 (descuento del 20%)" << endl;
        break;
        case 3:
        int todo;
        cout << "\n1 Camisa Casual: $90 (descuento del 30%).\n2 Pantalon formal: 130 (descuento del 30%).\n3 chaqueta premium: 900 (descuento del 30%) \n4 Blusa Moderna: $80 (descuento del 20%).\n5 Falda Elegante: $110 (descuento del 20%) .\n6 Abrigo Premium: $250 (descuento del 20%)" << endl;
        cin >> todo;

        switch (todo)
        {
        case 1:
            cout << "se agrega a tu cartera" << cartera - 90*0.3 << endl;
        
        break;
        case 2:
        cout << "se agrega a tu cartera" << cartera - 130*0.3 << endl;
        break;
        case 3:
        cout << "se agrega a tu cartera" << cartera - 900*0.3 << endl;
        break;
        case 4:
        cout << "se agrego a tu cartera "<< cartera - 80*0.2 << endl;
        break;
        case 5:
        cout << "se agrego a tu cartera "<< cartera - 110*0.2 << endl;
        break;
        case 6:
        cout << "se agrego a tu cartera" << cartera -250*0.2 << endl;
        break;
        
        
        default:
        cout << "No es valido tu respuesta"<< endl;
            break;
        }
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