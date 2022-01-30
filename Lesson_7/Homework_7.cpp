﻿#include <iostream>
#include <fstream>
#include "MyLIb.cpp"
#include "MyLib.h"

using namespace std;

//  1.Создайте проект из 2х cpp файлов и заголовочного (main.cpp, mylib.cpp, mylib.h) во втором модуле mylib объявить 3 функции: 
//    для инициализации массива (типа float), печати его на экран и подсчета количества отрицательных и положительных элементов. 
//    Вызывайте эти 3-и функции из main для работы с массивом.



//  2.Описать макрокоманду (через директиву define), проверяющую, входит ли переданное ей число (введенное с клавиатуры) 
//    в диапазон от нуля (включительно) до переданного ей второго аргумента (исключительно) и возвращает true или false, 
//    вывести на экран «true» или «false».

#define IN_RANGE(x, y)((x >= 0 && x < y) ? "true" : "false")

inline void task2()
{
    int num;
    cin >> num;
    cout << IN_RANGE(num, 10) << endl;
}


//  3.Задайте массив типа int. Пусть его размер задается через директиву препроцессора #define. 
//    Инициализируйте его через ввод с клавиатуры. Напишите для него свою функцию сортировки (например Пузырьком). 
//    Реализуйте перестановку элементов как макрокоманду SwapINT(a, b). Вызывайте ее из цикла сортировки.

#define ARR_SIZE 10

inline void task3()
{
    int* arr = new(nothrow) int[ARR_SIZE];
    if (arr != nullptr)
    {
        cout << "enter " << ARR_SIZE << "numbers: " << endl;
        for (size_t i = 0; i < ARR_SIZE; i++)
        {
            cin >> arr[i];
        }

        MyLib::SortArr(arr, ARR_SIZE);
        MyLib::PrintArr(arr, ARR_SIZE);

        delete[] arr;
    }
}



























int main()
{
    std::cout << "Hello World!\n";
}
