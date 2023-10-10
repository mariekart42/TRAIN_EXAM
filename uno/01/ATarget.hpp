
#pragma once

#include <iostream>

#include "ASpell.hpp"

class ASpell;
class ATarget
{
	// protected not private because its a abstract class and will be inharitated
protected:
	std::string _type;
public:
	ATarget(std::string);
	virtual ~ATarget();
	ATarget & operator=(const ATarget&);
	ATarget(const ATarget&);

	const std::string& getType() const;

	virtual ATarget* clone() const = 0;

	void getHitBySpell(const ASpell&) const;
};

