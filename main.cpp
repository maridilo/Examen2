#include<cstdio>
#include<cstdlib>
#include<cstring>

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
void guardarEstudiante(struct Estudiante *estudiante){
    printf("Nombre: ");
    scanf("%s", estudiante->nombre);
    printf("Edad: ");
    scanf("%d", &estudiante->edad);
    printf("Promedio: ");
    scanf("%f", &estudiante->promedio);
}
void eliminarEstudiante(struct Estudiante *estudiante){
    strcpy(estudiante->nombre, "");
    estudiante->edad = 0;
    estudiante->promedio = 0.0;
}

int main() {
    // Declaracion de variables
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;
    // Imprimir datos del estudiante
    mostrarEstudiante(estudiante1);
    return 0;
}
