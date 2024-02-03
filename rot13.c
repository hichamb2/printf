#include "main.h"

/**
 * rot13 - Change string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
int rot13(char *str)
{
	char alp[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char con[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	int i, j, ret = 0;

	if(!str)
	{
		str = "(AHYY)";
		ret += write(1, str, _strlen(str));
		return (ret);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alp[j] != '\0'; j++)
		{
			if (str[i] == alp[j])
			{
				ret += _putchar(con[j]);
				break;
			}
		}
	}
	return (ret);
}
