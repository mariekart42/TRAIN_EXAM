#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell
{
protected:
	std::string _name;
	std::string _effects;

public:
	ASpell(std::string, std::string);
	virtual ~ASpell();
	ASpell(const ASpell&);
	ASpell &operator=(const ASpell&);

	std::string getName() const;
	std::string getEffects() const;

	//Also add a clone pure method that returns a pointer to ASpell
	virtual ASpell* clone() const = 0;

	void launch(const ATarget&) const;
};
