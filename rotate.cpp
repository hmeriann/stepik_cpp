#include <iostream>
/*
2.3 Указатели и массивы
В этой задаче вам нужно реализовать функцию, которая сдвигает содержимое массива влево на заданное число позиций (циклический сдвиг).

На вход функция принимает массив, его размер и величину сдвига. Например, если на вход функции подан массив: int a[] = { 1, 2, 3, 4, 5 }; и требуется циклически сдвинуть его влево на 2 позиции, то на выходе мы получим числа в таком порядке: 3, 4, 5, 1, 2.

Обратите внимание, что величина сдвига может быть нулевой, а может быть и больше размера массива, все эти случаи нужно учесть.

Требования к реализации: вам нужно реализовать только функцию циклического сдвига. При этом она не должна вводить или выводить что-либо. При решении этой задачи вы можете определять любые вспомогательные функции, если они вам нужны. Реализовывать функцию main не нужно. Предполагается, что вам не потребуется дополнительная память, а именно: массивы и стандартные контейнеры. Пользоваться стандартными алгоритмами и контейнерами не разрешается, даже если вы с ними знакомы.

Рекомендация: перед тем, как начать кодировать решение этой задачи, продумайте алгоритм, который вы будете использовать. В данной задаче не проверяется эффективность этого алгоритма (в разумных пределах).

Подсказка: вам может потребоваться оператор % для вычисления остатка. Наиболее простая реализация этой функции сдвигает массив на один элемент за проход. Наиболее простая реализация несколько раз использует функцию, которая переставляет элементы массива в обратном порядке.
*/
void rotate(int a[], unsigned size, int shift)
{
	int n;
	int m;

	if (shift >= 0)
	{
		for (int k = 0; k < shift; k++)
		{
			n = a[0];
			for (int i = 0; i < size; i++)
			{
				a[i] = a[i+1];
			}
			a[size - 1] = n;
		}
	}
}

int main()
{
	int a[5] = {7, 2, 8, 4, 5};
	unsigned size = 5;
	int shift = 4;

	for (int i = 0; i < size; i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
	rotate(a, size, shift);
	for (int i = 0; i < size; i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
	return 0;
}