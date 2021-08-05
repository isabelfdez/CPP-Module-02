/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:28:15 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/05 16:10:28 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed &instance);
        Fixed(const int num);
		Fixed(const float num);
		~Fixed();

		Fixed&	operator=(Fixed const &instance);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
	private:
		int					_fpv;			//fixed point value
		int					_bpp;			//binary point position
		static const int	_frac = 8;
};

#endif