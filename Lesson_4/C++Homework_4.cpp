#include <iostream>

using namespace std;

const string TRUE = "true";
const string FALSE = "false";

int main()
{
    setlocale(LC_ALL, "rus");

    {
        //1. Написать программу, проверяющую что сумма двух(введенных с клавиатуры) чисел лежит в пределах от 10 до 20 (включительно), 
        //   если да – вывести строку "true", в противном случае – "false";

        cout << "Задание №1: " << endl;
        int int_1, int_2;
        cout << "Введите первое число: ";
        cin >> int_1;
        cout << "ВВедите второе число: ";
        cin >> int_2;
        const int sum = int_1 + int_2;
        const int limit_1 = 10;
        const int limit_2 = 20;

        if ((sum >= limit_1) && (sum <= limit_2))
        {
            cout << TRUE << endl;
        }
        else
        {
            cout << FALSE << endl;
        }
        cout << endl;
    }
    
    {
        //2. Написать программу, выводящую на экран строку “true”, если две целочисленные константы, 
        //   объявленные в её начале либо обе равны десяти сами по себе, либо их сумма равна десяти. Иначе "false".

        cout << "Задание №2: " << endl;
        int var_1;
        int var_2;
        cout << "Введите первое число: ";
        cin >> var_1;
        cout << "Введите второе число: ";
        cin >> var_2;
        const int user_number = 10;
        if ((var_1 == user_number && var_2 == user_number) || (var_1 + var_2 == user_number))
        {
            cout << TRUE;
        }
        else
        {
            cout << FALSE;
        }
        cout << endl;
    }

    {
        //3. Написать программу которая выводит на экран список всех нечетных чисел он 1 до 50. 
        //   Например: "Your numbers: 1 3 5 7 9 11 13 ...". Для решения используйте любой С++ цикл.

        cout << endl << "Задание №3: " << endl << "Список нечетных чисел от 1-50: \n";
        for (size_t i = 1; i <= 50; i += 2)
        {
            cout << i << " \n";
        }
        cout << endl << endl;
    }
}
