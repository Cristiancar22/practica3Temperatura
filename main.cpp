/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "matriz.h"
#include <iomanip>
using namespace std;

const int FILAS_BASE = 366;
const int COLS_BASE = 4;

int main(){
    float M[FILAS_BASE][COLS_BASE];

    // cargar valores usando redirección de entrada
    for(int i = 0; i < FILAS_BASE; i++){
        for(int j = 0; j < COLS_BASE; j++){
            cin >> M[i][j];
        }
    }    
    
    // muestro los datos leídos - OPCION 1
    
    for (int i = 0; i < FILAS_BASE; i++) {
        cout << endl;
        for (int j = 0; j < COLS_BASE; j++)
            cout << M[i][j] << "\t";
        
    }
    cout << endl;

    
}
