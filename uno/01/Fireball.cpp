#include "Fireball.hpp"

Fireball::Fireball(): ASpell("Fireball", "burnt to a crisp") {}

Fireball::~Fireball() {}

//it will return a pointer to a new Fireball object.

ASpell *Fireball::clone() const
{
	return (new Fireball());
}