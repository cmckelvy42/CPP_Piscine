/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:48:09 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/21 14:48:10 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string	_target;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string name);
	PresidentialPardonForm(const PresidentialPardonForm &cpy);
	~PresidentialPardonForm(void);
	PresidentialPardonForm& operator = (const PresidentialPardonForm &old);

	std::string	getTarget(void)				const;
	void		execute(Bureaucrat const &) const;
};

#endif