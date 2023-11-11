// Lance dos dados y calcule la probabilidad P(la suma de puntos sea ≥ 9 | la cara 6 aparece).
// Probabilidad de que la suma de puntos sea ≥ 9
#include <iostream>
// Libraries that generate random number.
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    // contador1 = veces que sale mayor a 9.
    // contador2 = veces que sale menor a 9.
    // probabilidad 1 = la suma de puntos sea mayor a 9.
    // probabilidad 2 = la suma de puntos sea menor a 9.
    float numeroIntentos = 5, contador1 = 0, contador2 = 0;
    float probabilidad1, probabilidad2;

    // Initializing random number generator.
    srand(time(0));

    for (int i = 0; i < numeroIntentos; i++)
    {
        // Generando el numero del dado.
        int dado1 = 1 + (rand() % 6);
        int dado2 = 1 + (rand() % 6);

        // Mostrando el numero de los dados.
        cout << "Lanzando los dados..." << endl;
        cout << "Dado 1: " << dado1 << endl;
        cout << "Dado 2: " << dado2 << endl;

        // Sumando el resultado de los dados.
        int sumaDados = dado1 + dado2;

        // Comparando el resultado de la suma.
        if (sumaDados == 9 || sumaDados > 9)
        {
            cout << "La suma de ambos dados es igual o mayor a 9. " << endl;
            // Saving the results.
            contador1 = contador1 + 1;
            // cout << "Contador: " <<contador1 <<endl;
        }
        else
        {
            cout << "La suma es menor a 9" << endl;
            // Saving the results.
            // contador2 = contador2 + 1;
        }
    }

    cout << "Probabilidad de que la suma de las caras de dos dados sea >= a 9 dentro de " <<numeroIntentos <<" lanzamientos: ";
    probabilidad1 = contador1 / numeroIntentos;
    cout << probabilidad1;

    return 0;
}