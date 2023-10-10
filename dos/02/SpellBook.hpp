#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"

class ASpell;
class SpellBook
{
private:
	SpellBook(const SpellBook& src);
	SpellBook& operator=(const SpellBook& obj);
	std::map<std::string, ASpell*> _SpellBook;
public:
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell*);
	void forgetSpell(const std::string& spellName);
	ASpell * createSpell(const std::string& spellName);
};


/*
* void learnSpell(ASpell*), that COPIES a spell in the book
* void forgetSpell(string const &), that deletes a spell from the book, except
  if it isn't there
* ASpell* createSpell(string const &), that receives a string corresponding to
  the name of a spell, creates it, and returns it.
 */