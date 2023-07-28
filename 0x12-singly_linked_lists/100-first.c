#include "lists.h"

/**
 * startupFun - This Apply the constructor attribute to the function so that it
 *   is executed before main()
 */
void startupFun(void) __attribute__ ((constructor));

/**
 * startupFun - This function implemets myStartupFun
 */
void startupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

