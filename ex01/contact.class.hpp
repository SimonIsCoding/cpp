/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:15:15 by simarcha          #+#    #+#             */
/*   Updated: 2024/11/25 16:55:36 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_CLASS_H
#define	CONTACT_CLASS_H

class	Contact
{
	public:
		Contact(void);
		~Contact(void);

	private:
		char	*darkest_secret;
		char	*first_name;
		char	*last_name;
		char	*nickname;
		char	*phone_number;
		
};

#endif