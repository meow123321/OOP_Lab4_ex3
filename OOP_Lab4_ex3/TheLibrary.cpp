#include"TheLibrary.h"

TheLibrary::TheLibrary() {}

TheLibrary::TheLibrary(vector<Book> library) {
	library.push_back(Book("The portrait of Dorian Gray", "Ocar Wilde", "Rao", "1607107325", 2013, 56.99));
	library.push_back(Book("Miss Peregrine", "Ransom Riggs", "youngArt", "9788408158035", 2015, 34.90));
	library.push_back(Book("Clubul Mefisto", "Tess Gerritsen", "Rao", "9789731034294", 2008, 29.99));
	library.push_back(Book("Red Dragon", "Thomas Harris", "Rao", "9789731038964", 2009, 16.90));
	library.push_back(Book("The Exorcist", "William Peter Blatty", "Rao", "006209436X", 2011, 64.99));

}

TheLibrary :: ~TheLibrary() {}


