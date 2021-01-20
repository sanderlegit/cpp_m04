/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 15:41:23 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 16:15:10 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src) {
	*this = src;
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout << "I'll be back" << std::endl;
	return;
}

AssaultTerminator*		AssaultTerminator::clone() const {
	return new AssaultTerminator();
}

void 					AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return;
}

void 					AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
	return;
}

void 					AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with a chainfists *" << std::endl;
	return;
}

AssaultTerminator &		AssaultTerminator::operator=(AssaultTerminator const & rhs) {
	return *rhs.clone();
}
