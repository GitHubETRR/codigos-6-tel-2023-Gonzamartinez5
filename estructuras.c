#include <stdio.h>
#define LIM 12
//F
typedef struct alumnos {
  char nombre [LIM];
  char apellido [LIM];
  unsigned int edad;
  unsigned int promedio;
  unsigned int hermanos;
} alumno;

int main(void) {
  int eleccion;
  alumno alumno1,alumno2,alumno3,alumno4;
  
  printf("-------------------------------------------\n");
  printf("Primer alumno\n");
  printf("Ingrese el nombre del primer alumno\n");
  scanf("%s", alumno1.nombre);
  printf("Ingrese el apellido del primer alumno\n");
  scanf("%s", alumno1.apellido);
  printf("Ingrese la edad del primer alumno\n");
  scanf("%d", &alumno1.edad);
  printf("Ingrese el promedio del primer alumno\n");
  scanf("%d", &alumno1.promedio);
  printf("Ingrese la cantidad de hermanos del primer alumno\n");
  scanf("%d", &alumno1.hermanos);
  printf("-------------------------------------------\n"); 
  printf("Segundo alumno\n");
  printf("Ingrese el nombre del segundo alumno\n");
  scanf("%s", alumno2.nombre);
  printf("Ingrese el apellido del segundo alumno\n");
  scanf("%s", alumno2.apellido);
  printf("Ingrese la edad del segundo alumno\n");
  scanf("%d", &alumno2.edad);
  printf("Ingrese el promedio del segundo alumno\n");
  scanf("%d", &alumno2.promedio);
  printf("Ingrese la cantidad de hermanos del segundo alumno\n");
  scanf("%d", &alumno2.hermanos);
  printf("-------------------------------------------\n");
  printf("Tercer alumno\n");
  printf("Ingrese el nombre del tercer alumno\n");
  scanf("%s", alumno3.nombre);
  printf("Ingrese el apellido del tercer alumno\n");
  scanf("%s", alumno3.apellido);
  printf("Ingrese la edad del tercer alumno\n");
  scanf("%d", &alumno3.edad);
  printf("Ingrese el promedio del tercer alumno\n");
  scanf("%d", &alumno3.promedio);
  printf("Ingrese la cantidad de hermanos del tercer alumno\n");
  scanf("%d", &alumno3.hermanos);
  printf("-------------------------------------------\n");
  printf("Cuarto alumno\n");
  printf("Ingrese el nombre del cuarto alumno\n");
  scanf("%s", alumno4.nombre);
  printf("Ingrese el apellido del cuarto alumno\n");
  scanf("%s", alumno4.apellido);
  printf("Ingrese la edad del cuarto alumno\n");
  scanf("%d", &alumno4.edad);
  printf("Ingrese el promedio del cuarto alumno\n");
  scanf("%d", &alumno4.promedio);
  printf("Ingrese la cantidad de hermanos del cuarto alumno\n");
  scanf("%d", &alumno4.hermanos);
  
  printf("Ingrese el numero de alumno el cual desea ver lo datos\n");
  scanf("%d", &eleccion);
  
  if (eleccion == 1) {
    printf("Alumno 1\n");
    printf("Nombre: %s\n", alumno1.nombre);
  }
  else if (eleccion == 2) {
    printf("Alumno 2\n");
    printf("Nombre: %s\n", alumno2.nombre);
  }
  else if (eleccion == 3) {
    printf("Alumno 3\n");
    printf("Nombre: %s\n", alumno3.nombre);
  }
  else if (eleccion == 4) {
    printf("Alumno 4\n");
    printf("Nombre: %s\n", alumno4.nombre);
  }
  else {
    printf("Opción no válida");
  }
  
  switch (eleccion){
    case 1:
      printf("Apellido: %s\n", alumno1.apellido);
      printf("Edad: %d\n", alumno1.edad);
      printf("Cantidad de hermanos: %d\n", alumno1.hermanos);
      printf("Promedio: %d\n", alumno1.promedio);
      break;
    case 2:
      printf("Apellido: %s\n", alumno2.apellido);
      printf("Edad: %d\n", alumno2.edad);
      printf("Cantidad de hermanos: %d\n", alumno2.hermanos);
      printf("Promedio: %d\n", alumno2.promedio);
      break;
    case 3:
      printf("Apellido: %s\n", alumno3.apellido);
      printf("Edad: %d\n", alumno3.edad);
      printf("Cantidad de hermanos: %d\n", alumno3.hermanos);
      printf("Promedio: %d\n", alumno3.promedio); 
      break;
    case 4:
      printf("Apellido: %s\n", alumno4.apellido);
      printf("Edad: %d\n", alumno4.edad);
      printf("Cantidad de hermanos: %d\n", alumno4.hermanos);
      printf("Promedio: %d\n", alumno4.promedio);
      break;
    default:
      printf("no hay registros acerca de esa persona");
      break;
  }
}
