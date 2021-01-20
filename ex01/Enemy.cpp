/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:26:37 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 12:59:36 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) {
	return;
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {
	return;
}

Enemy::Enemy(Enemy const & src) {
	*this = src;
	return;
}

Enemy::~Enemy(void) {
	return;
}


std::string const &	Enemy::getType() const {
	return _type;
}

int					Enemy::getHP() const {
	return _hp;
}

void				Enemy::takeDamage(int d) {
	if (d > 0)
		_hp -= d;
	return;
}

Enemy &				Enemy::operator=(Enemy const & rhs) {
	_hp = rhs._hp;
	_type = rhs._type;
	return *this;
}
