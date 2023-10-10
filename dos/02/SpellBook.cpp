
#include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::SpellBook(const SpellBook& src)
{
	*this = src;
}
SpellBook& SpellBook::operator=(const SpellBook &obj)
{
	return *this;
}
SpellBook::~SpellBook() {}



void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
	{
		_SpellBook[spell->getName()] = spell->clone();
	}
}

void SpellBook::forgetSpell(const std::string &spellName)
{
	std::map<std::string, ASpell*>::iterator it = _SpellBook.find(spellName);
	if (it != _SpellBook.end())
	{
		delete it->second;
		_SpellBook.erase(it);
	}
}

ASpell * SpellBook::createSpell(const std::string &spellName)
{
	ASpell * tmp = NULL;
	if (_SpellBook.find(spellName) != _SpellBook.end())
	{
		tmp = _SpellBook[spellName];
	}
	return tmp;
}