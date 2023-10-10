#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;
class Fwoosh : public ASpell
{
public:
	Fwoosh();
	~Fwoosh();

	//You will, of course, implement the clone() method. In the case of
	//Fwoosh, it will return a pointer to a new Fwoosh object.
	ASpell* clone() const;
};


