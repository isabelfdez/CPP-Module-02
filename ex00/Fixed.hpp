/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:49:01 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/05 15:13:42 by isfernan         ###   ########.fr       */
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
		~Fixed();

		Fixed&	operator=(Fixed const &instance);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
	private:
		int					_fpv;
		static const int	_frac = 8;
};

#endif