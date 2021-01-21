/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 17:55:25 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/21 14:03:44 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include <iostream>

class Character : public ICharacter{
	public:
		Character(void);
		Character(std::string name_);
		Character(Character const & src);
		~Character(void);

		std::string const &		getName() const;
		void					equip(AMateria* m);
		void					unequip(int idx);
		void					use(int idx, ICharacter& target);

		Character &				operator=(Character const & rhs);
	private:
		std::string				_name;
		static const int		_mc = 4;
		AMateria				*_materia[_mc] = {};
};

#endif
