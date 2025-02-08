/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:55:52 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/05 12:55:53 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define    PHONE_BOOK_HPP

# include <iostream>
# include <cstdlib>
# include <sstream>
# include <iomanip>

class   Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_num;
        std::string secret;

    public:
        // publique car je dois l'incrementer si l'utilisateur entre 
        // une 9 eme contact
        int index;

        Contact();
        Contact(const Contact& other_cont);
        Contact& operator=(const Contact& other_cont);
        ~Contact();
        void    affichage();
        int    add(int i, int status);
};

class   PhoneBook
{
    private:
        int i;
        Contact cont[8];

    public:

        // constructeur par defaut
        PhoneBook();

        // constructeur de copie
        PhoneBook(const PhoneBook& other_rep);

        // operateur d'assignation
        PhoneBook& operator=(const PhoneBook& other_rep);

        // destructeur
        ~PhoneBook();

        void    affichage();
        void    add();
        void    search();
};

#endif
