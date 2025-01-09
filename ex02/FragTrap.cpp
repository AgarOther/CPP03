/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:38:10 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/09 12:48:22 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap unknown spawned!" << std::endl;
	this->_name = "Unknown";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}
FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	*this = copy;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	this->_hit_points = obj._hit_points;
	this->_energy_points = obj._energy_points;
	this->_attack_damage = obj._attack_damage;
	return (*this);
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name)
{
	std::cout << "FragTrap " << name << " spawned!" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << this->_name << " is requesting for a high fives!" << std::endl;
}
