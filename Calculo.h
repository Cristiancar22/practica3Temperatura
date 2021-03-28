/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculo.h
 * Author: Cristian
 *
 * Created on March 27, 2021, 10:37 AM
 */

#ifndef MATRIZ_H
#define MATRIZ_H
const int MARCA_FIN = -273;

void ValoresExtremosAnuales(float M[][4], int &dia_mas_caluroso, int &dia_menos_caluroso,int &dia_mayor_amplitud_term);
void ExtraeDatos(float M[][4], int num_colum, float A[][31]);
float MediaAjustado(float v[], int n);
void MaxMinVector(float v[],int n, int &max, int &min);
void MaxMinVector(float v[],int n, int &max, int &min);
void ValoresExtremos(float A[][31], int &max, int &min);

#endif /* CALCULO_H */

