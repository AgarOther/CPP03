/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:10:21 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/09 11:16:32 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap unknown spawned!" << std::endl;
	this->_name = "Unknown";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_is_guarding = false;
}
ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	*this = copy;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	this->_hit_points = obj._hit_points;
	this->_energy_points = obj._energy_points;
	this->_attack_damage = obj._attack_damage;
	this->_is_guarding = obj._is_guarding;
	return (*this);
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " spawned!" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_is_guarding = false;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyed!" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
	{
		std::cout << "ScavTrap is out of " << (this->_energy_points == 0 ? "energy" : "hit") << " points and couldn't attack!" << std::endl;
		return;
	}
	this->_energy_points--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	this->_is_guarding = !this->_is_guarding;
	std::cout << "ScavTrap " << (this->_is_guarding ? " is now in Gate Keeper mode!" : " stopped Gate Keeper mode!") << std::endl;
}
