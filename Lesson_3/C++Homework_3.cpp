#include <iostream>

using namespace std;

extern int a, b, c, d;

int main()
{
	setlocale(LC_ALL, "rus");


	// 1. Написать программу, вычисляющую выражение a * (b + (c / d)) и выводящую результат с плавающей точкой, где a, b, c, d – целочисленные константы. 
	//    Используйте static_cast или С- Style cast к float чтобы выполнить точное деление.
	// 4. ** Написать программу, вычисляющую выражение из первого задания, а переменные для неё объявлены и инициализировать в другом cpp файле. 
	//    Используйте extern. (Первое можно не делать)
		
	const float var = a * (b + (static_cast <float> (c) / d));
	cout << "Результат a * (b + (c / d)) равен: " << var << endl;
	return 0;



	// 2. Дано целое число. Если оно меньше или равно 21, то выведите на экран разницу между этим числом и числом 21. 
	//    Если же заданное число больше, чем 21, необходимо вывести удвоенную разницу между этим числом и 21.
	//    При выполнении задания следует использовать тернарный оператор (?:).

	int number;
	cout << "Введите число: ";
	cin >> number;
	const int numberLimit = 21;
	const int decision = (number <= numberLimit) ? (number - numberLimit) : (number - numberLimit) << 1;
	cout << "Получилось: " << decision << endl;


	// 3.  * Описать трёхмерный целочисленный массив, размером 3х3х3 и указатель на значения внутри массива 
	//     и при помощи операции разыменования вывести на экран значение центральной ячейки получившегося куба [1][1][1].

	int array[3][3][3] = {  { {1,2,3},{4,5,6},{7,8,9} },
				{ {10,20,30},{40,50,60},{70,80,90} },
				{ {100,200,300},{400,500,600},{700,800,900} } };
			
	cout << "Значение первой ячейки массива = " << array[0][0][0] << endl;
	cout << "Значение центральной ячейки массива = " << array[1][1][1] << endl;
	cout << "Значение последней ячейки массива = " << array[2][2][2] << endl;
	

   
}


