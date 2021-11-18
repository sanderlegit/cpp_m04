/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                   e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:18:50 by averheij      #+#    #+#                 */
/*   Updated: 2021/11/18 16:15:00 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src) {
	*this = src;
	return;
}

PlasmaRifle::~PlasmaRifle(void) {
	return;
}

void				PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}

PlasmaRifle &		PlasmaRifle::operator=(PlasmaRifle const & rhs) {
	AWeapon::operator=(rhs);
	return *this;
}
