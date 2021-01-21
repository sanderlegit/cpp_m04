/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 17:23:15 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/21 14:31:56 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual ~AMateria(void);

		void					setType(std::string const & s);
		std::string const &		getType() const; //Returns the materia type
		unsigned int			getXP() const; //Returns the Materia's XP
		virtual AMateria*		clone() const = 0;
		virtual void			use(ICharacter& target);

		AMateria &				operator=(AMateria const & rhs);
	private:
		std::string				_type;
		unsigned int			_xp;

};

#endif
