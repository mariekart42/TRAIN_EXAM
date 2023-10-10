
#include "ASpell.hpp"


ASpell::ASpell() {}
ASpell::ASpell(std::string name, std::string effect): _name(name), _effects(effect) {}
ASpell::ASpell(const ASpell& obj)
{
	*this = obj;
}
ASpell &ASpell::operator=(const ASpell& src)
{
	_name = src._name;
	_effects = src._effects;
	return *this;
}
ASpell::~ASpell() {}


std::string ASpell::getName() const
{
	return _name;
}
std::string ASpell::getEffect() const
{
	return _effects;
}

void ASpell::launch(const ATarget &target)
{
	target.getHitBySpell(*this);
}