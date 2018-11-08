#pragma once
#include"Book.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class TheLibrary {
public:
	vector <Book> library;

	TheLibrary();
	TheLibrary(vector<Book> library);
	~TheLibrary();

	//void Search(string title, string author, string ISBN, vector<Book> library);
};
