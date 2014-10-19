/*
 *	Title		 :		Easy C.
 * 	File		 :		easyc.h
 *	Type		 :		Header.
 *	Description	 :		For simple code.
 *	Author		 :		W4G Development.
 *	GitHub		 :		www.github.com/w4g
 *	Version		 :		1.0. ()
 *	Last release :		Oct 19 2014.
 *	Functions	 :
 		Repeat Strings, repeat int(eger) variables, STRING TO UPPERCASE, string to lowercase.

 */

#define	date	__DATE__
#define	time	__TIME__
#define	file	__FILE__

int i, x;


// Repeat strings.
void *repeats(char *var, int times) {
	for (i = 0; i < times; i++) {
		printf("%s", var);
	}
}
/* Usage:	repeats("Easy C!\n", 5);
	>>	Easy C!
		Easy C!
		Easy C!
		Easy C!
		Easy C!
								*/


// Repeat int(eger) variables.
void *repeati(int var, int times) {
	for (i = 0; i < times; i++) {
		printf("%i", var);
	}
}
/* Usage:	repeati(5, 5);
	>>	55555
								*/


// STRING TO UPPERCASE.
void *strupper(char *str) {
	int i=0;
	char c;
	while (str[i])
	{
		c=str[i];
		putchar(toupper(c));
		i++;
	}
}
/* Usage:	strupper("easy c is nice");
	>>	EASY C IS NICE
								*/


//	string to lowercase.
void *strlower(char *str) {
	int x=0;
	char c;
	while (str[x])
	{
		c=str[x];
		putchar (tolower(c));
		x++;
	}
}
/* Usage:	strlower("EASY C IS NICE");
	>>	easy c is nice
								*/
