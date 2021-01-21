/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 14:02:47 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/21 14:45:11 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

 int main()
{
	ICharacter*		me = new Character("me");
	ICharacter*		bob = new Character("bob");
	IMateriaSource*	src = new MateriaSource();
	AMateria*		tmp;

	std::cout << std::endl << "\tCreating from empty source" << std::endl;
	tmp = src->createMateria("ice");

	std::cout << std::endl << "\tFilling a source" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << std::endl << "\tAdding to a full source" << std::endl;
	src->learnMateria(new Ice());


	std::cout << std::endl << "\tCreating from a source and equipping to character" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl << "\tCreating from a nonexistent type attempting to equip to character" << std::endl;
	tmp = src->createMateria("invalid");
	me->equip(tmp);


	std::cout << std::endl << "\tUse with valid index" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl << "\tUse with invalid index" << std::endl;
	me->use(3, *bob);
	me->use(5, *bob);

	std::cout << std::endl << "\tFilling a character" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << std::endl << "\tAdding to a full character" << std::endl;
	me->equip(tmp);

	delete bob;
	delete me;
	delete src;
	return 0;
}
