#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"

class ASpell;
class SpellBook
{
private:
	std::map < std::string, ASpell*> _SpellBook;

public:
	SpellBook();
	SpellBook(const SpellBook&);
	SpellBook& operator=(const SpellBook&);
	~SpellBook();

	void learnSpell(ASpell*);

	void forgetSpell(const std::string&);

	ASpell* createSpell(std::string const &);
};



// void learnSpell(ASpell*), that COPIES a spell in the book
// void forgetSpell(string const &), that deletes a spell from the book, except
		//if it isn't there
// ASpell* createSpell(string const &), that receives a string corresponding to
		//	the name of a spell, creates it, and returns it.
