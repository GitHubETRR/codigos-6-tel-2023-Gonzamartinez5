#include <stdio.h>
#include <stdlib.h>
//F
struct Persona {
  char nombre[50];
  char nacionalidad[50];
  int edad;
  int compras;
};

int main() {
  int dato;
  struct Persona cliente1, cliente2, cliente3;
  strcpy(cliente1.nombre, "Gabriel Martinez");
  strcpy(cliente1.nacionalidad, "Argentina");
  cliente1.edad = 51;
  cliente1.compras = 31;
  strcpy (cliente2.nombre, "Esteban Berardi");
  strcpy (cliente2.nacionalidad, "Alemana");
  cliente2.edad = 22;
  cliente2.compras = 19;
  strcpy (cliente3.nombre, "Marcelo Freitag");
  strcpy(cliente3.nacionalidad, "Chilena");
  cliente3.edad = 45;
  cliente3.compras =27;
  

  struct Persona *puntero_1 = &cliente1;
  struct Persona *puntero_2= &cliente2;
  struct Persona *puntero_3= &cliente3;

  printf("Indique que numero de cliente desea ver\n");
  printf("Hay 3 cliente en el sistema\n");
  scanf("%d", &dato);
  
   if (dato==1) {
     printf("Nombre: %s\n", puntero_1->nombre);
     printf("Nacionalidad: %s\n", puntero_1->nacionalidad);
     printf("Edad: %d\n", puntero_1->edad);
     printf("Compras realizadas: %d\n", puntero_1->compras);
  }
  else if (dato==2) {
     printf("Nombre: %s\n", puntero_2->nombre);
     printf("Nacionalidad: %s\n", puntero_2->nacionalidad);
     printf("Edad: %d\n", puntero_2->edad);
     printf("Compras realizadas: %d\n", puntero_2->compras);
  }
  else if (dato==3) {
     printf("Nombre: %s\n", puntero_3->nombre);
     printf("Nacionalidad: %s\n", puntero_3->nacionalidad);
     printf("Edad: %d\n", puntero_3->edad);
     printf("Compras realizadas: %d\n", puntero_3->compras);
    
  }
  else {
    printf("Ese numero de cliente no existe/n");
  }              
  return 0;
}
