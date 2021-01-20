/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:31:41 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 13:10:45 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) {
	_hp = 170;
	_type = "Super Mutant";
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src) {
	*this = src;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh..." << std::endl;
	return;
}

void				SuperMutant::takeDamage(int d) {
	Enemy::takeDamage(d - 3);
	return;
}

SuperMutant &		SuperMutant::operator=(SuperMutant const & rhs) {
	_hp = rhs._hp;
	_type = rhs._type;
	return *this;
}
