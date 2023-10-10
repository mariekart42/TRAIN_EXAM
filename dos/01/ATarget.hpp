#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;
class ATarget
{
private:
	std::string _type;
public:
	ATarget();
	ATarget(std::string type);
	ATarget(const ATarget&);
	ATarget& operator=(const ATarget&);
	~ATarget();

	const std::string& getType() const;

	virtual ATarget * clone() const = 0;

	//Now, add to your ATarget a getHitBySpell function that takes a reference to
	//constant ASpell.
	void getHitBySpell(const ASpell& spell) const;

};


