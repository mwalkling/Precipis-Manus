#include "stdafx.h"
#include "shared.h"
#include "mike.h"

void Mike::dealCards(int cards[4][13]) {
	//deal cards to player1
	cards[random(0, 3)][random(0, 12)] = 2;
	cards[random(0, 3)][random(0, 12)] = 2;

	//deal cards to dealer
	cards[random(0, 3)][random(0, 12)] = 1;
	cards[random(0, 3)][random(0, 12)] = 1;
}