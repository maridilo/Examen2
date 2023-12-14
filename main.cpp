#include<cstdio>
#include<cstdlib>

using namespace std;

struct Estudiante{
    char nombre[50];
    int edad;
    float promedio;
};

void mostrarEstudiante(struct Estudiante estudiante){
    printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n",
           estudiante.nombre, estudiante.edad, estudiante.promedio);
}

void mostrarEstudiantePuntero(struct Estudiante *estudiante){
    printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n",
           estudiante->nombre, estudiante->edad, estudiante->promedio);
}

