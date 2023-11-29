#include <iostream>    
using namespace std;    // no tengo que poner std


// cin es scanf 
// cout es printf
// c++ se maneja con flujos 

/*convierte un string en un stream, stream es un conjunto de strings.

Entrada (istream): Proporciona funcionalidades para leer datos desde una fuente, como el teclado o un archivo.

Salida (ostream): Proporciona funcionalidades para escribir datos en un destino, como la pantalla o un archivo.

Entrada/Salida (iostream): Engloba tanto la funcionalidad de entrada como la de salida. 
La biblioteca iostream incluye dos clases principales: 
istream y ostream, y define dos tipos de objetos principales: cin (entrada estándar) y cout (salida estándar).

*/      

int main() {
  float num1; 
  float num2;
  char operador;

  cout << "Ingrese un número: ";      // std::cout se utiliza para mostrar el número en la salida estándar (pantalla)
  cin >> num1;                        // std::cin  se utiliza para leer un número desde la entrada estándar (teclado)

  cout << "Ingrese un operador (+, -, *, /): ";
  cin >> operador;

  cout << "Ingrese otro número: ";
  cin >> num2;

  float resultado;

  switch (operador) {
    case '+':
      resultado = num1 + num2;
    break;
    case '-':
      resultado = num1 - num2;
    break;
    case '*':
      resultado = num1 * num2;
    break;
    case '/':
      resultado = num1 / num2;
    break;
    default:
      cerr << "Operador no válido." << endl;  // std::cerr está diseñado específicamente para imprimir mensajes de error
                                                              // Flush (std::endl): Vacía el búfer de salida, asegurándose 
                                                              // de que cualquier contenido pendiente se escriba de inmediato. 
    return 1;  // Salir con código de error
    }

  cout << "Resultado: " << resultado << endl;

  return 0;
}
