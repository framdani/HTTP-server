/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 21:03:58 by iidzim            #+#    #+#             */
/*   Updated: 2022/05/09 21:35:15 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef SERVER_HPP
// #define SERVER_HPP
#pragma once

#include "Socket.hpp"
#include "webserv.hpp"
#define BUFF_SIZE 2048*100

class Server{

	private:

		std::vector<int>				_socket_fd;
		std::string						_msg;
		std::vector<struct sockaddr_in>	_address;
		std::vector<struct pollfd>		_fds;

		void socketio(std::vector<serverInfo> server_conf);
		void accept_connection(int i);
		void recv_request(int i, Clients *c);
		void send_response(int i, Clients *c);
		void close_fd(void);
		void brokenPipe(Clients *c, int i);

	public:

		Server(std::vector<Socket> s, std::vector<serverInfo> server_conf);
		~Server();

};

static bool broken_pipe;

// #endif