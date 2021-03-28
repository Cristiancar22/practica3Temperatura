#include <iostream>

using namespace std;


const int MARCA_FIN = -273;
        
void ValoresExtremosAnuales(float M[][4], int &dia_mas_caluroso, int &dia_menos_caluroso,int &dia_mayor_amplitud_term){
    int indicemax = 0;
    int indicemin = 0;
    int indiceamplitud = 0;
    float contenedormax = M[0][2];
    float contenedormin = M[0][3];
    float contenedoramplitud = M[0][2] - M[0][3];
    
    for (int i = 1; i < 366; i++){
        if(contenedormax < M[i][2]){
            contenedormax = M[i][2];
            indicemax = i;
        }
        if (contenedormin > M[i][3]){
            contenedormin = M[i][3];
            indicemin = i;
        }
        if(contenedoramplitud < M[i][2] - M[i][3]){
            contenedoramplitud = M[i][2] - M[i][3];
            indiceamplitud = i;
        }
    
    }
    
    dia_mas_caluroso = indicemax;
    dia_menos_caluroso = indicemin;
    dia_mayor_amplitud_term = indiceamplitud;
}

void ExtraeDatos(float M[][4], int num_colum, float A[][31]){
    if(num_colum == 2 || num_colum == 3){
        for(int i = 0; i < 366; i++){
            for(int j = 0; j < 12; j++){
                for(int k = 0; k < 31; k++){
                    if(j == M[i][1]){
                        A[j][k] = M[i][num_colum];
                    }
                    else
                        A[j][k] = MARCA_FIN;
                }
            }
        }
    }
}

void MaxMinVector(float v[],int n, int &max, int &min){
    float alm = 0;
    int pos = 0;
    for(int i = 0; i < n; i++){
        if(alm < v[i]){
            alm = v[i];
            pos = i;
        }
    }
    max = pos;
    
    for(int i = 0; i < n; i++){
        if(alm > v[i]){
            alm = v[i];
            pos = i;
        }
    }
    min = pos;
}

float MediaAjustado(float v[], int n){
    int max, min;
    float media = 0;
    MaxMinVector(v, n, max, min);
    for(int i = 0; i < n; i++){
        if(i != max || i != min){
            media += v[i];
        }
    }
    media /= n - 2;
    return media;
}

float MediaMensualAjustada(float A[][31], int mes){
    int max, min;
    int media = 0;
    int n = 0; 
    MaxMinVector(A[mes], 31, max, min);
    for(int i = 0; i < 31; i++){
        
        if(A[mes][i] != MARCA_FIN){
            media += A[mes][i];
            n++;
            
        }
    media -= A[mes][max] + A[mes][min];
    media /= n - 2;
    
    }
    return media;
}

void ValoresExtremos(float A[][31], int mes, int &max, int &min ){
    float cont_max = A[mes][0];
    float cont_min = A[mes][0];
    for(int i = 1; i < 31; i++){
        if(A[mes][i] != MARCA_FIN){
            if(cont_max < A[mes][i]){
                cont_max = A[mes][i];
                max = i;
            }
            else
                if(cont_min > A[mes][i]){
                    cont_min = A[mes][i];
                    min = i;
                }
        }
    }
}






