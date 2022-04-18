/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Response.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:51:13 by iidzim            #+#    #+#             */
/*   Updated: 2022/04/17 23:36:50 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RESPONSE_HPP
# define RESPONSE_HPP

class Response{

    private:
        std::string _response;
        std::string _headers;
        int _body_file;
    public:
        Response(){}
        ~Response(){}
        std::string get_response(){
            return _response;
        }
        std::string get_headers(){
            return _headers;
        }
        int get_body_file(){
            return _body_file;
        }
};

#endif