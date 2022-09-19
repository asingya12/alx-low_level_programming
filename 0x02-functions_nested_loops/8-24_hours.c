#include "main.h"

/**
 * jack_bauer- prints every minute of the day
*/


void jack_bauer(void)
{
	int minutes = 0;
	int seconds;

	while (minutes < 24)
	{
		seconds = 0;
		for (seconds = 0; seconds < 60; ++seconds)
		{
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar(':');
			_putchar((seconds / 10) + '0');
			_putchar((seconds % 10) + '0');
			_putchar('\n');
		}
		++minutes;
	}
}
