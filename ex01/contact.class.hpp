/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:15:15 by simarcha          #+#    #+#             */
/*   Updated: 2024/11/26 19:21:36 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_CLASS_H
#define	CONTACT_CLASS_H
#include <string>

class	Contact
{
	private:
		int					index;
		const std::string	first_name;
		const std::string	last_name;
		const std::string	nickname;
		const std::string	phone_number;
		const std::string	darkest_secret;

	public:
		Contact(int idx, const std::string& fn, const std::string& ln, const std::string& nick,
		const std::string& phone, const std::string& secret);
		~Contact(void);

	int			get_contact_index() const {return index;}
	std::string get_first_name() const {return first_name;}
	std::string get_last_name() const {return last_name;}
	std::string get_nickname() const {return nickname;}
	std::string get_phone_number() const {return phone_number;}
	std::string get_darkest_secret() const {return darkest_secret;}
};

#endif