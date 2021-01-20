/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:50:45 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 13:12:29 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	_name = "Nameless";
	_ap = 40;
	_weapon = NULL;
	return;
}

Character::Character(std::string const & name) : _name(name) {
	_ap = 40;
	_weapon = NULL;
	return;
}

Character::Character(Character const & src) {
	*this = src;
	return;
}

Character::~Character(void) {
	return;
}

void					Character::recoverAP() {
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
	return;
}

void					Character::equip(AWeapon* w) {
	_weapon = w;
	return;
}

void					Character::attack(Enemy* e) {
	if (_weapon && _ap >= _weapon->getAPCost())
	{
		std::cout << _name << " attacks " << e->getType() << " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		_ap -= _weapon->getAPCost();
		e->takeDamage(_weapon->getDamage());
		if (e->getHP() <= 0)
			delete e;
	} else {
		if (!_weapon)
			std::cout << _name << " has no weapon..." << std::endl;
		else if (_ap <= _weapon->getAPCost())
			std::cout << _name << " has too little ap..." << std::endl;
	}
	return;
}

std::string const &		Character::getName(void) const {
	return _name;
}

int						Character::getAP(void) const {
	return _ap;
}

AWeapon const *			Character::getWeapon(void) const {
	return _weapon;
}

Character &				Character::operator=(Character const & rhs) {
	_name = rhs._name;
	_ap = rhs._ap;
	_weapon = rhs._weapon;
	return *this;
}

std::ostream &			operator<<(std::ostream & o, Character const & c) {
	if (c.getWeapon())
		o << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
	else
		o << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl;
	return o;
}
