/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simarcha <simarcha@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:15:15 by simarcha          #+#    #+#             */
/*   Updated: 2024/11/28 19:01:31 by simarcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_CLASS_H
#define	CONTACT_CLASS_H
#include <string>

class	Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;

	public:
	Contact();
	~Contact();
	int			index;
	int			get_contact_index() const {return index;}
	std::string get_first_name() const {return _first_name;}
	std::string get_last_name() const {return _last_name;}
	std::string get_nickname() const {return _nickname;}
	std::string get_phone_number() const {return _phone_number;}
	std::string get_darkest_secret() const {return _darkest_secret;}

	void		set_index(int idx);
	void		set_first_name(std::string str);
	void		set_last_name(std::string str);
	void		set_nickname(std::string str);
	void		set_phone_number(std::string str);
	void		set_darkest_secret(std::string str);
};

#endif