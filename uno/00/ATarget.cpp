#include "ATarget.hpp"

ATarget::ATarget(std::string type): _type(type)
{}

ATarget::~ATarget() {}

ATarget & ATarget::operator=(const ATarget &src)
{
	_type = src.getType();
	return *this;
}

ATarget::ATarget(const ATarget &obj)
{
	*this = obj;
}

const std::string& ATarget::getType() const
{
	return _type;
}


void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}