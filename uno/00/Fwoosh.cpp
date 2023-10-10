#include "Fwoosh.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh() {}

//it will return a pointer to a new Fwoosh object.

ASpell *Fwoosh::clone() const
{
	return (new Fwoosh());
}