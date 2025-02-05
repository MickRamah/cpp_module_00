/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:25:46 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/05 09:25:48 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 1)
    {
        std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
        return (1);
    }
    i = 0;
    while (argv[++i])
    {
        j = -1;
        while (argv[i][++j])
        {
            if (argv[i][j] >= 97 && argv[i][j] <= 122)
                std::cout << char(argv[i][j] - 32);
            else
                std::cout << argv[i][j];
        }
        if (argv[i + 1])
            std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}
