#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;
class Fireball : public ASpell
{
public:
	Fireball();
	~Fireball();

	//You will, of course, implement the clone() method. In the case of
	//Fireball, it will return a pointer to a new Fireball object.
	ASpell* clone() const;
};


