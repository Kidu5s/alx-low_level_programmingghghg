#include "main.h"

/**
 * print_square - pirnts # symbole as squares
 * @size: is the size of the square
 *
 * Return: 0.
 */

void print_square(int size)
{
    int i;
    int j;


    for (i = 1; i <= size; ++i)
    {
        for (j = 0; j <= size; j++)
	{
	   if (j > 0)
        {
            _putchar('#');
        }
	   else
	   {
	    _putchar('\n');
	   }
	}
       	   _putchar('\n'); 
	
	}
    
   
	
}
