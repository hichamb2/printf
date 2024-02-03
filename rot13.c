#include "main.h"

/**
 * rot13 - Change string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
int rot13(char *str)
{
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char con[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j, ret = 0;
	char x;

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
				x = con[j];
				ret += write(1, &x, 1);
				break;
			}
		}
		if (!alp[j])
		{
			x = str[i];
			ret+= write(1, &x, 1);
		}
	}
	return (ret);
}
