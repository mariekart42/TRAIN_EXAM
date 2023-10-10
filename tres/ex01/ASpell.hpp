#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell
{
private:
	std::string name;
	std::string effects;
	ASpell();
	ASpell &operator=(const ASpell&);
	ASpell(const ASpell&);
public:
	ASpell(std::string, std::string);
	virtual ~ASpell();


	std::string getName() const;
	std::string getEffects() const;

	virtual ASpell* clone() const = 0;

	//Finally, add to your ASpell class a launch function that takes a reference to constant ATarget.
	void launch(const ATarget&) const;

};


