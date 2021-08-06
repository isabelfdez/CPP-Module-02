/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:28:15 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/06 18:22:33 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &instance);
        Fixed(const int num);
		Fixed(const float num);
		~Fixed();

		Fixed&	operator=(Fixed const &instance);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
	private:
		int					_fpv;			//fixed point value
		int					_radix;			//position of radix point
		static const int	_frac = 8;		//number of fractional bits
};

std::ostream& operator<<(std::ostream &o, Fixed const rhs);

#endif