#include "main.h"

/**
 * _isalpha - checking c
 * @x: character
 * Return: value
*/

int _isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
