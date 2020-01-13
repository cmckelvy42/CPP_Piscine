/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 14:19:04 by cmckelvy          #+#    #+#             */
/*   Updated: 2019/12/28 18:29:49 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_HPP
# define PERSON_HPP

# include <iostream>
# include <string>

class person
{
    private:
        std::string first;
        std::string last;
        std::string nick;
        std::string login;
        std::string address;
        std::string email;
        std::string phone;
        int         bmonth;
        int         bday;
        int         byear;
        std::string meal;
        std::string color;
        std::string secret;
    public:
        bool    exists(void);
        void    addPerson(void);
        void    showIndex(int i);
        void    showPerson(void);
};

#endif
