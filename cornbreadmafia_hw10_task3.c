/*
 * =====================================================================================
 *
 *       Filename:  hw10_task3.c
 *       	Usage:  ./hw10_task3.c
 *    Description:  Decode mp3 files

 *        Version:  1.0
 *        Created:  04/18/2017 02:59:45 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Julie Collings (), juliecollings@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include "cornbreadmafia_hw10_task3.h"

/* Main Program */
int main(int argc, char *argv[])
{
    unsigned int num [MAXELS];
    Usage(argv);
    ReadFile(argv[1], num);
	return 0;
}

