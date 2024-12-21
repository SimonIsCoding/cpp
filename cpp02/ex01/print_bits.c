/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 16:44:31 by simon             #+#    #+#             */
/*   Updated: 2024/12/21 17:10:58 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

void print_bits_base2(int value)
{
    int total_bits = sizeof(value) * 8; // Nombre total de bits dans un unsigned int (32 bits)
    int byte_count = total_bits / 8;    // Nombre total d'octets (4 octets pour un entier 32 bits)

    for (int i = total_bits - 1; i >= 0; i--)
	{
        char bit = (value >> i & 1) + '0';
        write(1, &bit, 1);
        if (i % 8 == 0 && i != 0)
            write(1, " ", 1);
    }
    write(1, "\n", 1);
}

int	main(void)
{
	print_bits_base2(42.42);
	print_bits_base2(10859.5);
	write(1, "\n", 1);
	print_bits_base2(1234.43);
	print_bits_base2(316015);

	write(1, "\n", 1);
	int n = 2147483648;
	print_bits_base2(n);
	print_bits_base2(n * (1 << 2));
	
	return (0);
}