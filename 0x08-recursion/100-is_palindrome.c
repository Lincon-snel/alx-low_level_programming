#include "main.h"
char check_palindrome(char *ch, int len, int i);
int str_len(char *c);

/**
 * str_len - returns the length of a string.
 * @c: the string
 *
 * Return: the string length
 */
int str_len(char *c)
{
	int len = 0;

	if (*c)
	{
		len++;
		len += str_len(c + 1);
	}

	return (len);
}


/**
 * check_palindrome - checks if a string is a palindrome
 * @ch: the string
 * @len: length of the string
 * @i: index of the string
 *
 * Return: 1 if the string is a palindrome,
 * 0 if otherwise.
 */
char check_palindrome(char *ch, int len, int i)
{
	if (ch[i] == ch[len / 2])
		return (1);
	else if (ch[i] == ch[len - i - 1])
		return (check_palindrome(ch, len, i + 1));
	else
		return (0);
}


/**
 * is_palindrome - confirms if a string is a palindrome.
 * @s: the string
 *
 * Return: 1 if the string is a palindrome,
 * 0 if otherwise.
 */
int is_palindrome(char *s)
{
	int len = str_len(s);

	if (!(*s))
		return (1);
	else
		return (check_palindrome(s, len, 0));
}
