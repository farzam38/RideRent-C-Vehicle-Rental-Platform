# Car Rental & Dealing System

## Overview
This C++ program simulates a car rental and dealing system. Users can log in, register, and choose to either buy or rent cars. The system maintains details of various cars including their make, model, color, mileage, speed, and price.

## Features
- User Authentication (Login and Registration)
- Display a menu of car options
- Provide car details for both purchasing and renting
- User input for personal details and payment information
- Validation of payment amounts against car prices
- Confirmation messages for successful transactions

### Prerequisites
- C++ compiler (DevC++,g++, clang++, etc.)

### Program Flow
1. **Main Menu**
   - The user is greeted and presented with options to login, register, or exit the program.

2. **Login/Register**
   - The user can login if they have already registered, or register to create a new account.

3. **Car Rental & Dealing Menu**
   - The user can choose to buy or rent a car.

4. **Car Selection Menu**
   - The user can select a car from the list provided.

5. **Car Details**
   - Detailed information about the selected car is displayed.

6. **User Information and Payment**
   - The user is prompted to enter personal details and payment information.
   - The program validates the payment and confirms the transaction.

## File Structure
- `main.cpp`: The main source file containing the implementation of the car rental and dealing system.
- `database.txt`: A text file used to store user login credentials.

## Functions
- `Menu()`: Displays the menu of car options.
- `Details(int theChoice)`: Displays details of the selected car for buying.
- `Details2(int theChoice)`: Displays details of the selected car for renting.
- `check(int j)`: Validates the payment amount for buying a car.
- `check2(int j)`: Validates the payment amount for renting a car.
- `user_input(int theChoice)`: Prompts the user for personal details and payment information for buying.
- `user_input2(int theChoice)`: Prompts the user for personal details and payment information for renting.
- `login()`: Handles user login.
- `registr()`: Handles user registration.
- `main()`: The main function, entry point of the program.
- `main2()`: Handles the car rental and dealing system after login.

## Notes
- Ensure that `database.txt` is in the same directory as the executable when running the program.
- Usernames should be entered without spaces.
