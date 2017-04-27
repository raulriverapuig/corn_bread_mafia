/*
 * =====================================================================================
 *
 *       Filename:  hw10_task3Funcs.c
 *       	Usage:  ./hw10_task3Funcs.c
 *    Description:  Functions for mp3 decoding
 *
 *        Version:  1.0
 *        Created:  04/23/2017 12:49:47 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Julie Collings (), juliecollings@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include "cornbreadmafia_hw10_task3.h"
#include <ctype.h>
#include <string.h>

/* Function Definitions */
    /* 
     * ===  FUNCTION  ======================================================================
     *         Name:  Usage
     *  Description:  If input param is help, how to use function is displayed
     *  Args: An array of strings
     *  Returns:  Void
     * =====================================================================================
     */
void Usage(char **info)
{
    char string1[MAXELS] = "--help";
    int n;
    //Check to see if input parameter is help
    n = strcmp(string1, info[2]);
    if(n == 0)
    {
        printf("Usage: ./cornbreadmafia_hw10_task3  mp3Header.txt\n");
        exit(1);
    }
    else
    {
        return;
    }
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ReadFile
 *  Description:  Reads file and removes commas
 *  Args: File name, an array of unsigned integers
 *  Returns: Void
 * =====================================================================================
 */

void ReadFile(char *fName, unsigned int num[])
{
    FILE *header;
    char  clean[MAXELS];
    //Open file for reading
    header = fopen(fName, "r");
    if(header == NULL)
    {
        fprintf(stderr, "\nFailed to open to file.\n");
        exit(1);
    }
    //Read in the file
    for(int i = 0; i < MAXELS; i++)
    {
        fscanf(header, "%s", &clean[i]);
    }
    return;
}
