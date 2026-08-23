# Cinema Management System

A simple **Cinema Management System** built with **C++**.
This project is a console-based application that allows users to manage movies and reserve cinema seats.

## Features

* Display cinema seats
* Reserve seats
* Add new movies
* Remove movies
* Display movie information
* Simple console-based menu

## Technologies

* C++
* Object-Oriented Programming (OOP)
* Visual Studio
* STL `vector` and `string`

## Project Structure

```text
movie class/
├── Source.cpp
├── movie class.vcxproj
└── movie class.vcxproj.filters

movie class.sln
```

## How to Run

1. Clone or download the project.
2. Open `movie class.sln` in **Visual Studio**.
3. Build the solution.
4. Run the application.

## How It Works

The program creates a cinema with **5 rows and 10 seats per row**.

Seats are displayed using:

* `O` — Available seat
* `X` — Reserved seat

The main menu provides the following options:

```text
1. Display available seats
2. Reserve a seat
3. Add movie
4. Remove movie
5. Display movies
6. Exit
```

## Example Movies

The program starts with two movies:

* **Requiem for a Dream**
* **Inglourious Basterds**

Each movie contains:

* Title
* Director
* Duration

## Classes

### Movie

Stores information about a movie:

* Title
* Director
* Duration

### Cinema

Manages:

* Cinema seats
* Movie list
* Seat reservations
* Adding and removing movies

## Purpose

This project was created as a simple practice project for learning **C++ classes, objects, vectors, constructors, and basic Object-Oriented Programming concepts**.

## License

This project is for educational purposes.
