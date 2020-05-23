/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 17:40:54 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/05/09 17:40:55 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main()
{
	Human human = Human();
	human.action("meleeAttack", "a piece of paper");
	human.action("rangedAttack", "an apple");
	human.action("intimidatingShout", "the cat");
	human.action("invalid", "hello");
	return (0);
}