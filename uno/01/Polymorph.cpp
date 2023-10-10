#include "Polymorph.hpp"

Polymorph::Polymorph(): ASpell("Polymorph", "turned into a critter") {}

Polymorph::~Polymorph() {}

//it will return a pointer to a new Polymorph object.

ASpell *Polymorph::clone() const
{
	return (new Polymorph());
}