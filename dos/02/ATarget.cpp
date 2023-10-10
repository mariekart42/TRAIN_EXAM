
#include "ATarget.hpp"

ATarget::ATarget() {}
ATarget::ATarget(std::string type): _type(type) {}
ATarget::ATarget(const ATarget& obj)
{
	*this = obj;
}
ATarget& ATarget::operator=(const ATarget& src)
{
	_type = src._type;
	return *this;
}
ATarget::~ATarget() {}


const std::string &ATarget::getType() const
{
	return _type;
}


void ATarget::getHitBySpell(const ASpell &spell) const
{
	//<TYPE> has been <EFFECTS>!
	std::cout << _type << " has been " << spell.getEffect() << std::endl;
}