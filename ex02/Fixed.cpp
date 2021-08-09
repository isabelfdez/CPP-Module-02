/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:28:28 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/09 15:07:14 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructor & destructor

Fixed::Fixed(void)
{
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &instance)
{
	*this = instance;
}

Fixed::Fixed(const int num)
{
	this->_fpv = (int)num * 256;
}

Fixed::Fixed(const float num)
{
	int     i = 0;
	float   aux = num, aux2 = num;

	while ((int) aux != aux)
		aux = aux * 10;
	this->_fpv = fix(aux2);
}

Fixed::~Fixed(void)
{
}



// Operator overloads

std::ostream& operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}

Fixed&	Fixed::operator=(Fixed const &instance)
{
	this->_fpv = instance.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &instance)	const
{
	Fixed	fpv;

	fpv.setRawBits(instance.getRawBits() + this->getRawBits());
	return (fpv);
}

Fixed	Fixed::operator-(Fixed const &instance)	const
{
	Fixed	fpv;

	fpv.setRawBits(this->getRawBits() - instance.getRawBits());
	return (fpv);
}

Fixed	Fixed::operator*(Fixed const &instance)	const
{
	Fixed	fpv;

	fpv.setRawBits(instance.getRawBits() * this->getRawBits() / 256);
	return (fpv);
}

Fixed	Fixed::operator/(Fixed const &instance)	const
{
	Fixed	fpv;

	fpv.setRawBits((this->getRawBits() / instance.getRawBits()) * 256);
	return (fpv);
}

bool	Fixed::operator>(Fixed const &instance)	const
{
	if (this->getRawBits() > instance.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed const &instance)	const
{
	if (this->getRawBits() < instance.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const &instance)	const
{
	if (this->getRawBits() >= instance.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const &instance)	const
{
	if (this->getRawBits() <= instance.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const &instance)	const
{
	if (this->getRawBits() == instance.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const &instance)	const
{
	if (this->getRawBits() != instance.getRawBits())
		return (true);
	else
		return (false);
}

Fixed&	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return(*this);
}

Fixed	Fixed::operator++(int a)
{
	Fixed old(*this);
	++(*this);
	return(old);
}

Fixed&	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return(*this);
}

Fixed	Fixed::operator--(int a)
{
	Fixed old(*this);
	--(*this);
	return(old);
}



//Other member fuunctions

int		Fixed::getRawBits(void) const
{
	return (this->_fpv);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fpv = raw;
}

int		Fixed::toInt(void) const
{
	return((int)this->getRawBits() / 256);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / 256);
}

Fixed&	Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

Fixed&	Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

const Fixed&	Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

const Fixed&	Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}



//Utils

int		fix(float n)
{
	return ((int)roundf(n * 256));
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

