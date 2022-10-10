#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		printf("error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 48 || argv[i][j] < 48)
			{
				printf("error\n");
				exit(98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);

	printf("%lu\n", mul);

	return (0);
	terate_zeroes(argv[2]);
	
		if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
			
				{
					
							printf("0\n");
							
									return (0);
									
										}
		
		
		
			size = find_len(argv[1]) + find_len(argv[2]);
			
				final_prod = create_xarray(size + 1);
				
					next_prod = create_xarray(size + 1);
					
					
					
						for (index = find_len(argv[2]) - 1; index >= 0; index--)
							
								{
									
											digit = get_digit(*(argv[2] + index));
											
													get_prod(next_prod, argv[1], digit, zeroes++);
													
															add_nums(final_prod, next_prod, size - 1);
															
																}
						
							for (index = 0; final_prod[index]; index++)
								
									{
										
												if (final_prod[index] != 'x')
													
																putchar(final_prod[index]);
												
													}
							
								putchar('\n');
								
								
								
									free(next_prod);
									
										free(final_prod);
										
										
										
											return (0);
											
}
