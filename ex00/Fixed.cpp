/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:55:43 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/05 15:16:58 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->setRawBits(0);
}

Fixed::Fixed(Fixed &instance)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_fpv = instance.getRawBits();
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
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fpv);
}

void	Fixed::setRawBits(int const raw)
{
    this->_fpv = raw;
}
