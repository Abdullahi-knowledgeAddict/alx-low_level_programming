****************************** STATIC LIBRARY *********************************
libmy.a : My first static library containing;
	0-isupper:
	0-memset:
	0-strcat:
	100-atoi:
	1-isdigit:
	1-memcpy:
	1-strncat:
	2-strchr:
	2-strlen:
	2-strncpy:
	3-islower:
	3-puts:
	3-strcmp:
	3-strspn:
	4-isalpha:
	4-strpbrk:
	5-strstr:
	6-abs:
	9-strcpy:
	_putchar:
main.h: contains prototypes of the above functions.
create_static_lib.sh: creates a a static library named (liball.a) from all C source code in the present directory.

*******************************************************************************
