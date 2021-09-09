#include "main.h"
/**
*print_buffer -  C function that prints the content of an
*  inputted number of bytes from a buffer.
* Prints 10 bytes per line.
* Starts with the position of the first byte in hexadecimal (8 chars),
* starting with `0`.
* Each line shows the hexadecimal content (2 chars) of the buffer,
* 2 bytes at a time, separated by a space.
* Each line shows the content of the buffer.
* Prints the byte if it is printable; if not, prints `.`.
* Each line ends with a new line `\n`.
* If the inputted byte size is 0 or less, the function only prints a new line.
*@b: number of bytes
*@size: size of the byte
*/
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size < 0)
	{
		printf('\n');
		return;
	}

	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		for (j = i; j < i + 9; j += 2)
		{
			if ((j < size) && ((j + 1) < size))
				printf("%02x%02x: ", b[j], b[j + 1]);
			else
			{
				while (++j <= i + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (j = i; j < i + 9 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf('\n');
		i += 10;
	}
}

