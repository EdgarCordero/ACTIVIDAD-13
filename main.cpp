#include <iostream>
#include "array.h"

using namespace std;

int main()
{
    Array<string> a;

    a.insertAtEnd("EDGAR");
    a.insertAtEnd("CORDERO");

    a.insertAtStart("MUNDO");
    a.insertAtStart("HOLA");

    for (size_t i = 0; i < a.sizeofArray(); i++){
        cout << a[i] << endl;
    }
    cout << endl;

    a.insertar("HELLO", 2);

    for (size_t i = 0; i < a.sizeofArray(); i++){
        cout << a[i] << endl;
    }
    cout << endl;

    a.eliminar_inicio();
    a.eliminar_final();
    a.eliminar(1);

    for (size_t i = 0; i < a.sizeofArray(); i++){
        cout << a[i] << endl;
    }
    cout << endl;

    return 0;
}
