/*
 * =====================================================================================
 *
 *       Filename:  house.h
 *
 *    Description:  header file for task 1
 *
 *        Version:  1.0
 *        Created:  04/23/2017 11:33:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Raul Rivera (), raulriverapuigweber.edu
 *   Organization:  
 *
 * =====================================================================================
 */

struct house InputHouse(void);
void PrintHouse(char *name, struct house h);
int ComparePrices(struct house a, struct house b);

struct house 
{
	char number [5];
	char name [25];
	float price;
};
