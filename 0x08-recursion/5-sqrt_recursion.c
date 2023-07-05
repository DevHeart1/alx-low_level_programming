#include " main.h"

/**
 * helper - returns the natural square root of a number
 * @n: the number to find the square root of
 * @guess: the current guess
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */
int helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (helper(n, guess + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (helper(n, 1));
}
