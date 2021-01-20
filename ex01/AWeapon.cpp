/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:12:01 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 13:24:46 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void) {
	return;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {
	return;
}

AWeapon::AWeapon(AWeapon const & src) {
	*this = src;
	return;
}

AWeapon::~AWeapon(void) {
	return;
}

std::string const &	AWeapon::getName() const {
	return _name;
}
int 				AWeapon::getAPCost() const {
	return _apcost;
}
int					AWeapon::getDamage() const {
	return _damage;
}

AWeapon &			AWeapon::operator=(AWeapon const & rhs) {
	_name = rhs._name;
	_apcost = rhs._apcost;
	_damage = rhs._damage;
	return *this;
}
