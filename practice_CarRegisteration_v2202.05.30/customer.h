#pragma once
using namespace std;

constexpr int SIZE = 30;



namespace Customer {

	struct Customer {
		char id; //generate unique id for each customer
		char f_name[50];
		char l_name[50];
		char phone_num[16];
		char f_address[100];
		char s_address[500];
		char city[100];
		char state[50];
		char zip[10];
		char full_name[150];
		char full_address[1500]; //combine _> f_address + +s_address + city + state + zip ;
		char full_cust[3000];


	};


}


