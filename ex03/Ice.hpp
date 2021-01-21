/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 17:23:15 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 17:56:44 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(std::string const & type);
		Ice(Ice const & src);
		~Ice(void);

		Ice*			clone() const;
		void			use(ICharacter& target);

		Ice &			operator=(Ice const & rhs);
	private:
};

#endif
