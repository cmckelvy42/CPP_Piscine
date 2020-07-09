/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 14:19:44 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/07/08 18:39:15 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* a = new RadScorpion();
	Enemy* b = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(a);
	me->attack(b);
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->equip(pf);
	me->equip(pr);
	me->recoverAP();
	std::cout << *me;
	me->attack(a);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	return 0;
}