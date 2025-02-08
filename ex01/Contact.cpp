/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:29:56 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/05 13:29:57 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

Contact::Contact()
{
    index = -1;
    std::cout  << "creation de l'objet Contact: " << this << std::endl;
}

Contact::Contact(const Contact& cont)
{
    (void)cont;
}

Contact&    Contact::operator=(const Contact& other_cont)
{
    if (this == &other_cont)
        return (*this);
    index = other_cont.index;
    first_name = other_cont.first_name;
    last_name = other_cont.last_name;
    nickname = other_cont.nickname;
    return (*this);
}

Contact::~Contact()
{
    std::cout << "destruction de l'objet Contact : " << this << std::endl;
}

void    Contact::affichage()
{
    if (index == -1)
    {
        std::cout << "liste vide!" << std::endl;
        return ;
    }
    std::cout << "|" << std::setw(10) << index << " ";
    if (first_name.length() > 10)
        std::cout << "|" << std::setw(10) << first_name.substr(0, 9) + ".";
    else
        std::cout << "|" << std::setw(10) << first_name << " ";
    if (last_name.length() > 10)
        std::cout << "|" << std::setw(10) << last_name.substr(0, 9) + ".";
    else
        std::cout << "|" << std::setw(10) << last_name << " ";
    if (nickname.length() > 10)
        std::cout << "|" << std::setw(10) << nickname.substr(0, 9) + "." << "|" << std::endl;
    else
        std::cout << "|" << std::setw(10) << nickname << "|" << std::endl;
}

int    Contact::add(int i, int status)
{
    index = i;
    if (status == 0 || status == 1)
    {
        std::cout << "your first name: ";
        std::getline(std::cin, first_name);
    }
    if (first_name.empty())
        return (1);
    if (status == 0 || status == 1 || status == 2)
    {
        std::cout << "your last name: ";
        std::getline(std::cin, last_name);
    }
    if (last_name.empty())
        return (2);
    if (status == 0 || status == 1 || status == 2 || status == 3)
    {
        std::cout << "your nickname: ";
        std::getline(std::cin, nickname);
    }
    if (nickname.empty())
        return (3);
    return (0);
}