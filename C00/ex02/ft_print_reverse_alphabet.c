/**
 * /* ************************************************************************** */
 * /*                                                                            */
 * /*                                                        :::      ::::::::   */
 * /*   {filename}                                        :+:      :+:    :+:   */
 * /*                                                    +:+ +:+         +:+     */
 * /*   By: SoufianoDev <contact.devsoufiano@gmail.com>   +#+  +:+       +#+        */
 * /*                                                +#+#+#+#+#+   +#+           */
 * /*   Created: {date} by SoufianoDev                      #+#    #+#             */
 * /*   Updated: {date} by SoufianoDev                      ###   ########.fr       */
 * /*                                                                            */
 * /* ************************************************************************** */
 * */

#include <unistd.h>

void ft_print_reverse_alphabet()
{
    char alpha = 'z';
    while (alpha >= 'a')
    {
        write(1, &alpha, 1);
        alpha--;
    }
}

