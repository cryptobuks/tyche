/**
 * GNU General Public License Version 3.0, 29 June 2007
 * Header file describing types for sockets.
 * Copyright (C) <2018>
 *               Authors: <amirkhaniansev>  <amirkhanyan.sevak@gmail.com>
 *                        <DavidPetr>       <david.petrosyan11100@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * Full notice : https://github.com/amirkhaniansev/tyche/tree/master/LICENSE
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
**/

#ifndef __TYPES__
#define __TYPES__

#include <netinet/in.h>

namespace core
{
	namespace socket
	{
		typedef int AddressFamily;
		typedef int SocketType;
		typedef int ProtocolType;
		typedef int SocketDescriptor;
		typedef unsigned char byte;
		typedef struct sockaddr_in SocketAddressIn;
		typedef struct sockaddr SocketAddress;
	}
}

#endif
