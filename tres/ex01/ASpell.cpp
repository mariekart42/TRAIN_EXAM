#include "ASpell.hpp"


ASpell::ASpell() {}
ASpell::ASpell(std::string name, std::string effects): name(name), effects(effects)
{
}
ASpell::ASpell(const ASpell& src)
{
	*this = src;
}
ASpell& ASpell::operator=(const ASpell &src)
{
	name = src.name;
	effects = src.effects;
	return *this;
}
ASpell::~ASpell()
{
}



std::string ASpell::getName() const
{
	return name;
}
std::string ASpell::getEffects() const
{
	return effects;
}


void ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}