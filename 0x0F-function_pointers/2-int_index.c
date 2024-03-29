#include "function_pointers.h"

/**
  * int_index -> returns index of the first element
  * @array: param
  * @size: param
  * @cmp: function to be used to compare values
  *
  * Return: -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
