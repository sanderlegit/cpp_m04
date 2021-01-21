/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 17:24:55 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/21 14:32:12 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# include <iostream>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}

		virtual std::string const &		getName() const = 0;
		virtual void					equip(AMateria* m) = 0;
		virtual void					unequip(int idx) = 0;
		virtual void					use(int idx, ICharacter &target) = 0;
};

#endif
