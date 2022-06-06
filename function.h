#pragma once
#include "customer.h"

constexpr int SIZE = 30;  //may be necessary later to use in header files create table 

namespace function {
	class func {

		void c_table() {


			Customer::Customer cust;
			//dynamic array or table 
			char* cust_table = new char[30]{ cust.id, cust.f_name, cust.l_name, phone_num, f_address }; //SIZE
			int* cus_table = new int[];
			std::unique_ptr<int[]> cust_table(new int[30]);
			//delete[] cust_table;


			for (size_t i = 0; cust.full_cust; i++) {
				char cust_table[i][9] = cust.full_cust;
			}
		}
	};

}