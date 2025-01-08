/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 23:18:12 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/10 23:18:12 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap("default")
{
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
	std::cout << "ScavTrap: " << name << ": default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string p_name) : ClapTrap(p_name)
{
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
	std::cout << "ScavTrap: " << name << ": constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap: " << name << ": copy constructor called." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this == &other)
	{
		std::cout << "ScavTrap: " << name << ": copy assignment called." << std::endl;
		return (*this);
	}
	ClapTrap::operator=(other);
	hit_point = other.hit_point;
	energy_point = other.energy_point;
	attack_damage = other.attack_damage;
	std::cout << "ScavTrap: " << name << ": copy assignment called." << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: " << name << ": destractor called." << std::endl;
}


void	ScavTrap::attack(const std::string& target)
{
	if (!hit_point)
		std::cout << "ScavTrap: " << name << ": Error: You died." << std::endl;
	else if (!energy_point)
		std::cout << "ScavTrap: " << name << ": Error: No energy point." << std::endl;
	else
	{
		energy_point--;
		std::cout << "ScavTrap: " << name << ": Attack to " << target << "." << std::endl;
	}
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount >= hit_point)
	{
		std::cout << "ScavTrap: " << name << ": take " << hit_point << " damage." << std::endl;
		hit_point = 0;
	}
	else
	{
		hit_point -= amount;
		std::cout << "ScavTrap: " << name << ": take " << amount << " damage." << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (!hit_point)
		std::cout << "ScavTrap: " << name << ": Error: You died." << std::endl;
	else if (!energy_point)
		std::cout << "ScavTrap: " << name << ": Error: No energy point." << std::endl;
	else
	{
		hit_point += amount;
		energy_point--;
		std::cout << "ScavTrap: " << name << ": Repair " << amount << " hit point." << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap: " << name << ": Guard." << std::endl;
}
