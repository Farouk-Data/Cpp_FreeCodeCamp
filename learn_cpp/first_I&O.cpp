/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_I&O.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 07:10:23 by fech-cha          #+#    #+#             */
/*   Updated: 2022/07/03 18:36:40 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Input and output
// the prefix std:: indicates that the full_names cout and cin are defined inside the full_namespace full_named std;
// :: is the scope operator

#include <iostream>

// int main()
// {
// 	char sample[] = " Learning C++ ";
// 	std::cout<< sample << "In 42Network school" << std::endl;
// 	return (0);
// }

// int main()
// {
// 	std::cout << "Enter any number: " << std::endl;
// 	int n1 = 0;
// 	std::cin >> n1;
// 	std::cout << "The number is " << n1 << std::endl;
// 	return (0);
// }

int main ()
{
	// std::cout << "Testing newline. \n";
	// std::cout << "Test2";
	//get Data with spaces
	int	num;
	
	std::string full_name;

	std::cout << "Enter full_Name :" << std::endl;
	std::getline(std::cin, full_name);
	
	std::cout << "Enter Age :" << std::endl;
	std::cin >> num;

	std::cout << "full_Name : " << full_name << std::endl << "Age : " << num << std::endl;
	
	return (0);
}