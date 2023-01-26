//Функция добавления элемента в конец массива.
//■ Функция вставки элемента по указанному индексу.
//■ Функция удаления элемента по указанному индексу.

#pragma once
#include <iostream>
using namespace std;
int Add (int arr[], int size, int element_for_add){
    int mas[size+1];
    for (int i=0; i<=size+1; i++){
        if (i!=size+1) {
            mas[i] = arr[i];
        }else{
            mas[size]=element_for_add;
        }
    }
    for (int i=0; i<size+1; ++i){
        cout << mas [i]<< "; ";
    }
}

void AddIndex (int arr[], int size, int element_for_add, int index){
    int mas[size+1];
    int j=0;
    for (int i=0; i<size+1; i++){
        if (i!=index){
            mas[i]=arr[j];
            j++;
        }else{
            mas[i]=element_for_add;
        }
    }
    for (int i=0; i<size+1; ++i){
        cout << mas [i]<< "; ";
    }
}

void DeleteElement (int arr[], int size, int index){
    int mas[size-1];
    for (int i=0; i<size-1; i++){
        if (i<index){
            mas[i]=arr[i];
        }else{
            mas[i]=arr[i+1];
        }
    }
    for (int i=0; i<size-1; i++){
        cout << mas[i] << "; ";
    }
}