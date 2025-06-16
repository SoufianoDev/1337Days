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

void    ft_putchar(char c) {
    write(1, &c, 1);
}


