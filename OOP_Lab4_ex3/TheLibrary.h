#pragma once
#include"Book.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class TheLibrary : public Book {
public:
	vector <Book> library;

	TheLibrary();
	TheLibrary(vector<Book> library);
	~TheLibrary();



};
