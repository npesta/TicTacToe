// Tic Tac Toe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <cstdlib> 


using namespace std;

int main()
{
	bool game;
	game = true;
	int difficulty = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	string choice = "0";
	string one = "open";
	string two = "open";
	string three = "open";
	string four = "open";
	string five = "open";
	string six = "open";
	string seven = "open";
	string eight = "open";
	string nine = "open";
	string onexo = "open";
	string twoxo = "open";
	string threexo = "open";
	string fourxo = "open";
	string fivexo = "open";
	string sixxo = "open";
	string sevenxo = "open";
	string eightxo = "open";
	string ninexo = "open";
	srand((unsigned)time(0));
	int random_integer = rand();

	cout << "Please select a difficulty level.\n";
	cout << "Easy (1)\n";
	cout << "Normal (2)\n";
	cout << "Hard (3)\n";

	cin >> difficulty;

	cout << "You are X's. To select your square, type in the number that corresponds to the square on your number pad.\n\n";

	//cout<< "  oo | oo | oo \n"
	//	<< "    oo |    |    \n"
	//	<< "   --------------\n"
	//	<< "       |    |    \n"
	//	<< "       |    |    \n"
	//	<< "   --------------\n"
	//	<< "       |    |    \n"
	//	<< "       |    |    \n";

	for (i = 0; i < 9; i++)
	{
		if (i == 1)
		{
			for (j = 0; j < 15; j++)
			{
				if (j == 1)
				{
					if (sevenxo == "x")
					{
						cout << "x";
					}

					if (sevenxo == "o")
					{
						cout << "o";
					}

					else if (sevenxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 2)
				{
					if (sevenxo == "x")
					{
						cout << "x";
					}

					if (sevenxo == "o")
					{
						cout << "o";
					}

					else if (sevenxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 6)
				{
					if (eightxo == "x")
					{
						cout << "x";
					}

					if (eightxo == "o")
					{
						cout << "o";
					}

					else if (eightxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 7)
				{
					if (eightxo == "x")
					{
						cout << "x";
					}

					if (eightxo == "o")
					{
						cout << "o";
					}

					else if (eightxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 11)
				{
					if (ninexo == "x")
					{
						cout << "x";
					}

					if (ninexo == "o")
					{
						cout << "o";
					}

					else if (ninexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 12)
				{
					if (ninexo == "x")
					{
						cout << "x";
					}

					if (ninexo == "o")
					{
						cout << "o";
					}

					else if (ninexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 4)
				{
					cout << "|";
				}

				if (j == 9)
				{
					cout << "|";
				}

				if (j == 14)
				{
					cout << "\n";
				}

				if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
				{
					cout << " ";
				}
			}
		}

		if (i == 2)
		{
			for (j = 0; j < 15; j++)
			{
				if (j == 1)
				{
					if (sevenxo == "x")
					{
						cout << "x";
					}

					if (sevenxo == "o")
					{
						cout << "o";
					}

					else if (sevenxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 2)
				{
					if (sevenxo == "x")
					{
						cout << "x";
					}

					if (sevenxo == "o")
					{
						cout << "o";
					}

					else if (sevenxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 6)
				{
					if (eightxo == "x")
					{
						cout << "x";
					}

					if (eightxo == "o")
					{
						cout << "o";
					}

					else if (eightxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 7)
				{
					if (eightxo == "x")
					{
						cout << "x";
					}

					if (eightxo == "o")
					{
						cout << "o";
					}

					else if (eightxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 11)
				{
					if (ninexo == "x")
					{
						cout << "x";
					}

					if (ninexo == "o")
					{
						cout << "o";
					}

					else if (ninexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 12)
				{
					if (ninexo == "x")
					{
						cout << "x";
					}

					if (ninexo == "o")
					{
						cout << "o";
					}

					else if (ninexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 4)
				{
					cout << "|";
				}

				if (j == 9)
				{
					cout << "|";
				}

				if (j == 14)
				{
					cout << "\n";
				}

				if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
				{
					cout << " ";
				}
			}
		}

		if (i == 3)
		{
			for (j = 0; j < 15; j++)
			{
				if (j != 14)
				{
					cout << "-";
				}

				if (j == 14)
				{
					cout << "\n";
				}
			}
		}

		if (i == 4)
		{
			for (j = 0; j < 15; j++)
			{
				if (j == 1)
				{
					if (fourxo == "x")
					{
						cout << "x";
					}

					if (fourxo == "o")
					{
						cout << "o";
					}

					else if (fourxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 2)
				{
					if (fourxo == "x")
					{
						cout << "x";
					}

					if (fourxo == "o")
					{
						cout << "o";
					}

					else if (fourxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 6)
				{
					if (fivexo == "x")
					{
						cout << "x";
					}

					if (fivexo == "o")
					{
						cout << "o";
					}

					else if (fivexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 7)
				{
					if (fivexo == "x")
					{
						cout << "x";
					}

					if (fivexo == "o")
					{
						cout << "o";
					}

					else if (fivexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 11)
				{
					if (sixxo == "x")
					{
						cout << "x";
					}

					if (sixxo == "o")
					{
						cout << "o";
					}

					else if (sixxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 12)
				{
					if (sixxo == "x")
					{
						cout << "x";
					}

					if (sixxo == "o")
					{
						cout << "o";
					}

					else if (sixxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 4)
				{
					cout << "|";
				}

				if (j == 9)
				{
					cout << "|";
				}

				if (j == 14)
				{
					cout << "\n";
				}

				if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
				{
					cout << " ";
				}
			}
		}

		if (i == 5)
		{
			for (j = 0; j < 15; j++)
			{
				if (j == 1)
				{
					if (fourxo == "x")
					{
						cout << "x";
					}

					if (fourxo == "o")
					{
						cout << "o";
					}

					else if (fourxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 2)
				{
					if (fourxo == "x")
					{
						cout << "x";
					}

					if (fourxo == "o")
					{
						cout << "o";
					}

					else if (fourxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 6)
				{
					if (fivexo == "x")
					{
						cout << "x";
					}

					if (fivexo == "o")
					{
						cout << "o";
					}

					else if (fivexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 7)
				{
					if (fivexo == "x")
					{
						cout << "x";
					}

					if (fivexo == "o")
					{
						cout << "o";
					}

					else if (fivexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 11)
				{
					if (sixxo == "x")
					{
						cout << "x";
					}

					if (sixxo == "o")
					{
						cout << "o";
					}

					else if (sixxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 12)
				{
					if (sixxo == "x")
					{
						cout << "x";
					}

					if (sixxo == "o")
					{
						cout << "o";
					}

					else if (sixxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 4)
				{
					cout << "|";
				}

				if (j == 9)
				{
					cout << "|";
				}

				if (j == 14)
				{
					cout << "\n";
				}

				if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
				{
					cout << " ";
				}
			}
		}

		if (i == 6)
		{
			for (j = 0; j < 15; j++)
			{
				if (j != 14)
				{
					cout << "-";
				}

				if (j == 14)
				{
					cout << "\n";
				}
			}
		}

		if (i == 7)
		{
			for (j = 0; j < 15; j++)
			{
				if (j == 1)
				{
					if (onexo == "x")
					{
						cout << "x";
					}

					if (onexo == "o")
					{
						cout << "o";
					}

					else if (onexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 2)
				{
					if (onexo == "x")
					{
						cout << "x";
					}

					if (onexo == "o")
					{
						cout << "o";
					}

					else if (onexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 6)
				{
					if (twoxo == "x")
					{
						cout << "x";
					}

					if (twoxo == "o")
					{
						cout << "o";
					}

					else if (twoxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 7)
				{
					if (twoxo == "x")
					{
						cout << "x";
					}

					if (twoxo == "o")
					{
						cout << "o";
					}

					else if (twoxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 11)
				{
					if (threexo == "x")
					{
						cout << "x";
					}

					if (threexo == "o")
					{
						cout << "o";
					}

					else if (threexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 12)
				{
					if (threexo == "x")
					{
						cout << "x";
					}

					if (threexo == "o")
					{
						cout << "o";
					}

					else if (threexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 4)
				{
					cout << "|";
				}

				if (j == 9)
				{
					cout << "|";
				}

				if (j == 14)
				{
					cout << "\n";
				}

				if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
				{
					cout << " ";
				}
			}
		}

		if (i == 8)
		{
			for (j = 0; j < 15; j++)
			{
				if (j == 1)
				{
					if (onexo == "x")
					{
						cout << "x";
					}

					if (onexo == "o")
					{
						cout << "o";
					}

					else if (onexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 2)
				{
					if (onexo == "x")
					{
						cout << "x";
					}

					if (onexo == "o")
					{
						cout << "o";
					}

					else if (onexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 6)
				{
					if (twoxo == "x")
					{
						cout << "x";
					}

					if (twoxo == "o")
					{
						cout << "o";
					}

					else if (twoxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 7)
				{
					if (twoxo == "x")
					{
						cout << "x";
					}

					if (twoxo == "o")
					{
						cout << "o";
					}

					else if (twoxo == "open")
					{
						cout << " ";
					}
				}

				if (j == 11)
				{
					if (threexo == "x")
					{
						cout << "x";
					}

					if (threexo == "o")
					{
						cout << "o";
					}

					else if (threexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 12)
				{
					if (threexo == "x")
					{
						cout << "x";
					}

					if (threexo == "o")
					{
						cout << "o";
					}

					else if (threexo == "open")
					{
						cout << " ";
					}
				}

				if (j == 4)
				{
					cout << "|";
				}

				if (j == 9)
				{
					cout << "|";
				}

				if (j == 14)
				{
					cout << "\n";
				}

				if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
				{
					cout << " ";
				}
			}
		}
	}
	
	while (game == true)
	{
		cout << "\nYour move.\n";
		cin >> choice;

		while (choice != "1" && choice != "2" && choice != "3" && choice != "4" && choice != "5" && choice != "6" && choice != "7" && choice != "8" && choice != "9")
		{
			cout << "That is not a valid choice. Please insert a number 1-9.\n";
			cin >> choice;
		}

		if (choice == "1")
		{
			if (one == "taken")
			{
				cout << "This square is already taken. Choose another.\n";
				cin >> choice;
			}
		}

		if (choice == "2")
		{
			if (two == "taken")
			{
				cout << "This square is already taken. Choose another.\n";
				cin >> choice;
			}
		}

		if (choice == "3")
		{
			if (three == "taken")
			{
				cout << "This square is already taken. Choose another.\n";
				cin >> choice;
			}
		}

		if (choice == "4")
		{
			if (four == "taken")
			{
				cout << "This square is already taken. Choose another.\n";
				cin >> choice;
			}
		}

		if (choice == "5")
		{
			if (five == "taken")
			{
				cout << "This square is already taken. Choose another.\n";
				cin >> choice;
			}
		}

		if (choice == "6")
		{
			if (six == "taken")
			{
				cout << "This square is already taken. Choose another.\n";
				cin >> choice;
			}
		}

		if (choice == "7")
		{
			if (seven == "taken")
			{
				cout << "This square is already taken. Choose another.\n";
				cin >> choice;
			}
		}

		if (choice == "8")
		{
			if (eight == "taken")
			{
				cout << "This square is already taken. Choose another.\n";
				cin >> choice;
			}
		}

		if (choice == "9")
		{
			if (nine == "taken")
			{
				cout << "This square is already taken. Choose another.\n";
				cin >> choice;
			}
		}

		if (choice == "1")
		{
			if (one != "taken")
			{
				one = "taken";
				onexo = "x";
			}
		}

		if (choice == "2")
		{
			if (two != "taken")
			{
				two = "taken";
				twoxo = "x";
			}
		}

		if (choice == "3")
		{
			three = "taken";
			threexo = "x";
		}

		if (choice == "4")
		{
			four = "taken";
			fourxo = "x";
		}

		if (choice == "5")
		{
			five = "taken";
			fivexo = "x";
		}

		if (choice == "6")
		{
			six = "taken";
			sixxo = "x";
		}

		if (choice == "7")
		{
			seven = "taken";
			sevenxo = "x";
		}

		if (choice == "8")
		{
			eight = "taken";
			eightxo = "x";
		}

		if (choice == "9")
		{
			nine = "taken";
			ninexo = "x";
		}

		for (i = 0; i < 9; i++)
		{
			if (i == 1)
			{
				for (j = 0; j < 15; j++)
				{
					if (j == 1)
					{
						if (sevenxo == "x")
						{
							cout << "x";
						}

						if (sevenxo == "o")
						{
							cout << "o";
						}

						else if (sevenxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 2)
					{
						if (sevenxo == "x")
						{
							cout << "x";
						}

						if (sevenxo == "o")
						{
							cout << "o";
						}

						else if (sevenxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 6)
					{
						if (eightxo == "x")
						{
							cout << "x";
						}

						if (eightxo == "o")
						{
							cout << "o";
						}

						else if (eightxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 7)
					{
						if (eightxo == "x")
						{
							cout << "x";
						}

						if (eightxo == "o")
						{
							cout << "o";
						}

						else if (eightxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 11)
					{
						if (ninexo == "x")
						{
							cout << "x";
						}

						if (ninexo == "o")
						{
							cout << "o";
						}

						else if (ninexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 12)
					{
						if (ninexo == "x")
						{
							cout << "x";
						}

						if (ninexo == "o")
						{
							cout << "o";
						}

						else if (ninexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 4)
					{
						cout << "|";
					}

					if (j == 9)
					{
						cout << "|";
					}

					if (j == 14)
					{
						cout << "\n";
					}

					if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
					{
						cout << " ";
					}
				}
			}

			if (i == 2)
			{
				for (j = 0; j < 15; j++)
				{
					if (j == 1)
					{
						if (sevenxo == "x")
						{
							cout << "x";
						}

						if (sevenxo == "o")
						{
							cout << "o";
						}

						else if (sevenxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 2)
					{
						if (sevenxo == "x")
						{
							cout << "x";
						}

						if (sevenxo == "o")
						{
							cout << "o";
						}

						else if (sevenxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 6)
					{
						if (eightxo == "x")
						{
							cout << "x";
						}

						if (eightxo == "o")
						{
							cout << "o";
						}

						else if (eightxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 7)
					{
						if (eightxo == "x")
						{
							cout << "x";
						}

						if (eightxo == "o")
						{
							cout << "o";
						}

						else if (eightxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 11)
					{
						if (ninexo == "x")
						{
							cout << "x";
						}

						if (ninexo == "o")
						{
							cout << "o";
						}

						else if (ninexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 12)
					{
						if (ninexo == "x")
						{
							cout << "x";
						}

						if (ninexo == "o")
						{
							cout << "o";
						}

						else if (ninexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 4)
					{
						cout << "|";
					}

					if (j == 9)
					{
						cout << "|";
					}

					if (j == 14)
					{
						cout << "\n";
					}

					if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
					{
						cout << " ";
					}
				}
			}

			if (i == 3)
			{
				for (j = 0; j < 15; j++)
				{
					if (j != 14)
					{
						cout << "-";
					}

					if (j == 14)
					{
						cout << "\n";
					}
				}
			}

			if (i == 4)
			{
				for (j = 0; j < 15; j++)
				{
					if (j == 1)
					{
						if (fourxo == "x")
						{
							cout << "x";
						}

						if (fourxo == "o")
						{
							cout << "o";
						}

						else if (fourxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 2)
					{
						if (fourxo == "x")
						{
							cout << "x";
						}

						if (fourxo == "o")
						{
							cout << "o";
						}

						else if (fourxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 6)
					{
						if (fivexo == "x")
						{
							cout << "x";
						}

						if (fivexo == "o")
						{
							cout << "o";
						}

						else if (fivexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 7)
					{
						if (fivexo == "x")
						{
							cout << "x";
						}

						if (fivexo == "o")
						{
							cout << "o";
						}

						else if (fivexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 11)
					{
						if (sixxo == "x")
						{
							cout << "x";
						}

						if (sixxo == "o")
						{
							cout << "o";
						}

						else if (sixxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 12)
					{
						if (sixxo == "x")
						{
							cout << "x";
						}

						if (sixxo == "o")
						{
							cout << "o";
						}

						else if (sixxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 4)
					{
						cout << "|";
					}

					if (j == 9)
					{
						cout << "|";
					}

					if (j == 14)
					{
						cout << "\n";
					}

					if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
					{
						cout << " ";
					}
				}
			}

			if (i == 5)
			{
				for (j = 0; j < 15; j++)
				{
					if (j == 1)
					{
						if (fourxo == "x")
						{
							cout << "x";
						}

						if (fourxo == "o")
						{
							cout << "o";
						}

						else if (fourxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 2)
					{
						if (fourxo == "x")
						{
							cout << "x";
						}

						if (fourxo == "o")
						{
							cout << "o";
						}

						else if (fourxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 6)
					{
						if (fivexo == "x")
						{
							cout << "x";
						}

						if (fivexo == "o")
						{
							cout << "o";
						}

						else if (fivexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 7)
					{
						if (fivexo == "x")
						{
							cout << "x";
						}

						if (fivexo == "o")
						{
							cout << "o";
						}

						else if (fivexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 11)
					{
						if (sixxo == "x")
						{
							cout << "x";
						}

						if (sixxo == "o")
						{
							cout << "o";
						}

						else if (sixxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 12)
					{
						if (sixxo == "x")
						{
							cout << "x";
						}

						if (sixxo == "o")
						{
							cout << "o";
						}

						else if (sixxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 4)
					{
						cout << "|";
					}

					if (j == 9)
					{
						cout << "|";
					}

					if (j == 14)
					{
						cout << "\n";
					}

					if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
					{
						cout << " ";
					}
				}
			}

			if (i == 6)
			{
				for (j = 0; j < 15; j++)
				{
					if (j != 14)
					{
						cout << "-";
					}

					if (j == 14)
					{
						cout << "\n";
					}
				}
			}

			if (i == 7)
			{
				for (j = 0; j < 15; j++)
				{
					if (j == 1)
					{
						if (onexo == "x")
						{
							cout << "x";
						}

						if (onexo == "o")
						{
							cout << "o";
						}

						else if (onexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 2)
					{
						if (onexo == "x")
						{
							cout << "x";
						}

						if (onexo == "o")
						{
							cout << "o";
						}

						else if (onexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 6)
					{
						if (twoxo == "x")
						{
							cout << "x";
						}

						if (twoxo == "o")
						{
							cout << "o";
						}

						else if (twoxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 7)
					{
						if (twoxo == "x")
						{
							cout << "x";
						}

						if (twoxo == "o")
						{
							cout << "o";
						}

						else if (twoxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 11)
					{
						if (threexo == "x")
						{
							cout << "x";
						}

						if (threexo == "o")
						{
							cout << "o";
						}

						else if (threexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 12)
					{
						if (threexo == "x")
						{
							cout << "x";
						}

						if (threexo == "o")
						{
							cout << "o";
						}

						else if (threexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 4)
					{
						cout << "|";
					}

					if (j == 9)
					{
						cout << "|";
					}

					if (j == 14)
					{
						cout << "\n";
					}

					if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
					{
						cout << " ";
					}
				}
			}

			if (i == 8)
			{
				for (j = 0; j < 15; j++)
				{
					if (j == 1)
					{
						if (onexo == "x")
						{
							cout << "x";
						}

						if (onexo == "o")
						{
							cout << "o";
						}

						else if (onexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 2)
					{
						if (onexo == "x")
						{
							cout << "x";
						}

						if (onexo == "o")
						{
							cout << "o";
						}

						else if (onexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 6)
					{
						if (twoxo == "x")
						{
							cout << "x";
						}

						if (twoxo == "o")
						{
							cout << "o";
						}

						else if (twoxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 7)
					{
						if (twoxo == "x")
						{
							cout << "x";
						}

						if (twoxo == "o")
						{
							cout << "o";
						}

						else if (twoxo == "open")
						{
							cout << " ";
						}
					}

					if (j == 11)
					{
						if (threexo == "x")
						{
							cout << "x";
						}

						if (threexo == "o")
						{
							cout << "o";
						}

						else if (threexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 12)
					{
						if (threexo == "x")
						{
							cout << "x";
						}

						if (threexo == "o")
						{
							cout << "o";
						}

						else if (threexo == "open")
						{
							cout << " ";
						}
					}

					if (j == 4)
					{
						cout << "|";
					}

					if (j == 9)
					{
						cout << "|";
					}

					if (j == 14)
					{
						cout << "\n";
					}

					if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
					{
						cout << " ";
					}
				}
			}
		}

		if (onexo == "x" && twoxo == "x" && threexo == "x")
		{
			cout << "\nYou win!";
			cin >> onexo;
			game = false;
		}

		if (onexo == "o" && twoxo == "o" && threexo == "o")
		{
			cout << "\nYou lost...";
			cin >> onexo;
			game = false;
		}

		if (fourxo == "x" && fivexo == "x" && sixxo == "x")
		{
			cout << "\nYou win!";
			cin >> onexo;
		}

		if (fourxo == "o" && fivexo == "o" && sixxo == "o")
		{
			cout << "\nYou lost...";
			cin >> onexo;
			game = false;
		}

		if (sevenxo == "x" && eightxo == "x" && ninexo == "x")
		{
			cout << "\nYou win!";
			cin >> onexo;
			game = false;
		}

		if (sevenxo == "o" && eightxo == "o" && ninexo == "o")
		{
			cout << "\nYou lost...";
			cin >> onexo;
			game = false;
		}

		if (sevenxo == "x" && fourxo == "x" && onexo == "x")
		{
			cout << "\nYou win!";
			cin >> onexo;
			game = false;
		}

		if (sevenxo == "o" && fourxo == "o" && onexo == "o")
		{
			cout << "\nYou lost...";
			cin >> onexo;
			game = false;
		}

		if (eightxo == "x" && fivexo == "x" && twoxo == "x")
		{
			cout << "\nYou win!";
			cin >> onexo;
			game = false;
		}

		if (eightxo == "o" && fivexo == "o" && twoxo == "o")
		{
			cout << "\nYou lost...";
			cin >> onexo;
			game = false;
		}

		if (ninexo == "x" && sixxo == "x" && threexo == "x")
		{
			cout << "\nYou win!";
			cin >> onexo;
			game = false;
		}

		if (ninexo == "o" && sixxo == "o" && threexo == "o")
		{
			cout << "\nYou lost...";
			cin >> onexo;
			game = false;
		}

		if (sevenxo == "x" && fivexo == "x" && threexo == "x")
		{
			cout << "\nYou win!";
			cin >> onexo;
			game = false;
		}

		if (sevenxo == "o" && fivexo == "o" && threexo == "o")
		{
			cout << "\nYou lost...";
			cin >> onexo;
			game = false;
		}

		if (onexo == "x" && fivexo == "x" && ninexo == "x")
		{
			cout << "\nYou win!";
			cin >> onexo;
			game = false;
		}

		if (onexo == "o" && fivexo == "o" && ninexo == "o")
		{
			cout << "\nYou lost...";
			cin >> onexo;
			game = false;
		}

		if (one == "taken" && two == "taken" && three == "taken" && four == "taken" && five == "taken" && six == "taken" && seven == "taken" && eight == "taken" && nine == "taken")
		{
			cout << "\nStalemate.";
			cin >> onexo;
			game = false;
		}

		if (game == true)
		{
			cout << "\nTheir move.\n\n";

			if (difficulty == 1)
			{
				random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));

				int ochoice = random_integer;

				string oturn = "true";

				while (oturn == "true")
				{
					if (ochoice == 1)
					{
						if (one != "taken")
						{
							one = "taken";
							onexo = "o";
							oturn = "false";

						}
						else if (one == "taken" && oturn == "true")
						{
							random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
							ochoice = random_integer;
						}
					}

					if (ochoice == 2)
					{
						if (two != "taken")
						{
							two = "taken";
							twoxo = "o";
							oturn = "false";
						}
						else if (two == "taken" && oturn == "true")
						{
							random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
							ochoice = random_integer;
						}
					}

					if (ochoice == 3)
					{
						if (three != "taken")
						{
							three = "taken";
							threexo = "o";
							oturn = "false";
						}
						else if (three == "taken" && oturn == "true")
						{
							random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
							ochoice = random_integer;
						}
					}

					if (ochoice == 4)
					{
						if (four != "taken")
						{
							four = "taken";
							fourxo = "o";
							oturn = "false";
						}
						else if (four == "taken" && oturn == "true")
						{
							random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
							ochoice = random_integer;
						}
					}

					if (ochoice == 5)
					{
						if (five != "taken")
						{
							five = "taken";
							fivexo = "o";
							oturn = "false";
						}
						else if (five == "taken" && oturn == "true")
						{
							random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
							ochoice = random_integer;
						}
					}

					if (ochoice == 6)
					{
						if (six != "taken")
						{
							six = "taken";
							sixxo = "o";
							oturn = "false";
						}
						else if (six == "taken" && oturn == "true")
						{
							random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
							ochoice = random_integer;
						}
					}

					if (ochoice == 7)
					{
						if (seven != "taken")
						{
							seven = "taken";
							sevenxo = "o";
							oturn = "false";
						}
						else if (seven == "taken" && oturn == "true")
						{
							random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
							ochoice = random_integer;
						}
					}

					if (ochoice == 8)
					{
						if (eight != "taken")
						{
							eight = "taken";
							eightxo = "o";
							oturn = "false";
						}
						else if (eight == "taken" && oturn == "true")
						{
							random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
							ochoice = random_integer;
						}
					}

					if (ochoice == 9)
					{
						if (nine != "taken")
						{
							nine = "taken";
							ninexo = "o";
							oturn = "false";
						}
						else if (nine == "taken" && oturn == "true")
						{
							random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
							ochoice = random_integer;
						}
					}
				}
			}

			if (difficulty == 2)
			{
				string oturn = "true";

				string random = "false";

				while (oturn == "true")
				{
					if ((onexo == "x" && fourxo == "x" && sevenxo == "open") || (onexo == "o" && fourxo == "o" && sevenxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								sevenxo = "o";
								oturn = "false";
								seven = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((twoxo == "x" && fivexo == "x" && eightxo == "open") || (twoxo == "o" && fivexo == "o" && eightxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								eightxo = "o";
								oturn = "false";
								eight = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((threexo == "x" && sixxo == "x" && ninexo == "open") || (threexo == "o" && sixxo == "o" && ninexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								ninexo = "o";
								oturn = "false";
								nine = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((sevenxo == "x" && fourxo == "x" && onexo == "open") || (sevenxo == "o" && fourxo == "o" && onexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								onexo = "o";
								oturn = "false";
								one = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((eightxo == "x" && fivexo == "x" && twoxo == "open") || (eightxo == "o" && fivexo == "o" && twoxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								twoxo = "o";
								oturn = "false";
								two = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((ninexo == "x" && sixxo == "x" && threexo == "open") || (ninexo == "o" && sixxo == "o" && threexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								threexo = "o";
								oturn = "false";
								three = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((sevenxo == "x" && eightxo == "x" && ninexo == "open") || (sevenxo == "o" && eightxo == "o" && ninexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								ninexo = "o";
								oturn = "false";
								nine = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((fourxo == "x" && fivexo == "x" && sixxo == "open") || (fourxo == "o" && fivexo == "o" && sixxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								sixxo = "o";
								oturn = "false";
								six = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((onexo == "x" && twoxo == "x" && threexo == "open") || (onexo == "o" && twoxo == "o" && threexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								threexo = "o";
								oturn = "false";
								three = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((ninexo == "x" && eightxo == "x" && sevenxo == "open") || (ninexo == "o" && eightxo == "o" && sevenxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								sevenxo = "o";
								oturn = "false";
								seven = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((sixxo == "x" && fivexo == "x" && fourxo == "open") || (sixxo == "o" && fivexo == "o" && fourxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								fourxo = "o";
								oturn = "false";
								four = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((threexo == "x" && twoxo == "x" && onexo == "open") || (threexo == "o" && twoxo == "o" && onexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								onexo = "o";
								oturn = "false";
								one = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((sevenxo == "x" && ninexo == "x" && eightxo == "open") || (sevenxo == "o" && ninexo == "o" && eightxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								eightxo = "o";
								oturn = "false";
								eight = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((fourxo == "x" && sixxo == "x" && fivexo == "open") || (fourxo == "o" && sixxo == "o" && fivexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								fivexo = "o";
								oturn = "false";
								five = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((onexo == "x" && threexo == "x" && twoxo == "open") || (onexo == "o" && threexo == "o" && twoxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								twoxo = "o";
								oturn = "false";
								two = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((sevenxo == "x" && onexo == "x" && fourxo == "open") || (sevenxo == "o" && onexo == "o" && fourxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								fourxo = "o";
								oturn = "false";
								four = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((eightxo == "x" && twoxo == "x" && fivexo == "open") || (eightxo == "o" && twoxo == "o" && fivexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								fivexo = "o";
								oturn = "false";
								five = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((ninexo == "x" && threexo == "x" && sixxo == "open") || (ninexo == "o" && threexo == "o" && sixxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								sixxo = "o";
								oturn = "false";
								six = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((sevenxo == "x" && fivexo == "x" && threexo == "open") || (sevenxo == "o" && fivexo == "o" && threexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								threexo = "o";
								oturn = "false";
								three = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((ninexo == "x" && fivexo == "x" && onexo == "open") || (ninexo == "o" && fivexo == "o" && onexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								onexo = "o";
								oturn = "false";
								one = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((onexo == "x" && fivexo == "x" && ninexo == "open") || (onexo == "o" && fivexo == "o" && ninexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								ninexo = "o";
								oturn = "false";
								nine = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((threexo == "x" && fivexo == "x" && sevenxo == "open") || (threexo == "o" && fivexo == "o" && sevenxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								sevenxo = "o";
								oturn = "false";
								seven = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((sevenxo == "x" && threexo == "x" && fivexo == "open") || (sevenxo == "o" && threexo == "o" && fivexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								fivexo = "o";
								oturn = "false";
								five = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if ((ninexo == "x" && onexo == "x" && fivexo == "open") || (ninexo == "o" && onexo == "o" && fivexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								onexo = "o";
								oturn = "false";
								one = "taken";
							}

							if (random_integer == 2)
							{
								random = "false";
							}
						}
					}

					if (random == "false" && oturn == "true")
					{
						random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));

						int ochoice = random_integer;

						while (oturn == "true")
						{
							if (ochoice == 1)
							{
								if (one != "taken")
								{
									one = "taken";
									onexo = "o";
									oturn = "false";

								}
								else if (one == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 2)
							{
								if (two != "taken")
								{
									two = "taken";
									twoxo = "o";
									oturn = "false";
								}
								else if (two == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 3)
							{
								if (three != "taken")
								{
									three = "taken";
									threexo = "o";
									oturn = "false";
								}
								else if (three == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 4)
							{
								if (four != "taken")
								{
									four = "taken";
									fourxo = "o";
									oturn = "false";
								}
								else if (four == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 5)
							{
								if (five != "taken")
								{
									five = "taken";
									fivexo = "o";
									oturn = "false";
								}
								else if (five == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 6)
							{
								if (six != "taken")
								{
									six = "taken";
									sixxo = "o";
									oturn = "false";
								}
								else if (six == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 7)
							{
								if (seven != "taken")
								{
									seven = "taken";
									sevenxo = "o";
									oturn = "false";
								}
								else if (seven == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 8)
							{
								if (eight != "taken")
								{
									eight = "taken";
									eightxo = "o";
									oturn = "false";
								}
								else if (eight == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 9)
							{
								if (nine != "taken")
								{
									nine = "taken";
									ninexo = "o";
									oturn = "false";
								}
								else if (nine == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}
						}
					}
				}
			}

			if (difficulty == 3)
			{
				string oturn = "true";

				string random = "false";

				while (oturn == "true")
				{
					if ((onexo == "x" && fourxo == "x" && sevenxo == "open") || (onexo == "o" && fourxo == "o" && sevenxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(4 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								sevenxo = "o";
								oturn = "false";
								seven = "taken";
							}

							if (random_integer == 2)
							{
								sevenxo = "o";
								oturn = "false";
								seven = "taken";
							}

							if (random_integer == 3)
							{
								sevenxo = "o";
								oturn = "false";
								seven = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((twoxo == "x" && fivexo == "x" && eightxo == "open") || (twoxo == "o" && fivexo == "o" && eightxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								eightxo = "o";
								oturn = "false";
								eight = "taken";
							}

							if (random_integer == 2)
							{
								eightxo = "o";
								oturn = "false";
								eight = "taken";
							}

							if (random_integer == 3)
							{
								eightxo = "o";
								oturn = "false";
								eight = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((threexo == "x" && sixxo == "x" && ninexo == "open") || (threexo == "o" && sixxo == "o" && ninexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								ninexo = "o";
								oturn = "false";
								nine = "taken";
							}

							if (random_integer == 2)
							{
								ninexo = "o";
								oturn = "false";
								nine = "taken";
							}

							if (random_integer == 3)
							{
								ninexo = "o";
								oturn = "false";
								nine = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((sevenxo == "x" && fourxo == "x" && onexo == "open") || (sevenxo == "o" && fourxo == "o" && onexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								onexo = "o";
								oturn = "false";
								one = "taken";
							}

							if (random_integer == 2)
							{
								onexo = "o";
								oturn = "false";
								one = "taken";
							}

							if (random_integer == 3)
							{
								onexo = "o";
								oturn = "false";
								one = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((eightxo == "x" && fivexo == "x" && twoxo == "open") || (eightxo == "o" && fivexo == "o" && twoxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								twoxo = "o";
								oturn = "false";
								two = "taken";
							}

							if (random_integer == 2)
							{
								twoxo = "o";
								oturn = "false";
								two = "taken";
							}

							if (random_integer == 3)
							{
								twoxo = "o";
								oturn = "false";
								two = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((ninexo == "x" && sixxo == "x" && threexo == "open") || (ninexo == "o" && sixxo == "o" && threexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								threexo = "o";
								oturn = "false";
								three = "taken";
							}

							if (random_integer == 2)
							{
								threexo = "o";
								oturn = "false";
								three = "taken";
							}

							if (random_integer == 3)
							{
								threexo = "o";
								oturn = "false";
								three = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((sevenxo == "x" && eightxo == "x" && ninexo == "open") || (sevenxo == "o" && eightxo == "o" && ninexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								ninexo = "o";
								oturn = "false";
								nine = "taken";
							}

							if (random_integer == 2)
							{
								ninexo = "o";
								oturn = "false";
								nine = "taken";
							}

							if (random_integer == 3)
							{
								ninexo = "o";
								oturn = "false";
								nine = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((fourxo == "x" && fivexo == "x" && sixxo == "open") || (fourxo == "o" && fivexo == "o" && sixxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								sixxo = "o";
								oturn = "false";
								six = "taken";
							}

							if (random_integer == 2)
							{
								sixxo = "o";
								oturn = "false";
								six = "taken";
							}

							if (random_integer == 3)
							{
								sixxo = "o";
								oturn = "false";
								six = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((onexo == "x" && twoxo == "x" && threexo == "open") || (onexo == "o" && twoxo == "o" && threexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								threexo = "o";
								oturn = "false";
								three = "taken";
							}

							if (random_integer == 2)
							{
								threexo = "o";
								oturn = "false";
								three = "taken";
							}

							if (random_integer == 3)
							{
								threexo = "o";
								oturn = "false";
								three = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((ninexo == "x" && eightxo == "x" && sevenxo == "open") || (ninexo == "o" && eightxo == "o" && sevenxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								sevenxo = "o";
								oturn = "false";
								seven = "taken";
							}

							if (random_integer == 2)
							{
								sevenxo = "o";
								oturn = "false";
								seven = "taken";
							}

							if (random_integer == 3)
							{
								sevenxo = "o";
								oturn = "false";
								seven = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((sixxo == "x" && fivexo == "x" && fourxo == "open") || (sixxo == "o" && fivexo == "o" && fourxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								fourxo = "o";
								oturn = "false";
								four = "taken";
							}

							if (random_integer == 2)
							{
								fourxo = "o";
								oturn = "false";
								four = "taken";
							}

							if (random_integer == 3)
							{
								fourxo = "o";
								oturn = "false";
								four = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((threexo == "x" && twoxo == "x" && onexo == "open") || (threexo == "o" && twoxo == "o" && onexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								onexo = "o";
								oturn = "false";
								one = "taken";
							}

							if (random_integer == 2)
							{
								onexo = "o";
								oturn = "false";
								one = "taken";
							}

							if (random_integer == 3)
							{
								onexo = "o";
								oturn = "false";
								one = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((sevenxo == "x" && ninexo == "x" && eightxo == "open") || (sevenxo == "o" && ninexo == "o" && eightxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								eightxo = "o";
								oturn = "false";
								eight = "taken";
							}

							if (random_integer == 2)
							{
								eightxo = "o";
								oturn = "false";
								eight = "taken";
							}

							if (random_integer == 3)
							{
								eightxo = "o";
								oturn = "false";
								eight = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((fourxo == "x" && sixxo == "x" && fivexo == "open") || (fourxo == "o" && sixxo == "o" && fivexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								fivexo = "o";
								oturn = "false";
								five = "taken";
							}

							if (random_integer == 2)
							{
								fivexo = "o";
								oturn = "false";
								five = "taken";
							}

							if (random_integer == 3)
							{
								fivexo = "o";
								oturn = "false";
								five = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((onexo == "x" && threexo == "x" && twoxo == "open") || (onexo == "o" && threexo == "o" && twoxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								twoxo = "o";
								oturn = "false";
								two = "taken";
							}

							if (random_integer == 2)
							{
								twoxo = "o";
								oturn = "false";
								two = "taken";
							}

							if (random_integer == 3)
							{
								twoxo = "o";
								oturn = "false";
								two = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((sevenxo == "x" && onexo == "x" && fourxo == "open") || (sevenxo == "o" && onexo == "o" && fourxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								fourxo = "o";
								oturn = "false";
								four = "taken";
							}

							if (random_integer == 2)
							{
								fourxo = "o";
								oturn = "false";
								four = "taken";
							}

							if (random_integer == 3)
							{
								fourxo = "o";
								oturn = "false";
								four = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((eightxo == "x" && twoxo == "x" && fivexo == "open") || (eightxo == "o" && twoxo == "o" && fivexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								fivexo = "o";
								oturn = "false";
								five = "taken";
							}

							if (random_integer == 2)
							{
								fivexo = "o";
								oturn = "false";
								five = "taken";
							}

							if (random_integer == 3)
							{
								fivexo = "o";
								oturn = "false";
								five = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((ninexo == "x" && threexo == "x" && sixxo == "open") || (ninexo == "o" && threexo == "o" && sixxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								sixxo = "o";
								oturn = "false";
								six = "taken";
							}

							if (random_integer == 2)
							{
								sixxo = "o";
								oturn = "false";
								six = "taken";
							}

							if (random_integer == 3)
							{
								sixxo = "o";
								oturn = "false";
								six = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((sevenxo == "x" && fivexo == "x" && threexo == "open") || (sevenxo == "o" && fivexo == "o" && threexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								threexo = "o";
								oturn = "false";
								three = "taken";
							}

							if (random_integer == 2)
							{
								threexo = "o";
								oturn = "false";
								three = "taken";
							}

							if (random_integer == 3)
							{
								threexo = "o";
								oturn = "false";
								three = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((ninexo == "x" && fivexo == "x" && onexo == "open") || (ninexo == "o" && fivexo == "o" && onexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								onexo = "o";
								oturn = "false";
								one = "taken";
							}

							if (random_integer == 2)
							{
								onexo = "o";
								oturn = "false";
								one = "taken";
							}

							if (random_integer == 3)
							{
								onexo = "o";
								oturn = "false";
								one = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((onexo == "x" && fivexo == "x" && ninexo == "open") || (onexo == "o" && fivexo == "o" && ninexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								ninexo = "o";
								oturn = "false";
								nine = "taken";
							}

							if (random_integer == 2)
							{
								ninexo = "o";
								oturn = "false";
								nine = "taken";
							}

							if (random_integer == 3)
							{
								ninexo = "o";
								oturn = "false";
								nine = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((threexo == "x" && fivexo == "x" && sevenxo == "open") || (threexo == "o" && fivexo == "o" && sevenxo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								sevenxo = "o";
								oturn = "false";
								seven = "taken";
							}

							if (random_integer == 2)
							{
								sevenxo = "o";
								oturn = "false";
								seven = "taken";
							}

							if (random_integer == 3)
							{
								sevenxo = "o";
								oturn = "false";
								seven = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((sevenxo == "x" && threexo == "x" && fivexo == "open") || (sevenxo == "o" && threexo == "o" && fivexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								fivexo = "o";
								oturn = "false";
								five = "taken";
							}

							if (random_integer == 2)
							{
								fivexo = "o";
								oturn = "false";
								five = "taken";
							}

							if (random_integer == 3)
							{
								fivexo = "o";
								oturn = "false";
								five = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if ((ninexo == "x" && onexo == "x" && fivexo == "open") || (ninexo == "o" && onexo == "o" && fivexo == "open"))
					{
						if (oturn == "true")
						{
							random_integer = 1 + int(2 * rand() / (RAND_MAX + 1.0));

							if (random_integer == 1)
							{
								onexo = "o";
								oturn = "false";
								one = "taken";
							}

							if (random_integer == 2)
							{
								fivexo = "o";
								oturn = "false";
								five = "taken";
							}

							if (random_integer == 3)
							{
								fivexo = "o";
								oturn = "false";
								five = "taken";
							}

							if (random_integer == 4)
							{
								random = "false";
							}
						}
					}

					if (random == "false" && oturn == "true")
					{
						random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));

						int ochoice = random_integer;

						while (oturn == "true")
						{
							if (ochoice == 1)
							{
								if (one != "taken")
								{
									one = "taken";
									onexo = "o";
									oturn = "false";

								}
								else if (one == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 2)
							{
								if (two != "taken")
								{
									two = "taken";
									twoxo = "o";
									oturn = "false";
								}
								else if (two == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 3)
							{
								if (three != "taken")
								{
									three = "taken";
									threexo = "o";
									oturn = "false";
								}
								else if (three == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 4)
							{
								if (four != "taken")
								{
									four = "taken";
									fourxo = "o";
									oturn = "false";
								}
								else if (four == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 5)
							{
								if (five != "taken")
								{
									five = "taken";
									fivexo = "o";
									oturn = "false";
								}
								else if (five == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 6)
							{
								if (six != "taken")
								{
									six = "taken";
									sixxo = "o";
									oturn = "false";
								}
								else if (six == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 7)
							{
								if (seven != "taken")
								{
									seven = "taken";
									sevenxo = "o";
									oturn = "false";
								}
								else if (seven == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 8)
							{
								if (eight != "taken")
								{
									eight = "taken";
									eightxo = "o";
									oturn = "false";
								}
								else if (eight == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}

							if (ochoice == 9)
							{
								if (nine != "taken")
								{
									nine = "taken";
									ninexo = "o";
									oturn = "false";
								}
								else if (nine == "taken" && oturn == "true")
								{
									random_integer = 1 + int(9 * rand() / (RAND_MAX + 1.0));
									ochoice = random_integer;
								}
							}
						}
					}
				}
			}

			for (i = 0; i < 9; i++)
			{
				if (i == 1)
				{
					for (j = 0; j < 15; j++)
					{
						if (j == 1)
						{
							if (sevenxo == "x")
							{
								cout << "x";
							}

							if (sevenxo == "o")
							{
								cout << "o";
							}

							else if (sevenxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 2)
						{
							if (sevenxo == "x")
							{
								cout << "x";
							}

							if (sevenxo == "o")
							{
								cout << "o";
							}

							else if (sevenxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 6)
						{
							if (eightxo == "x")
							{
								cout << "x";
							}

							if (eightxo == "o")
							{
								cout << "o";
							}

							else if (eightxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 7)
						{
							if (eightxo == "x")
							{
								cout << "x";
							}

							if (eightxo == "o")
							{
								cout << "o";
							}

							else if (eightxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 11)
						{
							if (ninexo == "x")
							{
								cout << "x";
							}

							if (ninexo == "o")
							{
								cout << "o";
							}

							else if (ninexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 12)
						{
							if (ninexo == "x")
							{
								cout << "x";
							}

							if (ninexo == "o")
							{
								cout << "o";
							}

							else if (ninexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 4)
						{
							cout << "|";
						}

						if (j == 9)
						{
							cout << "|";
						}

						if (j == 14)
						{
							cout << "\n";
						}

						if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
						{
							cout << " ";
						}
					}
				}

				if (i == 2)
				{
					for (j = 0; j < 15; j++)
					{
						if (j == 1)
						{
							if (sevenxo == "x")
							{
								cout << "x";
							}

							if (sevenxo == "o")
							{
								cout << "o";
							}

							else if (sevenxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 2)
						{
							if (sevenxo == "x")
							{
								cout << "x";
							}

							if (sevenxo == "o")
							{
								cout << "o";
							}

							else if (sevenxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 6)
						{
							if (eightxo == "x")
							{
								cout << "x";
							}

							if (eightxo == "o")
							{
								cout << "o";
							}

							else if (eightxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 7)
						{
							if (eightxo == "x")
							{
								cout << "x";
							}

							if (eightxo == "o")
							{
								cout << "o";
							}

							else if (eightxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 11)
						{
							if (ninexo == "x")
							{
								cout << "x";
							}

							if (ninexo == "o")
							{
								cout << "o";
							}

							else if (ninexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 12)
						{
							if (ninexo == "x")
							{
								cout << "x";
							}

							if (ninexo == "o")
							{
								cout << "o";
							}

							else if (ninexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 4)
						{
							cout << "|";
						}

						if (j == 9)
						{
							cout << "|";
						}

						if (j == 14)
						{
							cout << "\n";
						}

						if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
						{
							cout << " ";
						}
					}
				}

				if (i == 3)
				{
					for (j = 0; j < 15; j++)
					{
						if (j != 14)
						{
							cout << "-";
						}

						if (j == 14)
						{
							cout << "\n";
						}
					}
				}

				if (i == 4)
				{
					for (j = 0; j < 15; j++)
					{
						if (j == 1)
						{
							if (fourxo == "x")
							{
								cout << "x";
							}

							if (fourxo == "o")
							{
								cout << "o";
							}

							else if (fourxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 2)
						{
							if (fourxo == "x")
							{
								cout << "x";
							}

							if (fourxo == "o")
							{
								cout << "o";
							}

							else if (fourxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 6)
						{
							if (fivexo == "x")
							{
								cout << "x";
							}

							if (fivexo == "o")
							{
								cout << "o";
							}

							else if (fivexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 7)
						{
							if (fivexo == "x")
							{
								cout << "x";
							}

							if (fivexo == "o")
							{
								cout << "o";
							}

							else if (fivexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 11)
						{
							if (sixxo == "x")
							{
								cout << "x";
							}

							if (sixxo == "o")
							{
								cout << "o";
							}

							else if (sixxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 12)
						{
							if (sixxo == "x")
							{
								cout << "x";
							}

							if (sixxo == "o")
							{
								cout << "o";
							}

							else if (sixxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 4)
						{
							cout << "|";
						}

						if (j == 9)
						{
							cout << "|";
						}

						if (j == 14)
						{
							cout << "\n";
						}

						if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
						{
							cout << " ";
						}
					}
				}

				if (i == 5)
				{
					for (j = 0; j < 15; j++)
					{
						if (j == 1)
						{
							if (fourxo == "x")
							{
								cout << "x";
							}

							if (fourxo == "o")
							{
								cout << "o";
							}

							else if (fourxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 2)
						{
							if (fourxo == "x")
							{
								cout << "x";
							}

							if (fourxo == "o")
							{
								cout << "o";
							}

							else if (fourxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 6)
						{
							if (fivexo == "x")
							{
								cout << "x";
							}

							if (fivexo == "o")
							{
								cout << "o";
							}

							else if (fivexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 7)
						{
							if (fivexo == "x")
							{
								cout << "x";
							}

							if (fivexo == "o")
							{
								cout << "o";
							}

							else if (fivexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 11)
						{
							if (sixxo == "x")
							{
								cout << "x";
							}

							if (sixxo == "o")
							{
								cout << "o";
							}

							else if (sixxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 12)
						{
							if (sixxo == "x")
							{
								cout << "x";
							}

							if (sixxo == "o")
							{
								cout << "o";
							}

							else if (sixxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 4)
						{
							cout << "|";
						}

						if (j == 9)
						{
							cout << "|";
						}

						if (j == 14)
						{
							cout << "\n";
						}

						if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
						{
							cout << " ";
						}
					}
				}

				if (i == 6)
				{
					for (j = 0; j < 15; j++)
					{
						if (j != 14)
						{
							cout << "-";
						}

						if (j == 14)
						{
							cout << "\n";
						}
					}
				}

				if (i == 7)
				{
					for (j = 0; j < 15; j++)
					{
						if (j == 1)
						{
							if (onexo == "x")
							{
								cout << "x";
							}

							if (onexo == "o")
							{
								cout << "o";
							}

							else if (onexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 2)
						{
							if (onexo == "x")
							{
								cout << "x";
							}

							if (onexo == "o")
							{
								cout << "o";
							}

							else if (onexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 6)
						{
							if (twoxo == "x")
							{
								cout << "x";
							}

							if (twoxo == "o")
							{
								cout << "o";
							}

							else if (twoxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 7)
						{
							if (twoxo == "x")
							{
								cout << "x";
							}

							if (twoxo == "o")
							{
								cout << "o";
							}

							else if (twoxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 11)
						{
							if (threexo == "x")
							{
								cout << "x";
							}

							if (threexo == "o")
							{
								cout << "o";
							}

							else if (threexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 12)
						{
							if (threexo == "x")
							{
								cout << "x";
							}

							if (threexo == "o")
							{
								cout << "o";
							}

							else if (threexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 4)
						{
							cout << "|";
						}

						if (j == 9)
						{
							cout << "|";
						}

						if (j == 14)
						{
							cout << "\n";
						}

						if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
						{
							cout << " ";
						}
					}
				}

				if (i == 8)
				{
					for (j = 0; j < 15; j++)
					{
						if (j == 1)
						{
							if (onexo == "x")
							{
								cout << "x";
							}

							if (onexo == "o")
							{
								cout << "o";
							}

							else if (onexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 2)
						{
							if (onexo == "x")
							{
								cout << "x";
							}

							if (onexo == "o")
							{
								cout << "o";
							}

							else if (onexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 6)
						{
							if (twoxo == "x")
							{
								cout << "x";
							}

							if (twoxo == "o")
							{
								cout << "o";
							}

							else if (twoxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 7)
						{
							if (twoxo == "x")
							{
								cout << "x";
							}

							if (twoxo == "o")
							{
								cout << "o";
							}

							else if (twoxo == "open")
							{
								cout << " ";
							}
						}

						if (j == 11)
						{
							if (threexo == "x")
							{
								cout << "x";
							}

							if (threexo == "o")
							{
								cout << "o";
							}

							else if (threexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 12)
						{
							if (threexo == "x")
							{
								cout << "x";
							}

							if (threexo == "o")
							{
								cout << "o";
							}

							else if (threexo == "open")
							{
								cout << " ";
							}
						}

						if (j == 4)
						{
							cout << "|";
						}

						if (j == 9)
						{
							cout << "|";
						}

						if (j == 14)
						{
							cout << "\n";
						}

						if (j != 1 && j != 2 && j != 4 && j != 9 && j != 14 && j != 6 && j != 7 && j != 11 && j != 12)
						{
							cout << " ";
						}
					}
				}
			}

			if (onexo == "x" && twoxo == "x" && threexo == "x")
			{
				cout << "You win!";
				cin >> onexo;
				game = false;
			}

			if (onexo == "o" && twoxo == "o" && threexo == "o")
			{
				cout << "You lost...";
				cin >> onexo;
				game = false;
			}

			if (fourxo == "x" && fivexo == "x" && sixxo == "x")
			{
				cout << "\nYou win!";
				cin >> onexo;
			}

			if (fourxo == "o" && fivexo == "o" && sixxo == "o")
			{
				cout << "\nYou lost...";
				cin >> onexo;
				game = false;
			}

			if (sevenxo == "x" && eightxo == "x" && ninexo == "x")
			{
				cout << "\nYou win!";
				cin >> onexo;
				game = false;
			}

			if (sevenxo == "o" && eightxo == "o" && ninexo == "o")
			{
				cout << "\nYou lost...";
				cin >> onexo;
				game = false;
			}

			if (sevenxo == "x" && fourxo == "x" && onexo == "x")
			{
				cout << "\nYou win!";
				cin >> onexo;
				game = false;
			}

			if (sevenxo == "o" && fourxo == "o" && onexo == "o")
			{
				cout << "\nYou lost...";
				cin >> onexo;
				game = false;
			}

			if (eightxo == "x" && fivexo == "x" && twoxo == "x")
			{
				cout << "\nYou win!";
				cin >> onexo;
				game = false;
			}

			if (eightxo == "o" && fivexo == "o" && twoxo == "o")
			{
				cout << "\nYou lost...";
				cin >> onexo;
				game = false;
			}

			if (ninexo == "x" && sixxo == "x" && threexo == "x")
			{
				cout << "\nYou win!";
				cin >> onexo;
				game = false;
			}

			if (ninexo == "o" && sixxo == "o" && threexo == "o")
			{
				cout << "\nYou lost...";
				cin >> onexo;
				game = false;
			}

			if (sevenxo == "x" && fivexo == "x" && threexo == "x")
			{
				cout << "\nYou win!";
				cin >> onexo;
				game = false;
			}

			if (sevenxo == "o" && fivexo == "o" && threexo == "o")
			{
				cout << "\nYou lost...";
				cin >> onexo;
				game = false;
			}

			if (onexo == "x" && fivexo == "x" && ninexo == "x")
			{
				cout << "\nYou win!";
				cin >> onexo;
				game = false;
			}

			if (onexo == "o" && fivexo == "o" && ninexo == "o")
			{
				cout << "\nYou lost...";
				cin >> onexo;
				game = false;
			}

			if (one == "taken" && two == "taken" && three == "taken" && four == "taken" && five == "taken" && six == "taken" && seven == "taken" && eight == "taken" && nine == "taken")
			{
				cout << "\nStalemate.";
				cin >> onexo;
				game = false;
			}
		}
	}
    return 0;
}

