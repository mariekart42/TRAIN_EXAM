#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell
{
private:
	std::string _name;
	std::string _effects;
public:
	ASpell();
	ASpell(const ASpell&);
	ASpell(std::string name, std::string effect);
	virtual ~ASpell();
	ASpell& operator=(const ASpell&);
	std::string getName() const;
	std::string getEffect() const;

	//Also add a clone pure method that returns a pointer to ASpell.
	virtual ASpell* clone() const = 0;

	//launch function that takes a reference to constant ATarget.
	void launch(const ATarget& target);
};


