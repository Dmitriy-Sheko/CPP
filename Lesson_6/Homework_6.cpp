#include <iostream>
#include <fstream>
#include <string>

using namespace std;

 
    //  1.Выделить в памяти динамический одномерный массив типа int. Размер массива запросить у пользователя. 
    //    Инициализировать его числами степенями двойки: 1, 2, 4, 8, 16, 32, 64, 128 ...
    //    Вывести массив на экран. Не забыть освободить память. =) Разбить программу на функции.

    void prnt_array(int* array, size_t arraySize)
    {
        cout << "Array: ";
        for (size_t i = 0; i < arraySize; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    void init_array(int* arr, const size_t size)
    {
        arr[0] = 1;
        for (size_t i = 1; i < size; i++)
        {
            arr[i] = arr[i - 1] << 1;
        }
    }

    void task1()
    {
        const size_t size = 10;
        int* arr = new(nothrow) int[size];
        if (arr != nullptr)
        {
            init_array(arr, size);
            prnt_array(arr, size);
            delete[] arr;
        }
    }


    //  2.Динамически выделить матрицу 4х4 типа int. 
    //    Инициализировать ее псевдослучайными числами через функцию rand. 
    //    Вывести на экран. Разбейте вашу программу на функции которые вызываются из main.

    void printMatrix(int** array, const size_t size)
    {
        cout << "matrix: " << endl;

        for (size_t i = 0; i < size; i++)
        {
            for (size_t j = 0; j < size; j++)
            {
                cout << array[i][j] << " ";
            }
            cout << endl;
        }
    }

    void initMatrix(int** pMatrix, const size_t size)
    {
        for (size_t i = 0; i < size; i++)
        {
            for (size_t j = 0; j < size; j++)
            {
                pMatrix[i][j] = rand() % 100;
            }
        }
    }

    void task2()
    {
        srand(time_t(NULL));
        const size_t size = 5;
        int** pMatrix = new int* [size];
        for (size_t i = 0; i < size; i++)
        {
            pMatrix[i] = new int[size];
        }

        initMatrix(pMatrix, size);
        cout << endl;
        printMatrix(pMatrix, size);

        for (size_t i = 0; i < size; i++)
        {
            delete[] pMatrix[i];
        }
        delete[] pMatrix;
    }

    //  3.Написать программу, которая создаст два текстовых файла (*.txt), 
    //    примерно по 50-100 символов в каждом (особого значения не имеет с каким именно содержимым).
    //    Имена файлов запросить у польлзователя.

    void WriteToFile(const string & fn, const string & str)
    {
        ofstream fout;
        fout.open(fn);
        if (fout.is_open())
        {
            fout << str;
            fout.close();
        }
    }

    void task3()
    {
        cout << "enter file name1 for output: ";
        string fn1, fn2;
        cin >> fn1;
        cout << "enter file name2 for output: ";
        cin >> fn2;

        const string str1 = "text text text111111";
        WriteToFile(fn1, str1);

        const string str2 = "text text text22222222";
        WriteToFile(fn2, str2);
    }
    int main()
    {
        return 0;
    }