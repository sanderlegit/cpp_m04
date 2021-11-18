/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                   e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:47:09 by averheij      #+#    #+#                 */
/*   Updated: 2021/11/18 16:14:48 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion"){
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(src) {
	*this = src;
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
	return;
}

RadScorpion &		RadScorpion::operator=(RadScorpion const & rhs) {
	Enemy::operator=(rhs);
	return *this;
}
