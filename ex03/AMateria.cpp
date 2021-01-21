/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 17:23:19 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/21 14:28:20 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {
	_xp = 0;
	return;
}

AMateria::AMateria(AMateria const & src) {
	*this = src;
	return;
}

AMateria::~AMateria(void) {
	return;
}

void					AMateria::setType(std::string const & s) {
	_type = s;
}

std::string const &		AMateria::getType() const {
	return _type;
}

unsigned int			AMateria::getXP() const {
	return _xp;
}

void					AMateria::use(ICharacter& target) {
	(void)target;
	_xp += 10;
	return;
}

AMateria &				AMateria::operator=(AMateria const & rhs) {
	_xp = rhs.getXP();
	return *this;
}
