/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:46:29 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/05 12:46:30 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

int main()
{
    PhoneBook   rep;
    std::string line;

    while (1)
    {
        std::cout << "ENTER A COMMAND: ADD, SEARCH, EXIT : ";
        std::getline(std::cin, line);
        if (line == "ADD")
            rep.add();
        else if (line == "SEARCH")
            rep.search();
        else if (line == "EXIT")
        {
            rep.~PhoneBook();
            exit(0);
        }
    }
    return (0);
}