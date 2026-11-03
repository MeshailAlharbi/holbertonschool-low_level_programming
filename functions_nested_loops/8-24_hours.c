#include <stdio.h>
/**
* jack_bauer - prints every minute of the day
* Return: void
*/
 void jack_bauer(void) 
{ 
	int hour = 0;
	
	while (hour <= 23) 
	{ 
		int minute = 0;
		
	        while (minute <= 59) 
		{
     putchar(hour / 10 + '0');
     putchar(hour % 10 + '0');
     putchar(':');
     putchar(minute / 10 + '0');
     putchar(minute % 10 + '0');
     putchar('\n');

     minute++;
                }

 hour++; 
	}
}
