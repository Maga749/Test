#include "print_t.h"
#include "textable.h"
#include <iostream>

print_t::print_t(textable** arr, int count) : arr{ arr }, count{ count } { }

void print_t::print() const {
	for (int i = 0; i < count; ++i)
		printf("%s\n", arr[i]->get_text());
}