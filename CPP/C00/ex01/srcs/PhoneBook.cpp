/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trpham <trpham@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 15:52:43 by trpham            #+#    #+#             */
/*   Updated: 2025/08/02 14:14:18 by trpham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	// std::memset(ContactList, 0, 8 * sizeof(Contact));	
}

PhoneBook::~PhoneBook(){}



int	main()
{
	PhoneBook	phonebook;
	std::string		input;
	
	std::cout << "Please type: \n ADD to add a new contact \n SEARCH to search an existing contact \n EXIT to exit the program." << std::endl;
	while (1)
	{
		std::cout << "How could I help ? ";
		std::cin >> input;
		
		if (input == "ADD")
			phonebook.AddContact();
		// else if (input == "SEARCH")
		// {
			
		// }
		else if (input == "EXIT")
			exit(EXIT_SUCCESS);
		else
			std::cout << "Invalid input! \n";
	}
	return 0;
}
