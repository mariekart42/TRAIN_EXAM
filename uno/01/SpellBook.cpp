#include "SpellBook.hpp"


SpellBook::SpellBook() {}
SpellBook::~SpellBook() {}
SpellBook::SpellBook(const SpellBook& src)
{
	*this = src;
}

SpellBook& SpellBook::operator=(const SpellBook & src)
{
	_SpellBook = src._SpellBook;
	return *this;
}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
	{
		_SpellBook[spell->getName()] = spell->clone();
	}
}

void SpellBook::forgetSpell(const std::string& spell)
{
	std::map<std::string, ASpell*>::iterator it = _SpellBook.find(spell);
	if (it != _SpellBook.end())
	{
		delete it->second;
		_SpellBook.erase(it);
	}
}

ASpell * SpellBook::createSpell(const std::string& spell)
{
	ASpell *tmp = NULL;
	if (_SpellBook.find(spell) != _SpellBook.end())
	{
		tmp = _SpellBook[spell];
	}
	return tmp;
}

