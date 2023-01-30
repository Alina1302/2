#pragma once
#include <iostream>
#include "../Library/array_functions.h"
using namespace std;

int Qua_Neg(int mas[], int size){
    int qua_n=0;
    for (int i=0; i<size; i++){
        if (mas[i]<0){
            qua_n++;
        }
    }
    return qua_n;
}

int Qua_Pos(int mas[], int size){
    int qua_p=0;
    for (int i=0; i<size; i++){
        if (mas[i]>0){
            qua_p++;
        }
    }
    return qua_p;
}

int Qua_Zero(int mas[], int size){
    int qua_z=0;
    for (int i=0; i<size; i++){
        if (mas[i]==0){
            qua_z++;
        }
    }
    return qua_z;
}

int Array_Neg (const int arr[], int size, int num_elements){
    int* mas = new int [num_elements];
    for (int i=0, j=0; i<size; i++){
        if (arr[i]<0){
            mas[j]=arr[i];
            j++;
        }
    }
    PrintArray(mas, num_elements);
}

int Array_Pos (const int arr[], int size, int num_elements){
    int* mas = new int [num_elements];
    for (int i=0, j=0; i<size; i++){
        if (arr[i]>0){
            mas[j]=arr[i];
            j++;
        }
    }
    PrintArray(mas, num_elements);
}

int Array_Zero (const int arr[], int size, int num_elements){
    int* mas = new int [num_elements];
    for (int i=0, j=0; i<size; i++){
        if (arr[i]==0){
            mas[j]=arr[i];
            j++;
        }
    }
    PrintArray(mas, num_elements);
}