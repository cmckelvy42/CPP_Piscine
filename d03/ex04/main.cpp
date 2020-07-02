/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 11:37:22 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/06/10 19:16:07 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main()
{
	/*std::cout << "FragTrap" << std::endl;
	FragTrap ft = FragTrap("D3TH-TP");

	ft.rangedAttack("Jack");
	ft.meleeAttack("Wilhelm");
	
	ft.takeDamage(42);
	ft.takeDamage(42);
	ft.takeDamage(42);
	ft.beRepaired(1);
	ft.beRepaired(500);

	ft.vaulthunter_dot_exe("Axton");
	ft.vaulthunter_dot_exe("Gaige");
	ft.vaulthunter_dot_exe("Zer0");
	ft.vaulthunter_dot_exe("Maya");
	ft.vaulthunter_dot_exe("Tina");

	ft.takeDamage(24);
	FragTrap ff = ft;
	std::cout << ff.getName() << std::endl;
	std::cout << ff.getHP() << std::endl;
	std::cout << ff.getMP() << std::endl;
	
	std::cout << std::endl << "ScavTrap" << std::endl;
	ScavTrap st = ScavTrap("P1T-TP");

	st.rangedAttack("Minion A");
	st.meleeAttack("Minion B");

	st.takeDamage(42);
	st.takeDamage(100);
	st.beRepaired(5);
	st.beRepaired(200);

	st.challengeNewcomer("Brick");
	st.challengeNewcomer("Lilith");
	st.challengeNewcomer("Mordecai");
	st.challengeNewcomer("Roland");\

	st.takeDamage(24);
	ScavTrap ss = st;
	std::cout << ss.getName() << std::endl;
	std::cout << ss.getHP() << std::endl;
	std::cout << ss.getMP() << std::endl;

	NinjaTrap nt = NinjaTrap("N0-TP");
	ClapTrap ct = ClapTrap("Cl4P-TP");
	nt.ninjaShoebox(ct);
	nt.ninjaShoebox(ft);
	nt.ninjaShoebox(st);
	nt.ninjaShoebox(nt);*/
	FragTrap ft = FragTrap("Test");

	std::cout << "SUPER TRAP" << std::endl;
	SuperTrap super = SuperTrap("Superman");
	SuperTrap st = super;
	std::cout << "HP is " << st.getHP() << std::endl;
	std::cout << "EP is " << st.getMP() << std::endl;
	st.rangedAttack("Steven");
	st.meleeAttack("Alex");
	st.vaulthunter_dot_exe("Andy");
	st.ninjaShoebox(ft);

	return (0);
}