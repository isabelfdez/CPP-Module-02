/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:28:28 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/09 13:38:31 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &instance)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

int		count_digits(const int num)
{
	int		ret = 0;
	int		aux = num;
	
	while (aux > 0)
	{
		ret++;
		aux = aux / 10;
	}
	return (ret);
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fpv = (int)num * 256;
}

int		fix(float n)
{
	return ((int)roundf(n * 256));
}

Fixed::Fixed(const float num)
{
	int     i = 0;
	float   aux = num, aux2 = num;

	std::cout << "Float constructor called" << std::endl;
	while ((int) aux != aux)
		aux = aux * 10;
	this->_fpv = fix(aux2);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const &instance)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fpv = instance.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->_fpv);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fpv = raw;
}

std::ostream& operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}

int		Fixed::toInt(void) const
{
	return((int)this->getRawBits() / 256);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / 256);
}

