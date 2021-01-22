/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 17:55:23 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/22 13:08:19 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	_name = "Nameless";
	for (int i = 0; i < _mc; i++)
		_materia[i] = NULL;
	return;
}

Character::Character(std::string name_) : _name(name_) {
	return;
}

Character::Character(Character const & src) {
	*this = src;
	return;
}

Character::~Character(void) {
	for (int i = 0; i < _mc; i++) {
		if (_materia[i])
			delete _materia[i];
	}
	return;
}

std::string const &		Character::getName() const {
	return _name;
}

void					Character::equip(AMateria* m) {
	if (!m) {
		std::cout << _name << ": No materia passed..." << std::endl;
		return;
	}
	std::cout << _name << ": Attempting to equip " << m->getType() << std::endl;
	for (int i = 0; i < _mc; i++) {
		if (_materia[i] == NULL) {
			_materia[i] = m;
			std::cout << "\tEquipped to slot " << i << std::endl;
			break;
		}
		if (i == _mc - 1) {
			std::cout << "\tInventory full..." << std::endl;
		}
	}
	return;
}

void					Character::unequip(int idx) {
	std::cout << _name << ": Attempting to unequip slot " << idx << std::endl;
	if (idx < _mc) {
		if (_materia[idx]) {
			std::cout << "\tUnequipping " << _materia[idx]->getType() << std::endl;
			_materia[idx] = NULL;
		} else {
			std::cout << "\tSlot empty..." << std::endl;
		}
	} else {
		std::cout << "\tIndex too high..." << std::endl;
	}
	return;
}

void					Character::use(int idx, ICharacter& target) {
	std::cout << _name << ": Attempting to use slot " << idx << std::endl;
	if (idx < _mc) {
		if (_materia[idx]) {
			std::cout << "\tUsing " << _materia[idx]->getType() << std::endl;
			_materia[idx]->use(target);
		} else {
			std::cout << "\tSlot empty..." << std::endl;
		}
	} else {
		std::cout << "\tIndex too high..." << std::endl;
	}
	return;
}

Character &				Character::operator=(Character const & rhs) {
	_name = rhs._name;
	for (int i = 0; i < _mc; i++) {
		if (_materia[i])
			delete _materia[i];
		if (rhs._materia[i])
			_materia[i] = rhs._materia[i]->clone();
	}
	return *this;
}
