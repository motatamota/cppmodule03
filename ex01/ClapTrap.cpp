/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:34:18 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/10 22:34:18 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap() : hit_point(10), energy_point(10), attack_damage(0)
{
	name = "default";
	std::cout << "ClapTrap: " << name << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string p_name) : name(p_name), hit_point(10), energy_point(10), attack_damage(0)
{
	std::cout << "ClapTrap: " << name << ": constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hit_point(other.hit_point), energy_point(other.energy_point), attack_damage(other.attack_damage)
{
	std::cout << "ClapTrap: " << name << ": copy constructor called." << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this == &other)
	{
		std::cout << "ClapTrap: " << name << ": copy assignment called." << std::endl;
		return (*this);
	}
	name = other.name;
	hit_point = other.hit_point;
	energy_point = other.energy_point;
	attack_damage = other.attack_damage;
	std::cout << "ClapTrap: " << name << ": copy assignment called." << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: " << name << ": destractor called." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!hit_point)
		std::cout << "ClapTrap: " << name << ": Error: You died." << std::endl;
	else if (!energy_point)
		std::cout << "ClapTrap: " << name << ": Error: No energy point." << std::endl;
	else
	{
		energy_point--;
		std::cout << "ClapTrap: " << name << ": Attack to " << target << "." << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= hit_point)
	{
		std::cout << "ClapTrap: " << name << ": take " << hit_point << " damage." << std::endl;
		hit_point = 0;
	}
	else
	{
		hit_point -= amount;
		std::cout << "ClapTrap: " << name << ": take " << amount << " damage." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!hit_point)
		std::cout << "ClapTrap: " << name << ": Error: You died." << std::endl;
	else if (!energy_point)
		std::cout << "ClapTrap: " << name << ": Error: No energy point." << std::endl;
	else
	{
		hit_point += amount;
		energy_point--;
		std::cout << "ClapTrap: " << name << ": Repair " << amount << " hit point." << std::endl;
	}
}
