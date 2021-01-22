/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 12:31:14 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/22 13:08:10 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < _mc; i++)
		_materia[i] = NULL;
	return;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	*this = src;
	return;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < _mc; i++) {
		if (_materia[i])
			delete _materia[i];
	}
	return;
}

void			MateriaSource::learnMateria(AMateria* m) {
	if (!m) {
		std::cout << "Source: No materia passed..." << std::endl;
		return;
	}
	std::cout << "Source: Attempting to learn " << m->getType() << std::endl;
	for (int i = 0; i < _mc; i++) {
		if (_materia[i] == NULL) {
			_materia[i] = m;
			std::cout << "\tEquipped to slot " << i << std::endl;
			break;
		}
		if (i == _mc - 1) {
			std::cout << "\tSource is full..." << std::endl;
		}
	}
	return;
}

AMateria*		MateriaSource::createMateria(std::string const & type) {
	std::cout << "Source: Attempting to create " << type << std::endl;
	for (int i = 0; i < _mc; i++) {
		if (_materia[i] && !_materia[i]->getType().compare(type)) {
			std::cout << "\tCloning slot " << i << ", type " << _materia[i]->getType() << std::endl;
			return (_materia[i]->clone());
		}
	}
	std::cout << "\tType not found..." << std::endl;
	return (NULL);
}

MateriaSource &		MateriaSource::operator=(MateriaSource const & rhs) {
	for (int i = 0; i < _mc; i++) {
		if (_materia[i])
			delete _materia[i];
		if (rhs._materia[i])
			_materia[i] = rhs._materia[i]->clone();
	}
	return *this;
}


