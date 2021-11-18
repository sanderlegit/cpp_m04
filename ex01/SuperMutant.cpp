/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                   e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:31:41 by averheij      #+#    #+#                 */
/*   Updated: 2021/11/18 16:15:30 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant"){
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
	Enemy::operator=(rhs);
	return *this;
}
