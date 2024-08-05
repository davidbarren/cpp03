/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:05:36 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/05 13:05:37 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
int	main(void)
{
	ClapTrap clap("clappy");
	ScavTrap scav("scavvy");

	ClapTrap clapper;
	FragTrap fragster("fragster");
	FragTrap fraggy;
	fragster.highFivesGuys();
	clapper = clap;
	clap.print_attributes();
	scav.print_attributes();
	clap.attack("target");
	scav.attack("target");
	scav.guardGate();
	ScavTrap abc;
	abc.print_attributes();
	abc.guardGate();
	abc.takeDamage(69);
	abc.beRepaired(42);
	abc = scav;
	abc.print_attributes();

}
