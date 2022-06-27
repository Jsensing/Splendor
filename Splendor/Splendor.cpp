//Splendor game ATTEMPTED to be made into a c++ program
#include <iostream>
#include <iomanip>
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
	int sapphireCost = 0;
	int diamondCost = 0;
	int emeraldCost = 0;
	int onyxCost = 0;
public:
	Cards(int vpValue, int rubyCost, int sapphireCost, int diamondCost, int emeraldCost, int onyxCost, string gemGiven) {
		this->vpValue = vpValue;
		this->rubyCost = rubyCost;
		this->sapphireCost = sapphireCost;
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
		return sapphireCost;
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
		this->sapphireCost += value;
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
	string name;
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

	void setName(string name) {
		this->name = name;
	}

	string getName() {
		return name;
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

class Noble {
private:
	int vpValue = 0;
	int rubyCost = 0;
	int sapphireCost = 0;
	int diamondCost = 0;
	int emeraldCost = 0;
	int onyxCost = 0;
public:
	Noble(int vpValue, int rubyCost, int sapphireCost, int diamondCost, int emeraldCost, int onyxCost) {
		this->vpValue = vpValue;
		this->rubyCost = rubyCost;
		this->sapphireCost = sapphireCost;
		this->diamondCost = diamondCost;
		this->emeraldCost = emeraldCost;
		this->onyxCost = onyxCost;
	}

	int getVpValue() {
		return vpValue;
	}

	int getRubyCost() {
		return rubyCost;
	}

	int getSapphireCost() {
		return sapphireCost;
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

	void setVpValue(int vpValue) {
		this->vpValue += vpValue;
	}

	void setRubyCost(int rubyCost) {
		this->rubyCost += rubyCost;
	}

	void setSaphireCost(int sapphireCost) {
		this->sapphireCost += sapphireCost;
	}

	void setDiamondCost(int diamondCost) {
		this->diamondCost += diamondCost;
	}

	void setEmeraldCost(int emeraldCost) {
		this->emeraldCost += emeraldCost;
	}

	void setOnyxCost(int onyxCost) {
		this->onyxCost += onyxCost;
	}
};

int main() {

	//deck randomizer
	int deckOneMax = 40;
	int deckTwoMax = 30;
	int deckThreeMax = 20;
	int nobleMax = 10;

	//seed for randomizer
	srand(time(0));

	//initialize players
	string p1Name;
	string p2Name;
	Player player1;
	Player player2;
	int choice;

	//nobles
	Noble noble1(3, 3, 0, 3, 0, 3);
	Noble noble2(3, 3, 3, 0, 3, 0);
	Noble noble3(3, 4, 0, 0, 0, 4);
	Noble noble4(3, 3, 0, 0, 3, 3);
	Noble noble5(3, 4, 0, 0, 4, 0);
	Noble noble6(3, 0, 4, 0, 4, 0);
	Noble noble7(3, 0, 3, 3, 3, 0);
	Noble noble8(3, 0, 0, 4, 0, 4);
	Noble noble9(3, 0, 4, 4, 0, 0);
	Noble noble10(3, 0, 3, 3, 0, 0);

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
	Cards L1Card19(0, 2, 0, 1, 1, 1, "Sapphire");
	Cards L1Card20(0, 2, 0, 0, 0, 1, "Diamond");
	Cards L1Card21(0, 1, 1, 1, 0, 1, "Emerald");
	Cards L1Card22(0, 1, 0, 0, 2, 0, "Onyx");
	Cards L1Card23(1, 4, 0, 0, 0, 0, "Sapphire");
	Cards L1Card24(0, 0, 0, 0, 2, 2, "Sapphire");
	Cards L1Card25(1, 0, 4, 0, 0, 0, "Onyx");
	Cards L1Card26(0, 1, 0, 1, 0, 3, "Ruby");
	Cards L1Card27(0, 1, 1, 0, 3, 0, "Sapphire");
	Cards L1Card28(0, 0, 0, 3, 0, 0, "Ruby");
	Cards L1Card29(0, 2, 2, 0, 0, 0, "Emerald");
	Cards L1Card30(0, 0, 2, 3, 0, 1, "Diamond");
	Cards L1Card31(0, 2, 0, 1, 2, 0, "Sapphire");
	Cards L1Card32(0, 3, 0, 0, 0, 0, "Emerald");
	Cards L1Card33(0, 0, 1, 2, 0, 0, "Emerald");
	Cards L1Card34(0, 0, 0, 1, 0, 2, "Sapphire");
	Cards L1Card35(0, 1, 1, 0, 2, 1, "Diamond");
	Cards L1Card36(0, 0, 0, 0, 0, 3, "Sapphire");
	Cards L1Card37(0, 1, 0, 1, 1, 1, "Sapphire");
	Cards L1Card38(0, 0, 2, 0, 1, 0, "Ruby");
	Cards L1Card39(1, 0, 0, 4, 0, 0, "Ruby");
	Cards L1Card40(0, 0, 1, 2, 1, 1, "Ruby");

	//level 2 cards
	Cards L2Card1(2, 1, 0, 2, 0, 4, "Sapphire");
	Cards L2Card2(1, 3, 2, 0, 2, 0, "Sapphire");
	Cards L2Card3(1, 2, 3, 0, 0, 3, "Ruby");
	Cards L2Card4(1, 2, 0, 0, 3, 2, "Diamond");
	Cards L2Card5(1, 0, 2, 0, 3, 3, "Sapphire");
	Cards L2Card6(2, 4, 0, 0, 1, 2, "Diamond");
	Cards L2Card7(2, 0, 5, 0, 3, 0, "Emerald");
	Cards L2Card8(2, 0, 3, 5, 0, 0, "Sapphire");
	Cards L2Card9(2, 2, 1, 0, 4, 0, "Onyx");
	Cards L2Card10(2, 0, 4, 1, 2, 0, "Ruby");
	Cards L2Card11(2, 5, 0, 0, 0, 3, "Diamond");
	Cards L2Card12(2, 0, 0, 5, 0, 0, "Onyx");
	Cards L2Card13(3, 0, 0, 0, 6, 0, "Emerald");
	Cards L2Card14(3, 0, 0, 0, 0, 6, "Onyx");
	Cards L2Card15(2, 0, 0, 3, 0, 5, "Ruby");
	Cards L2Card16(1, 0, 3, 2, 0, 2, "Emerald");
	Cards L2Card17(2, 0, 2, 4, 0, 1, "Emerald");
	Cards L2Card18(3, 0, 0, 6, 0, 0, "Diamond");
	Cards L2Card19(2, 0, 0, 0, 5, 0, "Emerald");
	Cards L2Card20(2, 5, 0, 0, 0, 0, "Diamond");
	Cards L2Card21(1, 0, 2, 3, 2, 0, "Onyx");
	Cards L2Card22(2, 0, 5, 0, 0, 0, "Sapphire");
	Cards L2Card23(1, 3, 3, 2, 0, 0, "Diamond");
	Cards L2Card24(3, 0, 6, 0, 0, 0, "Sapphire");
	Cards L2Card25(2, 0, 0, 0, 0, 5, "Ruby");
	Cards L2Card26(3, 6, 0, 0, 0, 0, "Ruby");
	Cards L2Card27(1, 0, 0, 3, 3, 2, "Onyx");
	Cards L2Card28(1, 2, 0, 2, 0, 3, "Ruby");
	Cards L2Card29(1, 3, 0, 3, 2, 0, "Emerald");
	Cards L2Card30(2, 3, 0, 0, 5, 0, "Onyx");

	//level 3 cards
	Cards L3Card1(3, 5, 3, 0, 3, 3, "Diamond");
	Cards L3Card2(4, 3, 0, 3, 0, 6, "Diamond");
	Cards L3Card3(4, 0, 6, 3, 3, 0, "Emerald");
	Cards L3Card4(4, 6, 0, 0, 3, 3, "Onyx");
	Cards L3Card5(5, 0, 0, 3, 0, 7, "Diamond");
	Cards L3Card6(4, 7, 0, 0, 0, 0, "Onyx");
	Cards L3Card7(3, 0, 5, 3, 3, 3, "Ruby");
	Cards L3Card8(3, 3, 3, 5, 0, 3, "Emerald");
	Cards L3Card9(4, 0, 0, 0, 0, 7, "Diamond");
	Cards L3Card10(4, 3, 3, 0, 6, 0, "Ruby");
	Cards L3Card11(3, 3, 3, 3, 5, 0, "Onyx");
	Cards L3Card12(4, 0, 0, 7, 0, 0, "Sapphire");
	Cards L3Card13(5, 0, 3, 7, 0, 0, "Sapphire");
	Cards L3Card14(4, 0, 0, 0, 7, 0, "Ruby");
	Cards L3Card15(4, 0, 3, 6, 0, 3, "Sapphire");
	Cards L3Card16(5, 7, 0, 0, 0, 3, "Onyx");
	Cards L3Card17(5, 0, 7, 0, 3, 0, "Emerald");
	Cards L3Card18(5, 3, 0, 0, 7, 0, "Ruby");
	Cards L3Card19(4, 0, 7, 0, 0, 0, "Emerald");
	Cards L3Card20(3, 3, 0, 3, 3, 5, "Sapphire");


	//ruby tokens
	Token tokenR1("Ruby");
	Token tokenR2("Ruby");
	Token tokenR3("Ruby");
	Token tokenR4("Ruby");

	//saphire tokens
	Token tokenS1("Sapphire");
	Token tokenS2("Sapphire");
	Token tokenS3("Sapphire");
	Token tokenS4("Sapphire");

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

	//noble deck
	vector<Noble> nobleDeck{ noble1,noble2,noble3,noble4,noble5,noble6,noble7,noble8,noble9,noble10 };
	vector<Noble> nobleField;
	
	//card decks 
	vector<Cards> levelOneDeck { L1Card1,L1Card2,L1Card3,L1Card4,L1Card5,L1Card6,L1Card7,L1Card8,L1Card9,L1Card10,L1Card11,L1Card12,L1Card13,L1Card14,L1Card15,L1Card16,L1Card17,L1Card18,L1Card19,L1Card20,L1Card21,L1Card22,L1Card23,L1Card24,L1Card25,L1Card26,L1Card27,L1Card28,L1Card29,L1Card30,L1Card31,L1Card32,L1Card33,L1Card34,L1Card35,L1Card36,L1Card37,L1Card38,L1Card39,L1Card40 };
	vector<Cards> fieldOne;
	vector<Cards> levelTwoDeck{ L2Card1,L2Card2,L2Card3,L2Card4,L2Card5,L2Card6,L2Card7,L2Card8,L2Card9,L2Card10,L2Card11,L2Card12,L2Card13,L2Card14,L2Card15,L2Card16,L2Card17,L2Card18,L2Card19,L2Card20,L2Card21,L2Card22,L2Card23,L2Card24,L2Card25,L2Card26,L2Card27,L2Card28,L2Card29,L2Card30 };
	vector<Cards> fieldTwo;
	vector<Cards> levelThreeDeck{ L3Card1,L3Card2,L3Card3,L3Card4,L3Card5,L3Card6,L3Card7,L3Card8,L3Card9,L3Card10,L3Card11,L3Card12,L3Card13,L3Card14,L3Card15,L3Card16,L3Card17,L3Card18,L3Card19,L3Card20 };
	vector<Cards> fieldThree;

	//gem decks
	vector<Token> rubyDeck { tokenR1, tokenR2, tokenR3, tokenR4 };
	vector<Token> saphireDeck { tokenS1, tokenS2, tokenS3, tokenS4 };
	vector<Token> diamondDeck { tokenD1, tokenD2, tokenD3, tokenD4 };
	vector<Token> emeraldDeck { tokenE1, tokenE2, tokenE3, tokenE4 };
	vector<Token> onyxDeck{ tokenO1, tokenO2, tokenO3, tokenO4 };

	//begin game
	cout << "Welcome to Jacob's Splendor 2-player game! I hope you enjoy." << endl << endl;

	//draw 4 random level one cards and place them into field one.
	for (int i = 0; i < 4; i++) {
		int random = rand() % deckOneMax;
		fieldOne.push_back(levelOneDeck[random]);

		levelOneDeck.erase(levelOneDeck.begin() + random);
		deckOneMax--;
	}

	//draw 4 random level 2 cards and place them into the field two
	for (int i = 0; i < 4; i++) {
		int random = rand() % deckTwoMax;
		fieldTwo.push_back(levelTwoDeck[random]);

		levelTwoDeck.erase(levelTwoDeck.begin() + random);
		deckTwoMax--;
	}

	//draw 4 random level 3 cards and place them into field three
	for (int i = 0; i < 4; i++) {
		int random = rand() % deckThreeMax;
		fieldThree.push_back(levelThreeDeck[random]);

		levelThreeDeck.erase(levelThreeDeck.begin() + random);
		deckThreeMax--;
	}

	//draw 3 random nobles
	for (int i = 0; i < 3; i++) {
		int random = rand() % nobleMax;
		nobleField.push_back(nobleDeck[random]);

		nobleDeck.erase(nobleDeck.begin() + random);
		nobleMax--;
	}

	//display field one
	cout << "//////////////////////////////////Level 1 Cards///////////////////////////////////////////////////// " << endl << endl;

	for (int i = 0; i < fieldOne.size(); i++) {
		cout << "Name: " << fieldOne[i].getGemGiven() << setw(20);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldOne.size(); i++) {
		cout << "Ruby: " << fieldOne[i].getRubyCost() << right << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldOne.size(); i++) {
		cout << right << "Sapphire: " << fieldOne[i].getSaphireCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldOne.size(); i++) {
		cout << right << "Emerald: " << fieldOne[i].getEmeraldCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldOne.size(); i++) {
		cout << right << "Diamond: " << fieldOne[i].getDiamondCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldOne.size(); i++) {
		cout << right << "Onyx: " << fieldOne[i].getOnyxCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldOne.size(); i++) {
		if (fieldOne[i].getVpValue() > 0) {
			cout << right << "VP: " << fieldOne[i].getVpValue() << setw(25);
		}
	}

	//diplay field two
	cout << endl << endl << setw(0) << "//////////////////////////////////Level 2 Cards///////////////////////////////////////////////////// " << endl << endl;

	for (int i = 0; i < fieldTwo.size(); i++) {
		cout << "Name: " << fieldTwo[i].getGemGiven() << setw(20);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldTwo.size(); i++) {
		cout << "Ruby: " << fieldTwo[i].getRubyCost() << right << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldTwo.size(); i++) {
		cout << right << "Sapphire: " << fieldTwo[i].getSaphireCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldTwo.size(); i++) {
		cout << right << "Emerald: " << fieldTwo[i].getEmeraldCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldTwo.size(); i++) {
		cout << right << "Diamond: " << fieldTwo[i].getDiamondCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldTwo.size(); i++) {
		cout << right << "Onyx: " << fieldTwo[i].getOnyxCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldTwo.size(); i++) {
		if (fieldTwo[i].getVpValue() > 0) {
			cout << right << "VP: " << fieldTwo[i].getVpValue() << setw(25);
		}
	}

	//display field 3
	cout << endl << endl << setw(0) << "//////////////////////////////////Level 3 Cards/////////////////////////////////////////////////////" << endl << endl;

	for (int i = 0; i < fieldThree.size(); i++) {
		cout << "Name: " << fieldThree[i].getGemGiven() << setw(20);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldThree.size(); i++) {
		cout << "Ruby: " << fieldThree[i].getRubyCost() << right << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldThree.size(); i++) {
		cout << right << "Sapphire: " << fieldThree[i].getSaphireCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldThree.size(); i++) {
		cout << right << "Emerald: " << fieldThree[i].getEmeraldCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldThree.size(); i++) {
		cout << right << "Diamond: " << fieldThree[i].getDiamondCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldThree.size(); i++) {
		cout << right << "Onyx: " << fieldThree[i].getOnyxCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < fieldThree.size(); i++) {
		if (fieldThree[i].getVpValue() > 0) {
			cout << right << "VP: " << fieldThree[i].getVpValue() << setw(25);
		}
	}

	//display nobles
	cout << endl << endl << setw(0) << "//////////////////////////////////Nobles////////////////////////////////////////////////////////////" << endl << endl;

	for (int i = 0; i < nobleField.size(); i++) {
		cout << "Ruby: " << nobleField[i].getRubyCost() << right << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < nobleField.size(); i++) {
		cout << right << "Sapphire: " << nobleField[i].getSapphireCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < nobleField.size(); i++) {
		cout << right << "Emerald: " << nobleField[i].getEmeraldCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < nobleField.size(); i++) {
		cout << right << "Diamond: " << nobleField[i].getDiamondCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < nobleField.size(); i++) {
		cout << right << "Onyx: " << nobleField[i].getOnyxCost() << setw(25);
	}
	cout << endl << setw(0);

	for (int i = 0; i < nobleField.size(); i++) {
		cout << right << "VP: " << nobleField[i].getVpValue() << setw(25);
	}

	//show card placement on the field
	cout << setw(0) << endl << endl;
	for (int i = 0; i < fieldOne.size(); i++) {
		cout << "Card " << i + 1 << setw(25);
	}

	//get player 1's name
	cout << endl << endl << "Player 1 please enter your name: " << endl;
	getline(cin, p1Name);
	player1.setName(p1Name);

	//get player 2's name
	cout << endl << "Player 2 please enter your name: " << endl;
	getline(cin, p2Name);
	player2.setName(p2Name);

	do {
		cout << player1.getName() << " Please select an action:" << endl << endl;
		cout << "1. Take 3 gem tokens of different colors." << endl;
		cout << "2. Take 2 gems of the same color." << endl;
		cout << "3. Reserve 1 card and take 1 wild token." << endl;
		cout << "4. Purchase 1 face-up card." << endl;
		cin >> choice;

		switch (choice) {
		//choice 1, selecting 3 gems of different colors.
		case 1:

		}

	} while (player1.getVpTotal() < 15 && player2.getVpTotal() < 15);
}