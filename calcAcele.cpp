#include <iostream>
using namespace std;

int main() {
    double velocidad_inicial, velocidad_final, tiempo, aceleracion;

    // Solicitar al usuario los valores de velocidad inicial, velocidad final y tiempo
    cout << "Ingresa la velocidad inicial: ";
    cin >> velocidad_inicial;

    cout << "Ingresa la velocidad final: ";
    cin >> velocidad_final;

    cout << "Ingresa el tiempo: ";
    cin >> tiempo;

    // Calcular la aceleración utilizando la fórmula dada
    aceleracion = (velocidad_final - velocidad_inicial) / tiempo;

    // Mostrar el resultado en pantalla
    cout << "La aceleración del vehículo es: " << aceleracion << " m/s^2" << endl;

    return 0;
}
