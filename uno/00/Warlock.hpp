#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock
{
private:
	std::string _name;
	std::string _title;
	std::map<std::string, ASpell*> _spellBook;

public:
	Warlock(std::string, std::string);
	~Warlock();

	std::string const & getName() const;
	std::string const & getTitle() const;

	//setTitle, returns void and takes a reference to constant string
	void setTitle(const std::string&);

	void introduce() const;

	//* learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
	void learnSpell(ASpell *);

	// forgetSpell, takes a string corresponding a to a spell's name, and makes the
	//  Warlock forget it. If it's not a known spell, does nothing.
	void forgetSpell(std::string spell);

	// launchSpell, takes a string (a spell name) and a reference to ATarget, that
	//  launches the spell on the selected target. If it's not a known spell, does
	//  nothing.
	void launchSpell(std::string spellName, ATarget& target);

};
