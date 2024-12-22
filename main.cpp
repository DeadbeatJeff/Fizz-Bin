/******************************************************************************
 * main.cpp
 *
 * This file plays the game "Fizz Binn"
 *
 * Author:        Jeffrey Rolland
 * Creation Date: 12/24/2014
 * Modifications: None
 *
******************************************************************************/

/******************************************************************************
 *
 * Header inclusions
 *
******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

/******************************************************************************
 * int main(int argc, char *argv[])
 *
 * This is the main function. It calls plays the game "Fizz Binn"
 * .
******************************************************************************/

int main(int argc, char *argv[])
{
	int i;

	for(i=1; i <= 100; i++)
	{
		if(i % 15 == 0)
		{
			cout << "fizzbinn ";
		}
		else if (i % 3 == 0)
		{
			cout << "fizz ";
		}
		else if(i % 5 == 0)
		{
			cout << "binn ";
		}
		else
		{
			cout << i << " ";
		}
	}

	return 0;
}


