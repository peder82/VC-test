// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void PrintArray(int *begin, int *end)
{
	for (; begin != end; ++begin)
	{
		printf("%d\n", *begin);
	}
}

int * LargestArrayValue(int *begin, int *end)
{
	if (begin == end)
	{
		return 0;
	}

	int *largest = begin;

	for (; begin != end; ++begin)
	{
		if (*begin > *largest)
		{
			largest = begin;
		}
	}

	return largest;
}

int StringLength(char *string)
{
	int length = 0;

	while (*string++)
	{
		++length;
	}
	return length;
}

void MinMax(int *begin, int *end, int **smallest, int **biggest)
{
	if (begin == end)
	{
		*smallest = 0;
		*biggest = 0;
	}
	else
	{
		*smallest = *biggest = begin;

		while (++begin != end)
		{
			if (*begin < **smallest)
			{
				*smallest = begin;
			}

			if (*begin > **biggest)
			{
				*biggest = begin;
			}
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int i = 1234;
	printf("0x%p\n", &i);

	int *p = &i;
	printf("0x%p\n", p);

	int j = *p;
	printf("0x%d\n", j);

	*p = 4321;
	printf("0x%d\n", i);

	int numbers[3] = { 10, 2, 9 };
	numbers[1] = 4;

	int size = sizeof(numbers) / sizeof(numbers[0]);
		
	for (int i = 0; i < size; i++)
	{
		printf("numbers[%d] = %d\n", i, numbers[i]);
	}

	p = numbers;
	int *end = p + size;

	for (; p != end; ++p)
	{
		printf("%d\n", *p);
	}

	printf("sizeof(numbers) %d\nsizeof(p) %d\n", (int)sizeof(numbers), (int)sizeof(p));

	PrintArray(numbers, numbers + size);

	printf("Largest value was: %d\n", *LargestArrayValue(numbers, numbers + size));


	char string[] = "Hello world";
	printf("size %d\n", (int) sizeof(string));

	int length = 0;
	for (char *sp = string; *sp != 0; ++sp)
	{
		length++;
	}
	printf("size %d\n", length);

	printf("size %d\n", StringLength(string));

	
	int values[] = { 5, 2, 4, 1, 6 };
	int sizeV = sizeof(values) / sizeof(values[0]);

	int *smallest = 0;
	int *largest = 0;

	MinMax(values, values + sizeV, &smallest, &largest);

	printf("The smallest value is %d and the largest value is %d\n", *smallest, *largest);

	char str1[2];
	scanf("%s", &str1);

	return 0;
}

