/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 11:16:12 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 11:45:53 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {
	std::cout << "How did you get in here? I locked this up tight!" << std::endl;
	return;
}

Sorcerer::Sorcerer(std::string name_, std::string title_) : _name(name_), _title(title_) {
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
	return;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
	*this = src;
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
	return;
}

Sorcerer::~Sorcerer(void) {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
	return;
}

std::string const &		Sorcerer::getName(void) const {
	return _name;
}

std::string const &		Sorcerer::getTitle(void) const {
	return _title;
}

void					Sorcerer::polymorph(Victim const & v) const {
	v.getPolymorphed();
	return;
}

Sorcerer &				Sorcerer::operator=(Sorcerer const & rhs) {
	_name = rhs._name;
	_title = rhs._title;
	return *this;
}

std::ostream &			operator<<(std::ostream & o, Sorcerer const & s) {
	o << "I am " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}
