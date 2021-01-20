/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:18:50 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 13:11:19 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) {
	_name = "Plasma Rifle";
	_damage = 21;
	_apcost = 5;
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
	_name = rhs._name;
	_damage = rhs._damage;
	_apcost = rhs._apcost;
	return *this;
}
