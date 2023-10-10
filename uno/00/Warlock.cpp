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
	if (spell)
	{
		if (_spellBook.find(spell->getName()) == _spellBook.end())
		{
			_spellBook[spell->getName()] = spell->clone();
		}
	}
}

void Warlock::forgetSpell(std::string spell)
{
	if (_spellBook.find(spell) != _spellBook.end())
		_spellBook.erase(_spellBook.find(spell));
}


void Warlock::launchSpell(std::string spellName, ATarget& target)
{
	if (_spellBook.find(spellName) != _spellBook.end())
	{
		_spellBook[spellName]->launch(target);
	}
}
