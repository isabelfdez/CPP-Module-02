/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:19:03 by isfernan          #+#    #+#             */
/*   Updated: 2021/08/06 18:02:14 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <string>
# include <cmath>


int		to_base2(int num)
{
	int		a[55], i;

	for (i = 0; num > 0; i++)
	{
		a[i] = num % 2;
		num = num / 2;
	}
	
	int		b[i], j = 0, c;

	for (i = i-1; i >= 0 ; i--)
	{
		b[j] = a[i];
		j++;
	}
	int		k = 0;

	for (i = 0; i < j; i++)
    	k = 10 * k + b[i];
	return (k);
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

int main()
{
    std::cout << (int)roundf(10.55) << std::endl;

	
    std::cout << "10 " << count_digits(10) << std::endl;
    std::cout << "0 " << count_digits(0) << std::endl;
    std::cout << "478 " << count_digits(478) << std::endl;
    std::cout << "927 " << count_digits(927) << std::endl;


}