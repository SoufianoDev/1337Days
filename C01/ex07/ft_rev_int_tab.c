/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_rev_int_tab.c                                           :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/22 13:05:16 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/07/01 18:35:53 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */





void ft_rev_int_tab(int *tab, int size){

int  temp ;
int i = 0 ;
int j = size - 1 ;

while(i < j){

    temp = tab[i];
    tab[i] = tab [j];
    tab[j] = temp;

    i++ ; 
    j-- ;
    

}

}