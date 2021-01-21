/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 17:23:19 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/21 14:32:59 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) {
	this->setType("cure");
	return;
}

Cure::Cure(Cure const & src) : AMateria(src) {
	*this = src;
	return;
}

Cure::~Cure(void) {
	return;
}

Cure*				Cure::clone() const {
	return new Cure();
}

void				Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}

Cure &				Cure::operator=(Cure const & rhs) {
	(void)rhs;
	return *this;
}
