// ch_08_08_class_code_and_header_file.cpp
#include "ch_08_08_class_code_and_header_file.hpp"

int main()
{
	Calc	cal(10);
	Calc	&tmp1 = cal.add(10);
	Calc	&tmp2 = tmp1.sub(1);
	Calc	&tmp3 = tmp2.mult(2);
	tmp3.print();
	return (0);
}
