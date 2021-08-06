/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:47:57 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/06 18:24:40 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	//std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	//std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	//std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	//std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return (0);
}