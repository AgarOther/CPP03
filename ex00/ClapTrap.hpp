/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scraeyme <scraeyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:57:22 by scraeyme          #+#    #+#             */
/*   Updated: 2025/01/09 11:07:41 by scraeyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int _hit_points;
		int _energy_points;
		int _attack_damage;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(ClapTrap const &obj);
		~ClapTrap();

		ClapTrap(const std::string &name);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
