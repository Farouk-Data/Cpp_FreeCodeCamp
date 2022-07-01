/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 07:10:23 by fech-cha          #+#    #+#             */
/*   Updated: 2022/06/29 01:53:22 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Input and output
// the prefix std:: indicates that the names cout and cin are defined inside the namespace named std;
// :: is the scope operator

#include <iostream>

// int main()
// {
// 	char sample[] = " Learning C++ ";
// 	std::cout<< sample << "In 42Network school" << std::endl;
// 	return (0);
// }

int main()
{
	std::cout << "Enter any number: " << std::endl;
	int n1 = 0;
	std::cin >> n1;
	std::cout << "The number is " << n1 << std::endl;
	return (0);
}