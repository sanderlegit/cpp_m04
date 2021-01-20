/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 11:16:21 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 11:45:36 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) {
	_name = "Nameless";
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
	return;
}

Victim::Victim(std::string name_) : _name(name_) {
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
	return;
}

Victim::Victim(Victim const & src) {
	*this = src;
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
	return;
}

Victim::~Victim(void) {
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
	return;
}

std::string	const &		Victim::getName(void) const {
	return _name;
}

void					Victim::getPolymorphed(void) const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
	return;
}

Victim &				Victim::operator=(Victim const & rhs) {
	_name = rhs._name;
	return *this;
}

std::ostream &			operator<<(std::ostream & o, Victim const & v) {
	o << "I am " << v.getName() << " and I like otters!" << std::endl;
	return o;
}
