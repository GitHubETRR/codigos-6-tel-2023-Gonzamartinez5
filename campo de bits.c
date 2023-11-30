#include <stdio.h>
#include <stdio_ext.h>
//F
struct estadoiluminacion {
  unsigned int luzprincipal : 1; 
  unsigned int luzauxiliar : 1;
  unsigned int intensidadluzprincipal : 4; 
  unsigned int intensidadluzauxiliar : 4;  
}estado;

int main(void) {
  char luzP;
  char luzAX;
  int luzPI;
  int luzAI;
  
  printf("Bienvenido al sistema de iluminacion del hogar\nPor favor indique los siguientes factores\n");

  printf("------------------------------------------\n");
  printf("Ingrese el estado de la luzprincipal\n");
  printf("-E es encendida -A es apagada\n");
  scanf("%c", &luzP);
  __fpurge(stdin);
  
  if (luzP=='E' || luzP=='e') {
    estado.luzprincipal =  1;
    printf("Luz principal encendida\n");
  } else {
    estado.luzprincipal =  0;
    printf("Luz principal apagada\n");
  }
  
  printf("------------------------------------------\n");
  printf("Ingrese el estado de la luz auxiliar\n");
  printf("-E es encendida -A es apagada\n");
  scanf("%c", &luzAX);
  __fpurge(stdin);
  
  if (luzAX=='E'|| luzAX=='e')  {               
    estado.luzauxiliar =  1;
    printf("Luz auxiliar encendida\n");
  } else { 
    estado.luzauxiliar =  0;
    printf("Luz auxiliar apagada\n");
  }
          
  
  printf("------------------------------------------\n");
  printf("Ingrese la intensidad de la luz principal del 1 al 10\n");
  scanf("%d", &luzPI);
  __fpurge(stdin);

  printf("Intensidad de Luz principal: ");
  if (luzPI >= 0 && luzPI<= 3) {
     printf("BAJA\n");
     estado.intensidadluzprincipal= luzPI;
  }
  else if (luzPI >= 3&& luzPI <= 7) {
    printf("MEDIA\n");
    estado.intensidadluzprincipal= luzPI;
  }
  else if (luzPI >= 7&& luzPI <= 10) {
    printf("ALTA\n");
    estado.intensidadluzprincipal= luzPI;
  }
  else {
    printf("El número está fuera del rango\n");
    luzPI=0;
    estado.intensidadluzprincipal= luzPI;
  }              
  
  printf("------------------------------------------\n");
  printf("Ingrese la intensidad de la luz auxiliar del 1 al 10\n");
  scanf("%d", &luzAI);
  __fpurge(stdin);
  printf("Intensidad de Luz auxiliar: ");
  if (luzAI >= 0 && luzAI<= 3) {
     printf("BAJA\n");
     estado.intensidadluzauxiliar= luzAI;
  }
  else if (luzAI >= 3&& luzAI <= 7) {
    printf("MEDIA\n");
    estado.intensidadluzauxiliar= luzAI;
  }
  else if (luzAI >= 7&& luzAI <= 10) {
    printf("ALTA\n");
    estado.intensidadluzauxiliar = luzAI;
  }
  else {
    printf("El número está fuera del rango\n");
    luzAI=0;
    estado.intensidadluzauxiliar= luzAI;
  }              
  
  printf("------------------------------------------\n");
  
  printf("Lista técnica:\n");
  
  printf("Luz principal: %d\n", estado.luzprincipal);
  printf("Luz auxiliar: %d\n", estado.luzauxiliar);
  printf("Intensidad luz principal: %d\n", estado.intensidadluzprincipal);
  printf("Intensidad luz principal: %d\n", estado.intensidadluzauxiliar);
  return 0;
}
