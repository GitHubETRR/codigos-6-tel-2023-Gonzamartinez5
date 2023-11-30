//El codigo tiene un solo error y falta agregar un juego más pero es la ultima version en la fecha 23/11


#include <algorithm> // Incluye funciones de algoritmos estándar, como std::sort
#include <cstdlib>   // Incluye funciones para manipulación de cadenas, conversión de tipos y funciones generales de C
#include <ctime>     // Incluye funciones relacionadas con el tiempo, como std::time
#include <iostream>  // Incluye la biblioteca de entrada/salida estándar (std::cout, std::cin, std::endl)
#include <random>    // Incluye funcionalidades para generación de números aleatorios con std::random_device y std::mt19937
#include <string>    // Incluye la clase std::string y funciones relacionadas
#include <vector>    // Incluye la clase std::vector para trabajar con arreglos dinámicos

using namespace std;

void juego_cartas(void);
void reglas_juego(void);
void desempate_PPT(void);

int main() {
  string nombre;
  int reglas = 0;
  int jugar = 1;

  while (jugar == 1) {
    cout << "Bienvenido al juego de las cartas\n";
    cout << "Ingrese su nombre\n";
    cin >> nombre;
    cout << "Si no sabes las reglas del juego presiona 0, si ya las sabes "
            "presiona 1\n";
    cin >> reglas;
    if (reglas == 0) {
      reglas_juego();
    }
    cout << "Listo, empecemos a jugar " << nombre << endl;
    juego_cartas();
    cout << "¿Quieres volver a jugar? (1 para sí, 0 para no): ";
    cin >> jugar;
  }
}

void reglas_juego() {
  cout << "Aqui estan las reglas del juego...\n\n\n";
  cout << "Se le asignaran 3 cartas del 1 al 12 aleatoriamente\n\n";
  cout << "En cada ronda deberas usar una carta, el jugador que tire la carta mas alta gana la ronda y el jugador que gane 2 de las 3 rondas gana la partida\n\nEn caso de empatar, se juega piedra, papel o tijera para definir quien gana la ronda\n\n\n";          
}

void juego_cartas() {

  int tirada, auxiliar1, auxiliar2;
  int ronda1, ronda2, ronda3;
  int ronda1_WH = 0;
  int ronda2_WH = 0;
  int ronda3_WH = 0;
  
  vector<int> cartasDeJuego;

  // Inicio la mezcla de cartas
  for (int i = 1; i <= 12; ++i) {
    cartasDeJuego.push_back(i);           //La función push_back se utiliza para agregar un elemento al final del contenedor. 
  }

  // Mezclo las cartas
  mt19937 generador(time(nullptr));
  shuffle(cartasDeJuego.begin(), cartasDeJuego.end(), generador);

  // cartas del jugador
  int carta1 = cartasDeJuego[0];
  int carta2 = cartasDeJuego[1];
  int carta3 = cartasDeJuego[2];

  //cartas de la IA
  int ronda1_IA = cartasDeJuego[3];
  int ronda2_IA = cartasDeJuego[4];
  int ronda3_IA = cartasDeJuego[5];

  cout << "Tus cartas son:\n";
  cout << "Carta 1: " << carta1 << endl;
  cout << "Carta 2: " << carta2 << endl;
  cout << "Carta 3: " << carta3 << endl;

  cout << "Empezemos con la primera ronda\n";
  cout << "¿Cual carta desear usar (1, 2 o 3)?\n";
  cin >> tirada;
  auxiliar1 = tirada;
  switch (tirada) {
  case 1:
    ronda1 = carta1;
    break;
  case 2:
    ronda1 = carta2;
    break;
  case 3:
    ronda1 = carta3;
    break;
  }
  if (ronda1 > ronda1_IA) {
    cout << "Ganaste la ronda 1\n";
    ronda1_WH = 1;
    cout << "Las carta de la IA era:\n";
    cout << "Carta 1: " << ronda1_IA << endl;
  } else if (ronda1 < ronda1_IA) {
    cout << "Perdiste la ronda 1\n";
    ronda1_WH = 0;
    cout << "La carta de la IA era:\n";
    cout << "Carta 1: " << ronda1_IA << endl;
  } else {
    cout << "Empataste con la IA\n";
  }

  cout << "La ronda 1 terminó\n\n";
  cout << "Empezamos con la segunda ronda\n";

  do {
    cout << "¿Cuál carta deseas usar (1, 2 o 3)? No debes elegir una que ya "
            "has usado.\n";
    cin >> tirada;
    if (tirada == auxiliar1) {
      cout << "Esta carta ya ha sido usada, vuelve a intentarlo\n";
    }
  } while (tirada == auxiliar1);
  auxiliar2 = tirada;
  
  switch (tirada) {
  case 1:
    ronda2 = carta1;
    break;
  case 2:
    ronda2 = carta2;
    break;
  case 3:
    ronda2 = carta3;
    break;
  }
  if (ronda2 > ronda2_IA) {
    cout << "Ganaste la ronda 2\n";
    ronda2_WH = 1;
    cout << "Las carta de la IA era:\n";
    cout << "Carta 2: " << ronda2_IA << endl;
  } else if (ronda2 < ronda2_IA) {
    cout << "Perdiste la ronda 2\n";
    ronda2_WH = 0;
    cout << "La carta de la IA era:\n";
    cout << "Carta 2: " << ronda2_IA << endl;
  } else {
    cout << "Empataste con la IA\n";
  }

  if (ronda2_WH + ronda1_WH == 2){
     cout << "Ganaste la partida\n";
  } else if (ronda2_WH + ronda1_WH == 0){
    cout << "Perdiste la partida\n";
  } else{
    cout << "Termino la segunda ronda\n";
    cout << "Empezamos con la tercer ronda de desempate\n";  
    
    do {
      cout << "¿Cuál carta deseas usar (1, 2 o 3)? No debes elegir una que ya "
              "has usado.\n";
      cin >> tirada;
      if (tirada == auxiliar1 || tirada == auxiliar2) {
        cout << "Esta carta ya ha sido usada, vuelve a intentarlo\n";
      }
    } while (tirada == auxiliar1 || tirada == auxiliar2);

    switch (tirada) {
    case 1:
      ronda3 = carta1;
      break;
    case 2:
      ronda3 = carta2;
      break;
    case 3:
      ronda3 = carta3;
      break;
    }
    if (ronda3 > ronda3_IA) {
      cout << "Ganaste la ronda 3\n";
      ronda3_WH = 1;
      cout << "Las carta de la IA era:\n";
      cout << "Carta 3: " << ronda3_IA << endl;
    } else if (ronda3 < ronda3_IA) {
      cout << "Perdiste la ronda 3\n";
      ronda3_WH = 0;
      cout << "La carta de la IA era:\n";
      cout << "Carta 3: " << ronda3_IA << endl;
    } else {
      cout << "Empataste con la IA\n";
    }
  }

  if (ronda3_WH == 1){
    cout << "Ganaste la partida\n";
  }else{
    cout << "Perdiste la partida\n";
  }

  // Imprimir las cartas de la IA
  cout << "Las cartas de la IA eran:\n";
  cout << "Carta 1: " << ronda1_IA << endl;
  cout << "Carta 2: " << ronda2_IA << endl;
  cout << "Carta 3: " << ronda3_IA << endl;
}
