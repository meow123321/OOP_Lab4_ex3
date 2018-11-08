#include"Book.h"
//#include"TheLibrary.h"

using namespace std;

int main() {

	vector<Book> my_library;
	// the parameters we will search 
	string title_to_find;
	string author_to_find;
	string ISBN_to_find;

	int count_title, count_author, count_ISBN;

	// Introdcting the class objects
	my_library.push_back(Book("The portrait of Dorian Gray", "Ocar Wilde", "Rao", "1607107325", 2013, 56.99));
	my_library.push_back(Book("Miss Peregrine", "Ransom Riggs", "youngArt", "9788408158035", 2015, 34.90));
	my_library.push_back(Book("Clubul Mefisto", "Tess Gerritsen", "Rao", "9789731034294", 2008, 29.99));
	my_library.push_back(Book("Red Dragon", "Thomas Harris", "Rao", "9789731038964", 2009, 16.90));
	my_library.push_back(Book("The Exorcist", "William Peter Blatty", "Rao", "006209436X", 2011, 64.99));


	//TheLibrary::TheLibrary(my_library);

	cout << "Enter the title of the book you search: ";
	getline(cin, title_to_find);

	cout << "Enter the author  of the book you search : ";
	getline(cin, author_to_find);

	cout << "Enter the ISBN code of the book you search: ";
	getline(cin, ISBN_to_find);


	
	count_title = 0;
	count_author = 0;
	count_ISBN = 0;
	for (int i = 0; i < 5; i++) {

		if (my_library[i].check_title(title_to_find)) {
			cout << "\nWe fount the book " << title_to_find;
			count_title++;
		}

		if (my_library[i].check_author(author_to_find)) {
			cout << "\nWe fount the books written by  " << author_to_find << " : ";
			cout << my_library[i].title;
			count_author++;
		}

		if (my_library[i].check_ISBN(ISBN_to_find)) {
			cout << "\nThe book with the ISBN " << my_library[i].ISBN << " is "
				<< my_library[i].title << " by " << my_library[i].author;
			count_ISBN++;
			
			
		}
		//Testing if the ISBN is unique for the searhed book
		if (my_library[i].ISBN == my_library[i+1].ISBN) {
			cout << "\nERROR : The can be only one book with the searched ISBN";
			break;
		}
		
	}

	if (count_title == 0) {
		cout << "\nWe didn`t fount any book with that name.";
	}
	if (count_author == 0) {
		cout << "\nWe didn`t found any book written by this author.";
	}
	if (count_ISBN == 0) {
		cout << "\nWe didn`t found any book with this ISBN.";
	}
	

	cout << "\n";


	system("pause");
	return 0;
}