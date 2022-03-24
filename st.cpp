#include <iostream>

/*

*/

char *getline()
{
	int i = 0;
	int j = 0;
	char ch;
	char *res = new char[9];

	while (std::cin.get(ch) && ch != '\n')
	{
		i++, j++;
		res[i - 1] = ch;
		if (j == 9)
		{
			
			char *new_res = new char[i + 8];
			for (int n = 0; n < i; n++)
				new_res[n] = res[n];
			delete [] res;
			j = 0;
			res = new_res;
		}
	}
	res[i] = '\0';
	return res;
}

int main()
{
	char *res = getline();
	std::cout << res << std::endl;
	delete [] res;
	return 0;
}