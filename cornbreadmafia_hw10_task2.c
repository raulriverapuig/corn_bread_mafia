/*
 * =====================================================================================
 *
 *       Filename:  hw10_task2.c
 *       	Usage:  ./hw10_task2.c
 *    Description:  Categorize Tsunamis
 *
 *        Version:  1.0
 *        Created:  04/18/2017 02:59:32 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Julie Collings (), juliecollings@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "cornbreadmafia_hw10_task2.h"

/* Main Program */
int main(int argc, char *argv[])
{
    struct Tsunami tsunamiCalcs[MAXELS];
    Usage(argv);
    ReadFile(argv[1], tsunamiCalcs);
	return 0;
}

