#pragma once
#include <string>

using FString = std::string;
using int32 = int;

struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame
{
public:
	FBullCowGame(); // constructor

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset();
	bool CheckGuessValidity(FString);
	// counts bulls and cows, and increases the try # assuming valid guess.
	FBullCowCount SubmitGuess(FString);

private:
	// initialized in constructor
	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;
};
