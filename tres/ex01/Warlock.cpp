
#include "Warlock.hpp"


Warlock::Warlock() {}
Warlock::Warlock(std::string name, std::string title): name(name), title(title)
{
	std::cout << name << ": This looks like another boring day."<< std::endl;
}
Warlock::Warlock(const Warlock& src)
{
	*this = src;
}
Warlock& Warlock::operator=(const Warlock &src)
{
	name = src.name;
	title = src.title;
	return *this;
}
Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}






std::string Warlock::getName() const
{
	return name;
}

std::string Warlock::getTitle() const
{
	return title;
}


void Warlock::setTitle(const std::string& newTitle)
{
	title = newTitle;
}

void Warlock::introduce() const
{
	//<NAME>: I am <NAME>, <TITLE>!
	std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}





//void Warlock::learnSpell(ASpell *spell)
//{
//	if (spell)
//	{
//		if (_spellBook.find(spell->getName()) == _spellBook.end())
//			_spellBook[spell->getName()] = spell->clone();
//	}
//}
//
//void Warlock::forgetSpell(std::string spellName)
//{
//	if (_spellBook.find(spellName) != _spellBook.end())
//	{
//		_spellBook.erase(_spellBook.find(spellName));
//	}
//}
//
//void Warlock::launchSpell(std::string spellName, ATarget& target)
//{
//	if (_spellBook.find(spellName) != _spellBook.end())
//	{
//		_spellBook[spellName]->launch(target);
//	}
//}













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

void Warlock::launchSpell(std::string spellName, ATarget & target)
{
	if (_spellBook.find(spellName) != _spellBook.end())
	{
		_spellBook[spellName]->launch(target);
	}
}
















