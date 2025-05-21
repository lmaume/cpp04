#include "ICharacter.hpp"

ICharacter& ICharacter::operator=(const ICharacter &chara)
{
	this->_name = chara.getName();
	return *this;
}
