#include "ASpell.hpp"


ASpell::ASpell(std::string name, std::string effects):
	_name(name), _effects(effects)
	{}

ASpell::~ASpell(){}

ASpell::ASpell(const ASpell& src)
{
	*this = src;
}

ASpell& ASpell::operator=(const ASpell& src)
{
	_name = src._name;
	_effects = src._effects;
	return *this;
}

std::string ASpell::getName() const
{
	return _name;
}
std::string ASpell::getEffects() const
{
	return _effects;
}

void ASpell::launch(const ATarget &targ) const
{
	targ.getHitBySpell(*this);
}