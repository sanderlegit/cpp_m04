/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:24:17 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 13:12:53 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) {
	_name = "Power Fist";
	_damage = 50;
	_apcost = 8;
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
	_name = rhs._name;
	_damage = rhs._damage;
	_apcost = rhs._apcost;
	return *this;
}
