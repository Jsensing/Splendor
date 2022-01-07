//Splendor game ATTEMPTED to be made into a c++ program
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Cards {
private:
	string gemGiven;
	int vpValue = 0;
	int rubyCost = 0;
	int saphireCost = 0;
	int diamondCost = 0;
	int emeraldCost = 0;
	int onyxCost = 0;
public:
	Cards(int vpValue, int rubyCost, int saphireCost, int diamondCost, int emeraldCost, int onyxCost, string gemGiven) {
		this->vpValue = vpValue;
		this->rubyCost = rubyCost;
		this->saphireCost = saphireCost;
		this->diamondCost = diamondCost;
		this->emeraldCost = emeraldCost;
		this->onyxCost = onyxCost;
		this->gemGiven = gemGiven;
	}

	int getVpValue() {
		return vpValue;
	}

	int getRubyCost() {
		return rubyCost;
	}

	int getSaphireCost() {
		return saphireCost;
	}

	int getDiamondCost() {
		return diamondCost;
	}

	int getEmeraldCost() {
		return emeraldCost;
	}

	int getOnyxCost() {
		return onyxCost;
	}

	void setRubyCost(int value) {
		this->rubyCost += value;
	}

	void setSaphireCost(int value) {
		this->saphireCost += value;
	}

	void setDiamondCost(int value) {
		this->diamondCost += value;
	}

	void setEmeraldCost(int value) {
		this->emeraldCost += value;
	}

	void setOnyxCost(int value) {
		this->onyxCost += value;
	}

	string getGemGiven() {
		return gemGiven;
	}
};

class Token {
private:
	string tokenName;
	int tokenValue = 1;
public:
	Token(string name) {
		this->tokenName = name;
	}

	string getTokenName(){
		return tokenName;
	}
};

class Player {
private:
	int vpTotal;
	int rubyValue;
	int saphireValue;
	int diamondValue;
	int emeraldValue;
	int onyxValue;
	vector<Token> tokenHand;
	vector<Cards> cardsOnField;
	vector<Cards> reservedCards;
public:
	Player() {
		this->vpTotal = 0;
		this->rubyValue = 0;
		this->saphireValue = 0;
		this->diamondValue = 0;
		this->emeraldValue = 0;
		this->onyxValue = 0;
	}

	void setRubyValue(int value) {
		this->rubyValue += value;
	}

	void setSaphireValue(int value) {
		this->saphireValue += value;
	}

	void setDiamondValue(int value) {
		this->diamondValue += value;
	}

	void setEmeraldValue(int value) {
		this->emeraldValue += value;
	}

	void setOnyxValue(int value) {
		this->onyxValue += value;
	}

	void setVpTotal(int value) {
		this->vpTotal += value;
	}

	int getRubyValue() {
		return rubyValue;
	}

	int getSaphireValue() {
		return saphireValue;
	}

	int getDiamondValue() {
		return diamondValue;
	}

	int getEmeraldValue() {
		return emeraldValue;
	}

	int getOnyxValue() {
		return onyxValue;
	}

	int getVpTotal() {
		return vpTotal;
	}
};

