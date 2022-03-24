#include <iostream>
/*
2.4 Использование указателей
10 out of 10 steps passed
6 out of 6 points  received
Напишите функцию поиска первого вхождения шаблона в текст. В качестве первого параметра функция принимает текст (C-style строка), в которой нужно искать шаблон. В качестве второго параметра строку-шаблон (C-style строка), которую нужно найти. Функция возвращает позицию первого вхождения строки-шаблона, если он присутствует в строке (помните, что в C++ принято считать с 0), и -1, если шаблона в тексте нет.

Учтите, что пустой шаблон (строка длины 0) можно найти в любом месте текста.

Требования к реализации: при выполнении данного задания вы можете определять любые вспомогательные функции, если они вам нужны. Вводить или выводить что-либо не нужно. Реализовывать функцию main не нужно.
*/

int ft_strlen(const char *str)
	{
	int i = 0;
	int n =0;
	while(*(str+n) !='\0')
	{
		i++;
		n++;
	}
	return i;
}

int ft_strstr(const char *text, const char *pattern)
{
	int lenpat = ft_strlen(pattern);
	int k = 0;
	int lentext = ft_strlen(text);
	if(lenpat == 0)
		return 0;
	if(lenpat == 0 && lentext == 0)
		return 0; 
	if((lentext == 0) && (lenpat != 0)) 
		return -1;
	for(int i = 0; i < lentext;i++)
	{
		if(*(text+i) == *pattern)
		{
			for(int j = 0; j < lenpat+1;j++)
			{
				if(*(text+i+j) == *(pattern+j) && k < lenpat)
					k++;
				else if(k == lenpat)
					return i;
				else 
				{
					k = 0;
					break;
				}
			}
		}
	}
	return -1;
}

int main()
{
	char *text = "shablon";
	char *pattern = "blon";
	int res = 0;

	res = ft_strstr(text, pattern);
	std::cout << res << std::endl;
	return (0);
}
