/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 21:32:22 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/05 12:51:57 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	__Attack_Damage = 20;
	__Energy = 50;
	__HitPoints = 100;
	std::cout << "ScavTrap named constructor called for " 
		<< __name << std::endl;
}

ScavTrap::ScavTrap()
{
	__Attack_Damage = 20;
	__Energy = 50;
	__HitPoints = 100;
	__name = "Generic ScavTrap";
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called for " << __name << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << __name << " is now in guard mode" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap()
{	
	std::cout << "ScavTrap copy constructor called" << std::endl;
	__Attack_Damage = other.__Attack_Damage;
	__Energy = other.__Energy;
	__name = other.__name;
	__HitPoints = other.__HitPoints;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << __name << " attacks " << target
		<< " damaging them for " << __Attack_Damage << " hitpoints and expending one energy"
		<< std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& other)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	__Attack_Damage = other.__Attack_Damage;
	__Energy = other.__Energy;
	__name = other.__name;
	__HitPoints = other.__HitPoints;
	return (*this);
}
