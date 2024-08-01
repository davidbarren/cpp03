/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:43:53 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/01 17:51:40 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	ClapTrap
{
	private:
		std::string __name;
		size_t	__HitPoints;
		size_t	__Energy;
		size_t	__Attack_Damage;

	public:
		// member functions
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		// Constructors
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& s);
		~ClapTrap();
		// Overloads
		ClapTrap& operator=(ClapTrap const& s);

};
