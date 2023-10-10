#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}
Warlock::Warlock() {}
Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}
Warlock::Warlock(const Warlock& src)
{
	*this = src;
}
Warlock& Warlock::operator=(const Warlock &obj)
{
	_name = obj._name;
	_title = obj._title;
	return *this;
}

const std::string& Warlock::getName() const
{
	return _name;
}

const std::string& Warlock::getTitle() const
{
	return _title;
}

void Warlock::setTitle(const std::string &war)
{
	_title = war;
}

void Warlock::introduce() const
{
	//<NAME>: I am <NAME>, <TITLE>!
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

// new
void Warlock::learnSpell(ASpell *spell)
{
	if (spell)
	{
		if (_spellBook.find(spell->getName()) == _spellBook.end())
			_spellBook[spell->getName()] = spell->clone();
	}
}

void Warlock::forgetSpell(std::string spellName)
{
	if (_spellBook.find(spellName) != _spellBook.end())
	{
		_spellBook.erase(_spellBook.find(spellName));
	}
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	if (_spellBook.find(spellName) != _spellBook.end())
	{
		_spellBook[spellName]->launch(target);
	}
}