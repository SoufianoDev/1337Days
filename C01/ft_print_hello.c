/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_print_hello.c                                           :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/17 02:01:35 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/17 01:22:53 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */


#include <unistd.h>

void ft_print_hello(void) {
    char *ptr = "Hello, World!\n";
    write(1, ptr, 14);
}
