/**
 * printf_binary - convert to binary
 * @ptr: numero in decimal
 * Return: number of characters printed
 */

int print_binary(va_list ptr)
{
        unsigned int bin, flag, i, digit, n, num;
        int count = 0;

        n = va_arg(ptr, unsigned int);
        if (n != 0)
        {
        num = n;
        bin = 0;
                while (num != 0)
                {
                        num /= 2;
                        bin++;
                }
        flag = 1;
                for (i = 1; i <= bin - 1; i++)
                        flag *= 2;
                for (i = 1; i <= bin; i++)
{
                        digit = n / flag;
                        _putchar(digit + '0');
                        count++;
                        n -= digit * flag;
                        flag /= 2;
                }
        }
        else
        {
                _putchar('0');
                return (1);
        }
        return (count);
}