int main() {
	//deck randomizer
	int deckOneMax = 40;
	int deckTwoMax;
	int deckThreeMax;
	srand(time(0));

	//initialize players
	Player player1;
	Player player2;

	//level 1 cards
	Cards L1Card1(0, 1, 1, 0, 1, 1, "Diamond");
	Cards L1Card2(0, 0, 0, 2, 1, 2, "Ruby");
	Cards L1Card3(0, 0, 3, 1, 1, 0, "Emerald");
	Cards L1Card4(1, 0, 0, 0, 4, 0, "Diamond");
	Cards L1Card5(0, 0, 0, 2, 2, 0, "Onyx");
	Cards L1Card6(0, 0, 1, 1, 1, 1, "Ruby");
	Cards L1Card7(0, 3, 0, 0, 1, 1, "Onyx");
	Cards L1Card8(0, 1, 2, 3, 0, 0, "Onyx");
	Cards L1Card9(0, 2, 1, 0, 0, 2, "Emerald");
	Cards L1Card10(1, 0, 0, 0, 0, 4, "Emerald");
	Cards L1Card11(0, 1, 2, 1, 1, 0, "Onyx");
	Cards L1Card12(0, 0, 0, 0, 3, 0, "Onyx");
	Cards L1Card13(0, 0, 2, 0, 2, 1, "Diamond");
	Cards L1Card14(0, 0, 2, 0, 0, 2, "Diamond");
	Cards L1Card15(0, 1, 1, 1, 0, 2, "Emerald");
	Cards L1Card16(0, 1, 1, 1, 1, 0, "Onyx");
	Cards L1Card17(0, 2, 0, 2, 0, 0, "Ruby");
	Cards L1Card18(0, 0, 3, 0, 0, 0, "Diamond");
	Cards L1Card19(0, 2, 0, 1, 1, 1, "Saphire");
	Cards L1Card20(0, 2, 0, 0, 0, 1, "Diamond");
	Cards L1Card21(0, 1, 1, 1, 0, 1, "Emerald");
	Cards L1Card22(0, 1, 0, 0, 2, 0, "Onyx");
	Cards L1Card23(1, 4, 0, 0, 0, 0, "Saphire");
	Cards L1Card24(0, 0, 0, 0, 2, 2, "Saphire");
	Cards L1Card25(1, 0, 4, 0, 0, 0, "Onyx");
	Cards L1Card26(0, 1, 0, 1, 0, 3, "Ruby");
	Cards L1Card27(0, 1, 1, 0, 3, 0, "Saphire");
	Cards L1Card28(0, 0, 0, 3, 0, 0, "Ruby");
	Cards L1Card29(0, 2, 2, 0, 0, 0, "Emerald");
	Cards L1Card30(0, 0, 2, 3, 0, 1, "Diamond");
	Cards L1Card31(0, 2, 0, 1, 2, 0, "Saphire");
	Cards L1Card32(0, 3, 0, 0, 0, 0, "Emerald");
	Cards L1Card33(0, 0, 1, 2, 0, 0, "Emerald");
	Cards L1Card34(0, 0, 0, 1, 0, 2, "Saphire");
	Cards L1Card35(0, 1, 1, 0, 2, 1, "Diamond");
	Cards L1Card36(0, 0, 0, 0, 0, 3, "Saphire");
	Cards L1Card37(0, 1, 0, 1, 1, 1, "Saphire");
	Cards L1Card38(0, 0, 2, 0, 1, 0, "Ruby");
	Cards L1Card39(1, 0, 0, 4, 0, 0, "Ruby");
	Cards L1Card40(0, 0, 1, 2, 1, 1, "Ruby");

	//ruby tokens
	Token tokenR1("Ruby");
	Token tokenR2("Ruby");
	Token tokenR3("Ruby");
	Token tokenR4("Ruby");

	//saphire tokens
	Token tokenS1("Saphire");
	Token tokenS2("Saphire");
	Token tokenS3("Saphire");
	Token tokenS4("Saphire");

	//diamond tokens
	Token tokenD1("Diamond");
	Token tokenD2("Diamond");
	Token tokenD3("Diamond");
	Token tokenD4("Diamond");

	//emerald tokens
	Token tokenE1("Emerald");
	Token tokenE2("Emerald");
	Token tokenE3("Emerald");
	Token tokenE4("Emerald");

	//onyx tokens
	Token tokenO1("Onyx");
	Token tokenO2("Onyx");
	Token tokenO3("Onyx");
	Token tokenO4("Onyx");
	
	vector<Cards> levelOneDeck{ L1Card1,L1Card2,L1Card3,L1Card4,L1Card5,L1Card6,L1Card7,L1Card8,L1Card9,L1Card10,L1Card11,L1Card12,L1Card13,L1Card14,L1Card15,L1Card16,L1Card17,L1Card18,L1Card19,L1Card20,L1Card21,L1Card22,L1Card23,L1Card24,L1Card25,L1Card26,L1Card27,L1Card28,L1Card29,L1Card30,L1Card31,L1Card32,L1Card33,L1Card34,L1Card35,L1Card36,L1Card37,L1Card38,L1Card39,L1Card40 };
	vector<Token> rubyDeck { tokenR1, tokenR2, tokenR3, tokenR4 };
	vector<Token> saphireDeck { tokenS1, tokenS2, tokenS3, tokenS4 };
	vector<Token> diamondDeck { tokenD1, tokenD2, tokenD3, tokenD4 };
	vector<Token> emeraldDeck { tokenE1, tokenE2, tokenE3, tokenE4 };
	vector<Token> onyxDeck{ tokenO1, tokenO2, tokenO3, tokenO4 };

	//begin game
	cout << "Welcome to Jacob's Splendor 2-player game! I hope you enjoy." << endl << endl;

	for (int i = 0; i < 4; i++) {
		cout << "Random Numer: " << rand() % deckOneMax << endl;
	}

	//player1.setVpTotal(22);
	//player2.setVpTotal(2);

	//do {
	//	cout << "Level 1 Cards: ";

	//} while (player1.getVpTotal() < 21 && player2.getVpTotal() < 21);
}