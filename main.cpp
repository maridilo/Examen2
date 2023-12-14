#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;



struct Estudiante{
    char nombre[50];
    int edad;
    float promedio;
};
struct Asistencia{
    char fecha[50];
    int materia;
    float estado;
    int faltas;
    int retardos;
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

void mostrarAsistencia(struct Asistencia asistencia){
    printf("Fecha: %s\nMateria: %d\nEstado: %.2f\n",
           asistencia.fecha, asistencia.materia, asistencia.estado);
}
void registrarAsistencia(struct Asistencia *asistencia){
    printf("Fecha: ");
    scanf("%s", asistencia->fecha);
    printf("Materia: ");
    scanf("%d", &asistencia->materia);
    printf("Estado: ");
    scanf("%f", &asistencia->estado);
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
