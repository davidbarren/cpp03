/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:48:31 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/02 02:48:52 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "default constructor called for "
		<< this->__name << std::endl;
}
ClapTrap::ClapTrap(std::string name): __name(name){
	this->__HitPoints = 10;
	this->__Energy = 10;
	this->__Attack_Damage = 0;
	std::cout << "constructor called for " << this->__name << std::endl;

}
ClapTrap::ClapTrap(ClapTrap const& s){
	this->__name = s.__name;
	this->__Energy = s.__Energy;
	this->__HitPoints = s.__HitPoints;
	this->__Attack_Damage = s.__Attack_Damage;
	std::cout << "copy constructor called" << std::endl;
}
ClapTrap::~ClapTrap(){
	std::cout << "default destructor called for "
		<< this->__name << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->__HitPoints < 1 || this->__Energy < 1)
		return ;
	this->__Energy -= 1;
	std::cout << this->__name << " attacks " << target << " causing "
		<< this->__Attack_Damage << " points of damage and expending one energy"
		<< " leaving " << this->__name << " with " << this->__Energy
		<< " energy points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->__HitPoints < 1)
	{
		std::cout << this->__name << " is dead and cannot be interacted with" << std::endl;
		return ;
	}
	this->__HitPoints -= amount;
	std::cout << this->__name << " has lost " << amount << " hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->__HitPoints < 1 || this->__Energy < 1)
		return ;
	this->__HitPoints += amount;
	this->__Energy -= 1;
	std::cout << this->__name << " has repaired " << amount << " hit points and lost"
		<< " one energy point, leaving him with " << this->__Energy <<
		" energy points" << " and " << this->__HitPoints << " hit points" << std::endl;;
}
