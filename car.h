#pragma once

constexpr float RATE_PAY_LATER = .1934;

namespace car {
	struct car {
		char make[20];
		char model[20];
		char color[10];
		char plate_num[30];
		//char vech_reg[50];
		char transmission[10];
		char mileage[10];
		int doors_cap;
		int seats;
		float rate_per_day;
		float rate_per_half;
		float rate_per_hour;
		float discount_rate;
		float pay_now;
		float pay_later = pay_now * RATE_PAY_LATER;

		enum type : short { Compact, Ecomony, Intermediate, FullSize, Standard };
	};
}