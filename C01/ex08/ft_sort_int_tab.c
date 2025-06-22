/* ********************************************************************************* */
/*                                                                                   */
/*                                                                :::      ::::::::  */
/*   ft_sort_int_tab.c                                          :+:      :+:    :+:  */
/*                                                            +:+ +:+         +:+    */
/*   By: SoufianoDev <contact.devsoufiano@gmail.com>         +#+  +:+       +#+      */
/*                                                         +#+#+#+#+#+   +#+         */
/*       Created: 2025/06/22 18:27:56 by SoufianoDev            #+#    #+#           */
/*       Updated: 2025/06/22 17:28:16 by SoufianoDev            ###   ########.fr    */
/*                                                                                   */
/* ********************************************************************************* */

void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - 1)
        {
            if (tab[j] > tab[j + 1])
                ft_swap(&tab[j], &tab[j + 1]);
            j++;
        }
        i++;
    }
}
