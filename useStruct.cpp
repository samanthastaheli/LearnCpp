#include <iostream>
using namespace std;

struct {
	string movie;
	int year;
	string rating;
	int numStars;
} movie1, movie2, movie3;

int main() {
	cout << "Movies\n";

	movie1.movie = "The Secret Life of Walter Mitty";
	movie1.year = 2013;
	movie1.rating = "PG";
	movie1.numStars = 5;


	movie2.movie = "Legally Blonde";
	movie2.year = 2001;
	movie2.rating = "PG-13";
	movie2.numStars = 5;

	movie3.movie = "Back to the Future";
	movie3.year = 1985;
	movie3.rating = "PG";
	movie3.numStars = 5;

	cout << "Movie Title: " << movie1.movie << endl;
	cout << "Year: " << movie1.year << endl;
	cout << "Rating: " << movie1.rating << endl;
	cout << movie1.numStars << " out of 5 stars!\n" << endl;

	cout << "Movie Title: " << movie2.movie << endl;
	cout << "Year: " << movie2.year << endl;
	cout << "Rating: " << movie2.rating << endl;
	cout << movie2.numStars << " out of 5 stars!\n" << endl;

	cout << "Movie Title: " << movie3.movie << endl;
	cout << "Year: " << movie3.year << endl;
	cout << "Rating: " << movie3.rating << endl;
	cout << movie3.numStars << " out of 5 stars!\n" << endl;

	system("pause>0");
}
