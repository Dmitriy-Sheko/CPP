#include <iostream>
#include <time.h>

using namespace std;

//1. Написать функцию которая выводит массив double чисел на экран. Параметры функции это сам массив и его размер. Вызвать эту функцию из main.
void printArray(const int size, const double* arr) {
    for (int i = 0; i < size; ++i) cout << arr[i] << " ";
    cout << "\n";
}

//2. Задать целочисленный массив, состоящий из элементов 0 и 1. Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ]. 
//   Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0. Выводить на экран массив до изменений и после.
void invertArray(const int size, int* arr) {
    cout << "before invert: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
        arr[i] =~ arr[i];
    }
    cout << endl;
    cout << "after invert:  ";
    for (int j = 0; j < size; ++j) {
        cout << arr[j] << " ";
    }
}

//3. Задать пустой целочисленный массив размером 8. 
//   Написать функцию, которая с помощью цикла заполнит его значениями 1 4 7 10 13 16 19 22. Вывести массив на экран.
void initArray(const int size, int* arr) {
    arr[size];
    for (int i = 0, j = 1; i < size; j += 3, ++i) {
        arr[i] = j;
        cout << j << " ";
    }
}

int main() {
    const int SIZE = 50;
    srand(time(0));
    // 1
    {
        double arr[SIZE];
        for (double& i : arr) i = rand() % 1000;
        printArray(SIZE, arr);
    }

    // 2
    {
        int arr[SIZE];
        for (int& i : arr) i = rand() % 2;
        invertArray(SIZE, arr);
    }

    // 3
    {
        const int SIZE_ARR_TASK_3 = 8;
        int arr[SIZE_ARR_TASK_3];
        initArray(SIZE_ARR_TASK_3, arr);
    }
}