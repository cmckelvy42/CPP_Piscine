/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 14:52:22 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/21 14:54:59 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string	_target;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string name);
	RobotomyRequestForm(const RobotomyRequestForm &cpy);
	~RobotomyRequestForm(void);
	RobotomyRequestForm& operator = (const RobotomyRequestForm &old);

	std::string	getTarget(void)				const;
	void		execute(Bureaucrat const &) const;
};

#endif