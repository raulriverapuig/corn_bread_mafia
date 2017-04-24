/*
 * =====================================================================================
 *
 *       Filename:  cornbreadmafia_hw10_task1_definitions.c
 *       	Usage:  ./cornbreadmafia_hw10_task1_definitions.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/23/2017 11:39:45 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Raul Rivera (), raulriverapuigweber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include "cornbreadmafia_hw10_task1.h"


/* Function Defenitions */
// 1) Function for InputHouse
struct house InputHouse(void)
{
	struct house h1;
	printf("Enter the number of the house: ");
	scanf("%s",*&h1.number);
	printf("Enter the name of the street(without spaces): ");
	scanf("%s",*&h1.name);
	printf("Enter the price of the house: ");
	printf("\n");
	scanf("%f",&h1.price);
	return (h1);
}
// 2) Function to PrintHouse info
void PrintHouse(char *name, struct house h)
{
	printf("First House at %s %s for %f",h.number,h.name,h.price);
	printf("second House at %s %s for %f",h.number,h.name,h.price);
}

// 3) FUnction to Compare Prices
int ComparePrices(struct house a, struct house b)
{
	if(a.price > b.price)
	{
		return (1);
	}
	if(a.price < b.price)
	{
		return (-1);
	}
	if(a.price == b.price)
	{
		return (0);
	}
	return (5);
}

