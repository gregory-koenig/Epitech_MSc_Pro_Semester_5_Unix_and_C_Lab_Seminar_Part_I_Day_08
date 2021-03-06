/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** Counts and returns the number of characters found in the string passed as
** parameter
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int count = 0;

    if (str == NULL)
        return (0);
    for (int i = 0; str[i] != '\0'; i++)
        count++;
    return (count);
}
