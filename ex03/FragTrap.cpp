/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tashiget <tashiget@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 00:01:37 by tashiget          #+#    #+#             */
/*   Updated: 2024/12/11 00:01:37 by tashiget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap("default")
{
	hit_point = 100;
	energy_point = 100;
	attack_damage = 30;
	std::cout << "FragTrap: " << name << ": default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string p_name) : ClapTrap(p_name)
{
	hit_point = 100;
	energy_point = 100;
	attack_damage = 30;
	std::cout << "FragTrap: " << name << ": constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap: " << name << ": copy constructor called." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	hit_point = other.hit_point;
	energy_point = other.energy_point;
	attack_damage = other.attack_damage;
	std::cout << "FragTrap: " << name << ": copy assignment called." << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: " << name << ": destractor called." << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap: " << name << ": High five, guys!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (!hit_point)
		std::cout << "FragTrap: " << name << ": Error: You died." << std::endl;
	else if (!energy_point)
		std::cout << "FragTrap: " << name << ": Error: No energy point." << std::endl;
	else
	{
		energy_point--;
		std::cout << "FragTrap: " << name << ": Attack to " << target << "." << std::endl;
	}
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount >= hit_point)
	{
		std::cout << "FragTrap: " << name << ": take " << hit_point << " damage." << std::endl;
		hit_point = 0;
	}
	else
	{
		hit_point -= amount;
		std::cout << "FragTrap: " << name << ": take " << amount << " damage." << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (!hit_point)
		std::cout << "FragTrap: " << name << ": Error: You died." << std::endl;
	else if (!energy_point)
		std::cout << "FragTrap: " << name << ": Error: No energy point." << std::endl;
	else
	{
		hit_point += amount;
		energy_point--;
		std::cout << "FragTrap: " << name << ": Repair " << amount << " hit point." << std::endl;
	}
}
