/*
 * =====================================================================================
 *
 *       Filename:  hw10_task2.h
 *
 *    Description:  Header for Tsunamis files
 *
 *        Version:  1.0
 *        Created:  04/23/2017 08:47:55 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Julie Collings (), juliecollings@mail.weber.edu
 *   Organization:  
 *
 * =====================================================================================
 */
//Constants
#define MAXELS 10

struct Tsunami
{
    int mo, day, yr, fatalities;
    double max_height;
    char location[20];
};
//Function Prototypes
void Usage(char **info);
void ReadFile(char *fName, struct Tsunami tsunamiData[MAXELS]);

