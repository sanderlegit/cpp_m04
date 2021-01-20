/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 11:16:09 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 11:45:50 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"

class Peon : public Victim {
	public:
		Peon(void);
		Peon(std::string name_);
		Peon(Peon const & src);
		~Peon(void);

		void					getPolymorphed(void) const;

		Peon &		operator=(Peon const & rhs);
	private:
};

#endif
