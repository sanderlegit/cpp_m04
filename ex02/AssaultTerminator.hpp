/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 15:41:21 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 15:59:25 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const & src);
		~AssaultTerminator(void);

		AssaultTerminator*			clone() const;
		void 					battleCry() const;
		void 					rangedAttack() const;
		void 					meleeAttack() const;

		AssaultTerminator &		operator=(AssaultTerminator const & rhs);
};

#endif
