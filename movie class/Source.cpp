#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Movie
{
private:
	string tittle;
	string director;
	int duration;
public:
	
	Movie(const string& tittle, const string& director, int duration)
		:tittle(tittle),director(director),duration(duration){}

	string GetTittle()const
	{
		return tittle;
	}
	string GetDirector()const
	{
		return director;
	}
	int  GetDuration()const
	{
		return duration;
	}
};
class cinema
{
private:
	int rows;
	int seats_per_row;
	vector<vector<int>>seat_matrix;
	vector<Movie>movies;
public:
	cinema(int rows, int seats_per_row) :
		rows(rows), seats_per_row(seats_per_row) {
		seat_matrix = vector<vector<int>>(rows, vector<int>(seats_per_row, 0));
	}
	void displayseats()
	{
		for (const auto& row : seat_matrix)
		{
			for (int seat : row)
			{
				char status = seat ? 'X':'O';
				cout << status << " ";
			}
			cout << endl;
		}
	}
	void reserveseat(int row_num,int seat_num)
	{
		if (seat_matrix[row_num - 1][seat_num - 1] == 0)
		{
			seat_matrix[row_num - 1][seat_num - 1] = 1;
			cout << "Seat reserved successfull!"<<endl;
		}

		else {
			cout << "Seat already reserved."<<endl;
		}
	}
	void Add_movie(const Movie&movie)
	{
		movies.push_back(movie);
		cout << "Movie added successfully!"<<endl;
	}
	void remove_movie(const string& tittle)
	{
		for (auto it = movies.begin(); it != movies.end(); it++)
		{
			if (it->GetTittle() == tittle)
			{
				movies.erase(it);
				cout << "Movie deleted successfully!"<<endl;
				return;
			}
		}
		cout << "Movie not found." << endl;
	}
	void displaymovies()
	{
		for (const auto& movie : movies)
		{
			cout << "Title: " << movie.GetTittle() << endl;
			cout << "Director: " << movie.GetDirector() << endl;
			cout << "Duration: " << movie.GetDuration() <<" minutes" << endl<<"______________"<<endl;
		}
	}
};
int main()
{
	cinema Cinema(5, 10);
	Movie movie("Requiem for a dream", "darren aronofski", 102), movie1("inglourious Basterds", "quentin tarantino", 153);
	Cinema.Add_movie(movie);
	Cinema.Add_movie(movie1);
	Cinema.reserveseat(1, 3);
	int key = 0,choice;
	while (key == 0)
	{
		system("cls");
		cout << "1.Display available seat." << endl;
		cout << "2.Reserve a seat." << endl;
		cout << "3.Add movie." << endl;
		cout << "4.Remove movie." << endl;
		cout << "5.Display movies." << endl;
		cout << "6.Exit." << endl;
		cin >> choice;
		if (choice == 1)
		{
			Cinema.displayseats();
			system("pause");
		}
		else if (choice == 2)
		{
			int row_number, seat_number;
			cout << "Enter the row number: ";
			cin >> row_number;
			cout << "Enter the Seat number: ";
			cin >> seat_number;
		if (row_number > 5 || row_number < 0 || seat_number>10 || seat_number < 0)
		{
			cout << "seat number not exist." << endl;
			system("pause");
		}
		else {
			Cinema.reserveseat(row_number, seat_number);
			system("pause");
		}
		}
		else if (choice == 3)
		{
			string tittle, director;
			int duration;
			cout << "Enter Title: ";
			cin.ignore();
			getline (cin, tittle);
			cout << "Enter Director: ";
			getline(cin, director);
			cout << "Enter duration: ";
			cin >> duration;
			Movie movie(tittle, director, duration);
			Cinema.Add_movie(movie);
			system("pause");
		}
		else if (choice == 4)
		{
			string tittle;
			cout << "Enter Title for remove: ";
			cin.ignore();
			getline(cin, tittle);
			Cinema.remove_movie(tittle);
			system("pause");
		}
		else if (choice == 5)
		{
			Cinema.displaymovies();
			system("pause");
		}
		else if (choice == 6)
		{
			key = 1;
		}
		else {
			cout << "Wrong number,please enter corecct number." << endl;
			system("pause");
		}
	}
	cout << "Thanks for visiting my program :)";
	return 0;
}







