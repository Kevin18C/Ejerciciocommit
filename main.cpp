#include <iostream>
#include <fstream>
#include <filesystem>
#include <Windows.h>
#include "archivos.h"
#include "funciones.cpp"


using namespace std;

int main(){
    crearArchivos();
    contarArchivos();

    return 0;
}
