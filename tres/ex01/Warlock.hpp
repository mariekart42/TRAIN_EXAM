#pragma once


#include <iostream>
#include "ASpell.hpp"
#include <map>

class Warlock
{
private:
	std::string name;
	std::string title;
	Warlock();
	Warlock &operator=(const Warlock&);
	Warlock(const Warlock&);

	std::map<std::string, ASpell*> _spellBook;
public:
	Warlock(std::string, std::string);
	~Warlock();

	std::string getName() const;
	std::string getTitle() const;
	void setTitle(const std::string&);
	void introduce() const;



	void learnSpell(ASpell*);
	void forgetSpell(std::string);
	void launchSpell(std::string, ATarget&);
};



//* learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell

//* forgetSpell, takes a string corresponding a to a spell's name, and makes the
//  Warlock forget it. If it's not a known spell, does nothing.

//* launchSpell, takes a string (a spell name) and a reference to ATarget, that
//  launches the spell on the selected target. If it's not a known spell, does
//  nothing.