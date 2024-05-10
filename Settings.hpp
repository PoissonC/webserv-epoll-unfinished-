/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Settings.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu <yu@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:05:06 by ychen2            #+#    #+#             */
/*   Updated: 2024/05/10 12:46:25 by yu               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <sys/socket.h>
#include <netinet/in.h>

class Settings {
	public:
		Settings(u_int16_t port);
		friend class Server;
	private:
		// int					_socket_fd; it depends
		struct sockaddr_in	_addr;
};