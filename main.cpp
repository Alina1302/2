#include <iostream>
#include "../Library/array_functions.h"
#include "../LIBRARY/check_neg_pos_zero.h"

using namespace std;
int main() {
    const int SIZE=10;
    int arr [SIZE];
    int x;
    RandomArray(arr, SIZE, -10, 10);
    PrintArray(arr, SIZE);
    x = Qua_Neg(arr, SIZE);
    cout << endl;
    Array_Neg(arr, SIZE, x);

    x = Qua_Pos(arr, SIZE);
    cout << endl;
    Array_Pos(arr, SIZE, x);

    x = Qua_Zero(arr, SIZE);
    cout << endl;
    Array_Zero(arr, SIZE, x);
    return 0;
}
