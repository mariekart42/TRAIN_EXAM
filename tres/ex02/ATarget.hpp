#pragma once

#include "ASpell.hpp"

class ASpell;
class ATarget
{
private:
	std::string type;
	ATarget();
	ATarget &operator=(const ATarget&);
	ATarget(const ATarget&);
public:
	ATarget(std::string);
	virtual ~ATarget();


	const std::string& getType() const;

	virtual ATarget* clone() const = 0;

	//getHitBySpell function that takes a reference to constant ASpell.
	void getHitBySpell(const ASpell&) const;
};


