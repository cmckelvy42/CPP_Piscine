/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmckelvy <cmckelvy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 12:42:10 by cmckelvy          #+#    #+#             */
/*   Updated: 2020/01/21 14:40:24 by cmckelvy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
#define OFFICEBLOCK_HPP

#include "Intern.hpp"
#include "Bureaucrat.hpp"

class	OfficeBlock
{
private:
	Intern		*_intern;
	Bureaucrat	*_bcrat1;
	Bureaucrat	*_bcrat2;
public:
	OfficeBlock(void);
	OfficeBlock(Intern &intern, Bureaucrat &bcrat1, Bureaucrat &bcrat2);
	OfficeBlock(const OfficeBlock &cpy);
	~OfficeBlock(void);
	OfficeBlock&	operator = (const OfficeBlock &old);

	Intern		*getIntern(void) const;
	Bureaucrat	*getSigner(void) const;
	Bureaucrat	*getExecutor(void) const;

	void	doBureaucracy(std::string title, std::string target);
	void	setIntern(Intern &intern);
	void	setSigner(Bureaucrat &bcrat);
	void	setExecutor(Bureaucrat &bcrat);
	
	class	IncompleteBlockException : public std::exception
	{
	public:
		IncompleteBlockException(void);
		IncompleteBlockException(const IncompleteBlockException &cpy);
		~IncompleteBlockException(void) throw();
		IncompleteBlockException& operator = (const IncompleteBlockException &old);
		virtual const char* what() const throw();
	};
};
#endif