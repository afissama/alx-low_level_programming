#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * jack_bauer - print jack hours
 *
 */
void jack_bauer(void)
{
	int h_1, h_2, m_1, m_2;

	for (h_1 = 0; h_1 <= 2; h_1++)
	{
		for (h_2 = 0; h_2 <= 9; h_2++)
		{
			for (m_1 = 0; m_1 <= 5; m_1++)
			{
				for (m_2 = 0; m_2 <= 9; m_2++)
				{
					_putchar('0' + h_1);
					_putchar('0' + h_2);
					_putchar(':');
					_putchar('0' + m_1);
					_putchar('0' + m_2);
					_putchar('\n');
				}
			}
			if (h_1 == 2 &&  h_2 == 3)
			{
				break;
			}
		}
	}
}
