/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 17:23:19 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/21 14:32:53 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {
	this->setType("ice");
	return;
}

Ice::Ice(Ice const & src) : AMateria(src) {
	*this = src;
	return;
}

Ice::~Ice(void) {
	return;
}

Ice*				Ice::clone() const {
	return new Ice();
}

void				Ice::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}

Ice &				Ice::operator=(Ice const & rhs) {
	(void)rhs;
	return *this;
}
