#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to the substring
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int i, j, count;
        /* initialize the count to zero */
        count = 0;
        /* loop through the string s */
        for (i = 0; s[i] != '\0'; i++)
        {
                /* loop through the substring accept */
                for (j = 0; accept[j] != '\0'; j++)
                {
                        /* if the current character of s matches any character of accept */
                        if (s[i] == accept[j])
                        {
                                /* increment the count and break the inner loop */
                                count++;
                                break;
                        }
                }
                /* if the inner loop did not break, it means no match was found for s[i] */
                /* so we can stop the outer loop and return the count */
                if (accept[j] == '\0')
                {
                        break;
                }
        }
        /* return the count */
        return (count);
}
