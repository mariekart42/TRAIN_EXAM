#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;
class Polymorph : public ASpell
{
public:
	Polymorph();
	~Polymorph();

	//You will, of course, implement the clone() method. In the case of
	//Polymorph, it will return a pointer to a new Polymorph object.
	ASpell* clone() const;
};


