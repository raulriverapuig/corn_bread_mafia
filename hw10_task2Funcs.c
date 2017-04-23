/*
 * =====================================================================================
 *
 *       Filename:  hw10_task2Funcs.c
 *       	Usage:  ./hw10_task2Funcs.c
 *    Description:  Functions for task 2; Tsunamis
 *
 *        Version:  1.0
 *        Created:  04/23/2017 08:47:10 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Julie Collings (), juliecollings@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "hw10_task2.h"
/* Function Definitions */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Usage
 *  Description:  Displays how to use the program
 *  Args: array of strings
 *  Returns: void
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
        printf("Usage: ./corn_bread_mafia_hw10_task2 ./corn_bread_mafia_hw10_task2Funcs  waves.txt");
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
 *  Description:  Reads a file into an array of structures
 *  Args: Filename, an array of structs
 *  Returns: void
 * =====================================================================================
 */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ReadFile
 *  Description:  Read in file and find max wave height
 *  Args: Filename, an array of structs
 *  Returns: void
 * =====================================================================================
 */
void ReadFile(char *fName, struct Tsunami tsunamiData[MAXELS])
{
    FILE *tsunami;
    struct Tsunami input[MAXELS];
    double total;
    tsunami = fopen(fName, "r");
    //Check to see if file is opened
    if (tsunami == NULL)
    {
       fprintf(stderr, "\nFailed to open the file.\n");
        exit(1);
    }
    //Read file into an array of structs
    else
    {
        for(int i = 0; i < MAXELS; i++)
        while(fscanf(tsunami, "%d %d %d %d %lf %s",&input[i].mo,
              &input[i].day, &input[i].yr, &input[i].fatalities,
              &input[i].max_height, input[i].location)!= EOF);
    fclose(tsunami);
    }
    return;
}
