/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 03:18:50 by estoffel          #+#    #+#             */
/*   Updated: 2022/10/05 04:59:39 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "VALUE ON TOP OF STACK : " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "WE POP THIS VALUE ..." << std::endl;
		std::cout << "SIZE OF THE STACK : " << mstack.size() << std::endl;

		std::cout << "------- PUSH OTHER VALUES --------" << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(-99);
		mstack.push(99999);
		mstack.push(-73);
		//[...]
		mstack.push(0);
		MutantStack<int> mstack2(mstack);
		MutantStack<int> mstack3;
		mstack3 = mstack2;
		MutantStack<int>::iterator it = mstack2.begin();
		MutantStack<int>::iterator ite = mstack2.end();
		std::cout << "FIRST VALUE : " << *it << std::endl;
		++it;
		std::cout << "SECOND VALUE : " << *it << std::endl;
		--it;
		std::cout << "FIRST VALUE : " << *it << std::endl;
		std::cout << "STACK BY COPY CONSTRUCTOR : [";
		while (it != ite)
		{	
			std::cout << *it;
			if (it != (ite - 1))
				std::cout << ", ";
			++it;
		}
		std::cout << "]" << std::endl;
		MutantStack<int>::iterator it2 = mstack3.begin();
		MutantStack<int>::iterator ite2 = mstack3.end();
		std::cout << "STACK BY ASSIGNATION : [";
		while (it2 != ite2)
		{	
			std::cout << *it2;
			if (it2 != (ite2 - 1))
				std::cout << ", ";
			++it2;
		}
		std::cout << "]" << std::endl;
		std::stack<int> s(mstack2);
	}
////////////////////////////////////////////////////////////////
	{
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);
		std::cout << "VALUE ON TOP OF STACK : " << mlist.back() << std::endl << std::endl;

		std::cout << "WE POP THIS VALUE ..." << std::endl;
		mlist.pop_back();
		
		std::cout << "SIZE OF THE STACK : " << mlist.size() << std::endl << std::endl;
		
		std::cout << "------- PUSH OTHER VALUES --------" << std::endl;
		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(-99);
		mlist.push_back(99999);
		mlist.push_back(-73);
		mlist.push_back(0);
		
		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();
		std::cout << "FIRST VALUE : " << *it << std::endl;
		++it;
		std::cout << "SECOND VALUE : " << *it << std::endl;
		--it;
		std::cout << "FIRST VALUE : " << *it << std::endl;
		std::cout << "LIST : [";
		while (it != ite)
		{
			std::cout << *it;
			std::cout << ", ";
			++it;
		}
		std::cout << "]" << std::endl;
	}
	return 0;
}

