#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always O (Success)
 **/
int main(void)
{
int task_int;
float task_float;
char task_char;
long long task_long_long;
long task_long;
printf(Size of a char: %zu byte(s)\n", sizeof(task_char));
printf(Size of an int: %zu byte(S)\n", sizeof(task_int));
printf(Size of a long int: %zu byte(S)\n", sizeof(task_long));
printf(Size of a long long int: %zu byte(S)\n", sizeof(task_long_long));
printf(Size of a float: %zu byte(S)\n", sizeof(task_float));
return (0);
}
