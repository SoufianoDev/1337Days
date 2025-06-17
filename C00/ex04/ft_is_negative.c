/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:11:46 by SoufianoDev       #+#    #+#             */
/*   Updated: 2025/06/17 00:37:02 by SoufianoDev       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




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
