// Blackjack Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <conio.h>
#include "shared.h"
#include "mike.h"
#include "janis.h"

using namespace std;

int main()
{
	Deck deck;
	cout << "Welcome to Blackjack!";

	Mike::dealCards(deck.cards);
	cout << "\n\nCards have been dealed.";

	cout << ("\n\nPress any key to continue . . ." ) << endl;
    _getch();
	return 0;
}