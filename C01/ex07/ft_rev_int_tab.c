/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_rev_int_tab.c                                           :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/22 17:28:16 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/22 17:31:20 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */



void ft_rev_int_tab(int *tab, int size){

int  temp , i = 0 , j = size - 1 ;
while(i < j){

    temp = tab[i];
    tab[i] = tab [j];
    tab[j] = temp ;

    i++ ; 
    j-- ;
    

}

}