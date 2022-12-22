/*
 * File: 0-strcat.c
 * Author: Ocholi Joseph
 */

#include 'main.h'

/**
 * strcat-Concatenates the string pointed to by @src,including the terminating
 *          null byte, to the end of the string pointed to by @dest @_strcat.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{
	char *end = dest;

	while (*end != '\0')
	{
		end++;
	}

	while (*src != '\0')
	{
		*end = *src;
		end++;
		src++;
	}

	*end = '\0';

	return (dest);
}
