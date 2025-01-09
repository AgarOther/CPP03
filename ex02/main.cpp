/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:57:28 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/09 12:48:28 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap logan("Logan");

	logan.attack("Paul");
	logan.takeDamage(5);
	FragTrap jack("Jack");
	logan.beRepaired(5);
	jack.beRepaired(5);
	jack.takeDamage(4000);
	logan.highFivesGuys();
	jack.highFivesGuys();
}
