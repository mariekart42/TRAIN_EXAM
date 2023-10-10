#include "ATarget.hpp"


ATarget::ATarget() {}
ATarget::ATarget(std::string type): type(type)
{
}
ATarget::ATarget(const ATarget& src)
{
	*this = src;
}
ATarget& ATarget::operator=(const ATarget &src)
{
	type = src.type;
	return *this;
}
ATarget::~ATarget()
{
}



const std::string& ATarget::getType() const
{
	return type;
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
	//<TYPE> has been <EFFECTS>!
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}

