#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class ASpell;
class Warlock
{
private:
	Warlock(const Warlock&);
	Warlock &operator=(const Warlock&);
	Warlock();
	std::string _name;
	std::string _title;

	// new
	SpellBook _SpellBook;

public:
	Warlock(std::string, std::string);
	~Warlock();

	const std::string& getName() const;
	const std::string& getTitle() const;

	void setTitle(const std::string&);

	void introduce() const;


	// new
	// learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
	void learnSpell(ASpell* spell);

	//forgetSpell, takes a string corresponding a to a spell's name, and makes the
	//  Warlock forget it. If it's not a known spell, does nothing.
	void forgetSpell(std::string spellName);

	//launchSpell, takes a string (a spell name) and a reference to ATarget, that
	//  launches the spell on the selected target. If it's not a known spell, does nothing
	void launchSpell(std::string spellName, ATarget& target);
};



