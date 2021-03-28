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

#ifndef CALCULO_H
#define CALCULO_H
const int MARCA_FIN = -1;

void ValoresExtremosAnuales(float M[][], int &dia_mas_caluroso, int &dia_menos_caluroso,int &dia_mayor_amplitud_term);
void ExtraeDatos(float M[][], int num_colum, float A[][]);
float MediaAjustado(float v[], int n);
void MaxMinVector(float v[],int n, int &max, int &min);
void MaxMinVector(float v[],int n, int &max, int &min);
void ValoresExtremos(float A[][], int &max, int &min);

#endif /* CALCULO_H */

