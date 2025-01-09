/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:57:28 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/09 11:12:26 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap logan("Logan");

	logan.attack("Paul");
	logan.takeDamage(5);
	ScavTrap copy(logan);
	logan.beRepaired(5);
	copy.beRepaired(5);
	copy.takeDamage(4000);
}
