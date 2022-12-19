/*
 * File: 9-strcpy.c
 * Author: Ocholi Joseph
 */

#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, const char *src) 
{
  char *dest_ptr = dest;
  
  while ((*dest_ptr++ = *src++) != '\0');
  
  return dest;
}