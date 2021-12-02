// Test.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include "textable.h"
#include "print_t.h"
using namespace std;

int main()
{
	odin_t odin = odin_t();
	dva_t dva = dva_t();
	tri_t tri = tri_t();
	textable* arr[] = { &odin, &dva, &tri };

	print_t print_obj(arr, 3);
	print_obj.print();

	return 0;
}
