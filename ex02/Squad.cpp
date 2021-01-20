/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 15:03:44 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 16:30:12 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) {
	_unitMax = 2;
	_unitCount = 0;
	_units = new ISpaceMarine*[_unitMax];
	return;
}

Squad::Squad(Squad const & src) {
	_unitCount = src.getCount();
	_unitMax = 2;
	while (_unitMax < _unitCount)
		_unitMax *= 2;
	_units = new ISpaceMarine*[_unitMax];
	for (int i = 0; i < _unitCount; i++)
		_units[i] = src.getUnit(i)->clone();
	return;
}

Squad::~Squad(void) {
	for (int i = 0; i < _unitCount; i++)
		delete _units[i];
	delete _units;
	return;
}

int				Squad::getCount() const {
	return _unitCount;
}

ISpaceMarine*	Squad::getUnit(int i) const {
	if (i >= _unitCount)
		return NULL;
	else
		return _units[i];
}

int				Squad::push(ISpaceMarine* sm) {
	if (_unitCount == _unitMax) {
		_unitMax *= 2;
		ISpaceMarine** tmp = new ISpaceMarine*[_unitMax];
		for (int i = 0; i < _unitCount; i++)
			tmp[i] = _units[i];
		delete _units;
		_units = tmp;
	}
	_units[_unitCount] = sm;
	_unitCount++;
	return _unitCount;
}

Squad &		Squad::operator=(ISquad const & rhs) {
	for (int i = 0; i < _unitCount; i++)
		delete _units[i];
	delete _units;

	_unitCount = rhs.getCount();
	_unitMax = 2;
	while (_unitMax < _unitCount)
		_unitMax *= 2;
	_units = new ISpaceMarine*[_unitMax];
	for (int i = 0; i < _unitCount; i++)
		_units[i] = rhs.getUnit(i)->clone();
	return *this;
}


