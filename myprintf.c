#include "holberton.h"

int _printf(const char *format, ...)
{
	char *tr;
	char *str;
	unsigned int j;
	
 
	va_list lista; 
	va_start(lista, format); 
	
	for(tr = format; *tr != '\0'; tr++) 
	{ 
		while( *tr != '%' ) 
		{ 
			_putchar(*tr);
			tr++; 
		} 
		
		tr++; 
		
		switch(*tr) 
		{ 
		case 'c' : j = va_arg(lista, int);
			_putchar(j);
			break; 
			
		case 'd' : j = va_arg(lista, int); 
			if(j < 0) 
			{ 
				j = -j;
				_putchar('-'); 
			} 
			_puts(conv(j,10));
			break; 
			
		case 'i' : j = va_arg(lista, int); 
			if(j<0) 
			{ 
				j = -j;
				_putchar('-'); 
			} 
			puts(conv(j,10));
			break; 
			
		case 'o': j = va_arg(lista, unsigned int); 
			_puts(conv(j,8));
			break; 
			
		case 's': str = va_arg(lista, char *); 
			_puts(str); 
			break; 
			
		case 'x': j = va_arg(lista, unsigned int); 
			_puts(conv(j,16));
			break; 
		}
	} 
	
	
	va_end(lista); 
}

char *conv(unsigned int number, int bas) 
{ 
	static char rep[]= "0123456789ABCDEF";
	static char buf[90]; 
	char *pointer; 
	
	pointer = &buf[50]; 
	*pointer = '\0'; 
	
	do 
	{ 
		*--pointer = rep[number % bas]; 
		number /= bas; 
	}while(number != 0); 
	
	return (pointer); 
}
