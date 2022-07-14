#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @str: pointer to string
 *
 * Return: pointer to a capitalized string
 */

char *cap_string(char *str)
{
	int i, j;

	char sp[13];

	sp[0] = ' ';
	sp[1] = '\n';
	sp[2] = '\t';
	sp[3] = ',';
	sp[4] = ';';
	sp[5] = '!';
	sp[6] = '?';
	sp[7] = '"';
	sp[8] = '(';
	sp[9] = ')';
	sp[10] = '{';
	sp[11] = '}';
	sp[12] = '.';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sp[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
			}
		}
	}

	return (str);
}
