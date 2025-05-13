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
    







    return 0;
}