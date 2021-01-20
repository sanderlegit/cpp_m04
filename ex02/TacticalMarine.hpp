/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 15:41:21 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/20 15:58:17 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const & src);
		~TacticalMarine(void);

		TacticalMarine*			clone() const;
		void 					battleCry() const;
		void 					rangedAttack() const;
		void 					meleeAttack() const;

		TacticalMarine &		operator=(TacticalMarine const & rhs);
};

#endif
