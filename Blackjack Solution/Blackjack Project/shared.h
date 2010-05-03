#include <string>
#include <ctime>
using namespace std;

struct Deck {
	/* holds the location of the cards.
	 * 0 = still in the deck
	 * 1 = dealer has it
	 * 2 = player1 has it
	 * 3 = player2 has it
	 */
	int cards[4][13];
	
	//holds the names of the cards
	string names[4][13];

	//constructor (initializes arrays with defaults)
	Deck(void) {
		string prefix[4] = {"clubs", "diamonds", "hearts", "spades"};
		string suffix[13] = {
			"ace", "two", "three", "four", "five",
			"six", "seven", "eight", "nine", "ten",
			"jack", "queen", "king"
		};
		for (int i = 0; i < 4; i++) {
			for (int x = 0; x < 13; x++) {
				names[i][x] = suffix[x] + " of " + prefix[i];
				cards[i][x] = 0;
			}
		}
	}
};

static int random(int lowerbound, int upperbound) {
	int generated = 0;
	srand(static_cast<int>(time(0)));
	generated = lowerbound + rand() % (upperbound - lowerbound + 1);
	return generated;
}