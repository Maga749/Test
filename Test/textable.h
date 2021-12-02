#pragma once

class textable {
public:
	virtual const char* get_text() const = 0;
	virtual ~textable() { }
};

class odin_t: public textable {
public:
	virtual const char* get_text() const override;
};

class dva_t: public textable {
public:
	virtual const char* get_text() const override;
};

class tri_t: public textable {
public:
	virtual const char* get_text() const override;
};