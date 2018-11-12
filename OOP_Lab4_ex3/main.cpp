#include"Book.h"
#include"TheLibrary.h"

using namespace std;

int main() {

	TheLibrary my_library;
	// the parameters we will search 
	string title_to_find;
	string author_to_find;
	string ISBN_to_find;

	int count_title, count_author, count_ISBN;


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
		

		if (my_library.library[i].check_title(title_to_find)) {
				cout << "\nWe fount the book " << title_to_find;
				count_title++;
			}

		if (my_library.library[i].check_author(author_to_find)) {
				cout << "\nWe fount the books written by  " << author_to_find << " : ";
				cout << my_library.library[i].title;
				count_author++;
			}

		if (my_library.library[i].check_ISBN(ISBN_to_find)) {
				cout << "\nThe book with the ISBN " << my_library.library[i].ISBN << " is "
					<< my_library.library[i].title << " by " << my_library.library[i].author;
				count_ISBN++;


			}
		for (int j = 1; j < 5; j++) {

			if ((my_library.library[i].ISBN == my_library.library[j].ISBN) && (i != j)) {
				cout << "\nERROR : There can not be more books with the same ISBN\n";
				cout << "Check the books " << i << " and " << j;
			}
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