/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 11:16:06 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 11:45:52 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) {
	return;
}

Peon::Peon(std::string name_) : Victim(name_) {
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::Peon(Peon const & src) : Victim(src) {
	*this = src;
	std::cout << "Zog zog." << std::endl;
	return;
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
	return;
}

void					Peon::getPolymorphed(void) const {
	std::cout << _name << " has been turned into a pink Pony!" << std::endl;
	return;
}

Peon &					Peon::operator=(Peon const & rhs) {
	return *this;
}
