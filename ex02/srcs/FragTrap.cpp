/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 21:32:22 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/05 13:07:47 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	__Attack_Damage = 30;
	__Energy = 100;
	__HitPoints = 100;
	std::cout << "FragTrap named constructor called for " 
		<< __name << std::endl;
}

FragTrap::FragTrap()
{
	__Attack_Damage = 30;
	__Energy = 100;
	__HitPoints = 100;
	__name = "Generic FragTrap";
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor called for " << __name << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << __name << " wants a high five :)" << std::endl;
}
FragTrap::FragTrap(const FragTrap &other) : ClapTrap()
{	
	std::cout << "FragTrap copy constructor called" << std::endl;
	__Attack_Damage = other.__Attack_Damage;
	__Energy = other.__Energy;
	__name = other.__name;
	__HitPoints = other.__HitPoints;
}

void	FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap " << __name << " attacks " << target
		<< " damaging them for " << __Attack_Damage << " hitpoints and expending one energy"
		<< std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& other)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	__Attack_Damage = other.__Attack_Damage;
	__Energy = other.__Energy;
	__name = other.__name;
	__HitPoints = other.__HitPoints;
	return (*this);
}
