/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:05:36 by dbarrene          #+#    #+#             */
/*   Updated: 2024/08/01 19:07:46 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap("baboon");
	ClapTrap trap("clapper");
	clap.takeDamage(1);
	clap.beRepaired(1);
	clap.attack("madonna");
}
