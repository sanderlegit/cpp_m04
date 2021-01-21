/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 17:23:15 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 17:56:48 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure(void);
		Cure(std::string const & type);
		Cure(Cure const & src);
		~Cure(void);

		Cure*			clone() const;
		void			use(ICharacter& target);

		Cure &			operator=(Cure const & rhs);
	private:

};

#endif
