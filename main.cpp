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
void mostrar (estudiante estudiante) {
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}

void guardar (estudiante estudiante) {
    ofstream archivo;
    archivo.open("estudiantes.txt", ios::app);
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo." << endl;
        exit(1);
    }
    archivo << estudiante.nombre << endl;
    archivo << estudiante.edad << endl;
    archivo << estudiante.promedio << endl;
    archivo.close();
}

void eliminarEstudiante (string nombre) {
    ifstream archivo;
    ofstream temporal;
    string linea;
    archivo.open("estudiantes.txt", ios::in);
    temporal.open("temporal.txt", ios::out);
    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo." << endl;
        exit(1);
    }
    while (!archivo.eof()) {
        getline(archivo, linea);
        if (linea.compare(nombre) != 0) {
            temporal << linea << endl;
        }
    }
    archivo.close();
    temporal.close();
    remove("estudiantes.txt");
    rename("temporal.txt", "estudiantes.txt");
}


int main() {
    estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;
    mostrar(estudiante1);
    guardar(estudiante1);
    estudiante estudiante2;
    estudiante2.nombre = "Maria";
    estudiante2.edad = 21;
    estudiante2.promedio = 9.0;
    mostrar(estudiante2);
    guardar(estudiante2);
    eliminarEstudiante("Juan");
    return 0;
}


