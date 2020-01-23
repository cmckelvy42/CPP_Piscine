/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:24:45 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/22 17:39:43 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <string>
#include <cstdlib>
#include <iostream>

#define PRINT(x) std::cout << x << std::endl

struct Data
{
    int            n;
    std::string    s1;
    std::string    s2;
};

void
*serialize(void)
{
    Data           *ret = new Data;
    static char    set[] = "abcdefghijklmnopqrstuvwxyz"
                           "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                           "1234567890";

    for (int i = 0; i < 8; i += 1)
        ret->s1 += set[rand() % sizeof(set)];
    ret->n = rand() * (rand() % 2 ? 1 : -1);
    for (int i = 0; i < 8; i += 1)
        ret->s2 += set[rand() % sizeof(set)];
	PRINT("pre s1: " << ret->s1);
	PRINT("pre n: " << ret->n);
	PRINT("pre s2: " << ret->s2);
	return(reinterpret_cast<void*>(ret));
}

Data	*deserialize(void *raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int		main(void)
{
 	srand(time(0));
    void           *s = serialize();
    Data           *d = deserialize(s);

    PRINT("s1: " << d->s1);
	PRINT("n: " << d->n);
	PRINT("s2: " << d->s2);
    delete d;
    return (0);
}