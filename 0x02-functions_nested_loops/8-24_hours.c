#include "main.h"
/**
 * jack_bauer - function that prints every minutes of the day of Jack Bauer, starti
 * n from 00:00 to 23:59, min loop counts mins, wile hour loop counts hours 
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{

	int hours = 0;
	int minutes = o;
	int hours_reminder;
	int mins_reminder;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
av
		hours_reminder = hours % 10;
		_putchar(hours / 10 + '0';
		_putchar(hours_reminder + ('0')
		_puchar(':');
		_putchar(minutes /10 + '0');
		_putchar(mins_reminder + '0');
		minutes++
		_putchar('\n);
	
	}
	hours++;
	minutes = 0;

