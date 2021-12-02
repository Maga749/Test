#pragma once

#include "textable.h"

class print_t {
private:
	textable** arr;
	int count;
public:
	print_t(textable** arr, int count);
	void print() const;
};