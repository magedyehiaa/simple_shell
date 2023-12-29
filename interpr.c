#include <stdio.h>
/**
 * main - dev
 *
 * Return: 0 succ
 */
int main(void)
{
int m[] = {2, 4, 6, 8, 10};
int size = sizeof(m) / sizeof(m[0]);
int submision = 0;
for (int a = 0; a < size; a++)
{
submision += m[a];
}
printf("The sum is: %d\n", sumbmision);
return (0);
}
