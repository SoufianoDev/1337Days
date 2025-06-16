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

void ft_is_negative(int n)
{

    char result;

    if (n < 0)
        result = 'N';
    else
        result = 'P';

    write(1, &result, 1);
}