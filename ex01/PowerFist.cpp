/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                     e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:24:17 by averheij      #+#    #+#                 */
/*   Updated: 2021/11/18 16:14:55 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {
	return;
}

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src) {
	*this = src;
	return;
}

PowerFist::~PowerFist(void) {
	return;
}

void			PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return;
}

PowerFist &		PowerFist::operator=(PowerFist const & rhs) {
	AWeapon::operator=(rhs);
	return *this;
}
