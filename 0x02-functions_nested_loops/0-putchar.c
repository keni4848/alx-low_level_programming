#include <unistd.hP
/**
*_putchar writes the character c to stdout
*@c: The character to print
Return: On success 1.
*On error, -1 is returned, and errno is set approptiately.
*/
int putchar(char c)
{
return (write(1, &c, 1));
}

holberton.h
intputchar(char c);
void print alphabet(void);
void printalphabetx10(void);
int_islower(int c);
int_isalpha(int c);
int print sign(int n);
intabs(int);
int print_last_digit(int);
void jackbauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print times_table(int n);
