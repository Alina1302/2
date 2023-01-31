#pragma once
#include <iostream>
#include "../LIBRARY/array_functions.h"
#include "../LIBRARY//functions_for_work_with_D_array.h"
using namespace std;

int DeleteSimpleNumbers (int mas[], int size){
    int simple [25]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int k=0;
    for (int j=0; j<size; j++) {
        for (int i = 0; i < 25; i++){
            if (mas[j]==simple [i]){
                DeleteElement(mas, size, j);
                k++;
            }
        }
    }
    return mas [size-k];
}