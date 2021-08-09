/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:28:15 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/09 15:00:40 by isfernan         ###   ########.fr       */
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

		Fixed&				operator=(Fixed const &instance);
		
		Fixed				operator+(Fixed const &instance)	const;
		Fixed				operator-(Fixed const &instance)	const;
		Fixed				operator*(Fixed const &instance)	const;
		Fixed				operator/(Fixed const &instance)	const;

		bool				operator>(Fixed const &instance)	const;
		bool				operator<(Fixed const &instance)	const;
		bool				operator>=(Fixed const &instance)	const;
		bool				operator<=(Fixed const &instance)	const;
		bool				operator==(Fixed const &instance)	const;
		bool				operator!=(Fixed const &instance)	const;

		Fixed&				operator++(void);
		Fixed				operator++(int a);
		Fixed&				operator--(void);
		Fixed				operator--(int a);

		static Fixed&		min(Fixed &f1, Fixed &f2);
		static Fixed&		max(Fixed &f1, Fixed &f2);
		static const Fixed&	min(Fixed const &f1, Fixed const &f2);
		static const Fixed& max(Fixed const &f1, Fixed const &f2);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);

		int					toInt(void) const;
		float				toFloat(void) const;

	private:
		int					_fpv;			//fixed point value
		static const int	_frac = 8;		//number of fractional bits
};

std::ostream& operator<<(std::ostream &o, Fixed const &rhs);

int		fix(float n);
int		count_digits(const int num);


#endif