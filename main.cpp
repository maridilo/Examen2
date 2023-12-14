#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<cstdio>


using namespace std;

struct estudiante {
    string nombre;
    int edad;
    float promedio;
};
void mostrar (estudiante estudiante);

mostrarEstudiante(estudiante estudiante){
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}

