/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/21 12:31:12 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/21 14:03:34 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		~MateriaSource(void);

		void					learnMateria(AMateria* m);
		AMateria*				createMateria(std::string const & type);

		MateriaSource &			operator=(MateriaSource const & rhs);
	private:
		static const int		_mc = 4;
		AMateria				*_materia[_mc] = {};
};

#endif
