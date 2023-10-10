#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title):
		_name(name), _title(title)
{
	std::cout << _name <<": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name <<" My job here is done!" << std::endl;
}

Warlock & Warlock::operator=(const Warlock& src)
{
	_name = src._name;
	_title = src._title;
	return *this;
}

Warlock::Warlock(const Warlock& obj)
{
	*this = obj;
}


void Warlock::setTitle(const std::string &title)
{
	_title = title;
}


void Warlock::introduce() const
{
	std::cout << _name <<" I am "<< _name << ", "<<_title<<"!" << std::endl;
}

std::string const & Warlock::getName() const
{
	return (_name);
}

std::string const & Warlock::getTitle() const
{
	return (_title);
}


void Warlock::learnSpell(ASpell * spell)
{
	_SpellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell)
{
	_SpellBook.forgetSpell(spell);
}


void Warlock::launchSpell(std::string spellName, ATarget& target)
{
	if (_SpellBook.createSpell(spellName))
	{
		_SpellBook.createSpell(spellName)->launch(target);
	}
}
