/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:28:28 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/05 16:11:53 by isfernan         ###   ########.fr       */
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

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fpv = (int)num;
    this->_bpp = 0;
}

Fixed::Fixed(const float num)
{
    int     i = 0;
    float   aux = num;

    std::cout << "Float constructor called" << std::endl;
    this->_bpp = 0;
    while ((int) aux != aux)
    {
        aux = aux * 10;
        this->_bpp++;
    }
    this->_fpv = (int)aux;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const &instance)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fpv = instance.getRawBits();
    this->_bpp = instance._bpp;
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
