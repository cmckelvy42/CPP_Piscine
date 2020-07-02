/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 18:00:46 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/12 19:35:14 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{ std::cout << "Nin nin" << std::endl; }
NinjaTrap::NinjaTrap(void) { }
NinjaTrap::NinjaTrap(const NinjaTrap &cpy) : ClapTrap(cpy) { *this = cpy; }
NinjaTrap::~NinjaTrap(void) { std::cout << "Default NinjaTrap deconstructor called" << std::endl; }

int			NinjaTrap::getMP(void)	const	{ return (_MP); }
int			NinjaTrap::getMeleeDamage(void)	const	{ return (_meleeDamage); }

NinjaTrap&	NinjaTrap::operator = (const NinjaTrap &other)
{
	if (this != &other)
	{
		_name = other.getName();
		_level = other.getLevel();
		_HP = other.getHP();
		_MP = other.getMP();
	}
	std::cout << "Seeing double!" << std::endl;
	return (*this);
}



void	NinjaTrap::rangedAttack(std::string const & target)
{
	ClapTrap::rangedAttack(target);
	std::cout << "shuriken!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	ClapTrap::meleeAttack(target);
	std::cout << "dagger!" << std::endl;
}
void	NinjaTrap::ninjaShoebox(ClapTrap const & target)
{ std::cout << target.getName() << " finds a mirror in the shoebox" << std::endl; }

void	NinjaTrap::ninjaShoebox(FragTrap const & target)
{ std::cout << target.getName() << " finds a grenade in the shoebox" << std::endl; }

void	NinjaTrap::ninjaShoebox(ScavTrap const & target)
{ std::cout << target.getName() << " finds a bug in the shoebox" << std::endl; }

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{ std::cout << target.getName() << " finds nothing in the shoebox" << std::endl; }
