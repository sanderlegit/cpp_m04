/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 15:41:23 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 16:13:53 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src) {
	*this = src;
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return;
}

TacticalMarine::~TacticalMarine(void) {
	std::cout << "Aaargh..." << std::endl;
	return;
}

TacticalMarine*			TacticalMarine::clone() const {
	return new TacticalMarine();
}

void 					TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
	return;
}

void 					TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
	return;
}

void 					TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
	return;
}

TacticalMarine &		TacticalMarine::operator=(TacticalMarine const & rhs) {
	return *rhs.clone();
}
