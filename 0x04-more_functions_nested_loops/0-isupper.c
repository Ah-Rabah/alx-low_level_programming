#include "main.h"

/**
* _isuper -> this is afunction to check upper case alphas
* @c: an integer paramer
* Return : something but success
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
	return (c >= 65 && c <= 90);
}
