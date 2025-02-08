/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:04:08 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/05 13:04:09 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

PhoneBook::PhoneBook()
{
    i = 0;
    std::cout  << "creation de l'objet PhoneBook: " << this << std::endl;
}

PhoneBook::PhoneBook(const PhoneBook& other_rep)
{
    (void)other_rep;
}

PhoneBook& PhoneBook::operator=(const PhoneBook& other_rep)
{
    (void)other_rep;
    return (*this);
}

PhoneBook::~PhoneBook()
{
    std::cout << "destruction de l'objet PhoneBook : " << this << std::endl;
}

void    PhoneBook::affichage()
{
    i = 0;
    while (i < 8)
    {
        cont[i].affichage();
        i++;
    }
}

void    PhoneBook::add()
{
    int status;

    i = 0;
    status = 0;
    while (i < 8)
    {
        if (cont[i].index == -1 || status)
        {
            status = cont[i].add(i, status);
            if (status)
                continue ;
            return ;
        }
        if (status == 0)
            i++;
    }
    i--;
    while (i > 0)
    {
        cont[i] = cont[i - 1];
        cont[i].index++;
        i--;
    }
    while (1)
        if (cont[i].add(i, status) == 0)
            break ;
}

void    PhoneBook::search()
{
    std::string input;

    i = 0;
    while (1)
    {
        std::cout << "identifiant of Contact between 0 - 7: ";
        std::getline(std::cin, input);
        std::istringstream stream(input);
        if (stream >> i && stream.eof())
        {
            if (i >= 0 && i < 8)
            {
                cont[i].affichage();
                break ;
            }
            else
                std::cout << "Entrée invalide. Essayez à nouveau." << std::endl;
        }
        else
        {
            std::cout << "Entrée invalide. Essayez un entier." << std::endl;
            stream.clear();
        }
    }
}
