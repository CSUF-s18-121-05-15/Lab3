//Armando Organista
//CPSC 121 Lab 3
//<2/27/18>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//This variables will hold the choices of the user.
	int height;
	int width;
	char repeat = 'N';
	string word;
	char choice;
	char choice2;
	char choice3;
	char choice4;
	ofstream outFile;

	//Do while loop to restart the program if the user wishes to.
	do
	{
		system("cls");

		//Prompts the user to choose between Rectangle or triangle.
		cout << "Choose between a rectange or a triangle. \n"
			<< "Press R to choose rectangle or T to choose triangle.\n"
			<< "Enter your choice: ";
		cin >> choice;

		cout << endl;

		//if statement that runs the rectangle block or triangle block.
		if (toupper(choice) == 'R')
		{
			//Prompts the user a menut to choose between a word or a width.
			cout << "Would you like to supply a word or a width? \n"
				<< "Enter A to supply a word or enter B to supply a width.\n"
				<< "Enter your choice: ";
			cin >> choice2;

			cout << endl;

			//if statement runs that runs depending what the user chose between a word or a width.
			if (toupper(choice2) == 'A')
			{
				cout << "Enter a word: ";
				cin >> word;

				cout << "Please enter a height:	";
				cin >> height;

				cout << endl;
				
				//A menu to have the user choose between printing to cout or to a file.
				cout << "would you like to print to a file or to cout?\n"
					<< "If you would like to print to a file enter F.\n"
					<< "If you would like to print to cout enter C.\n"
					<< "Enter your choice: ";
				cin >> choice4;

				cout << endl;

				//This if statement takes user input and runs the appropriate code block that will write to a file or print to cout.
				if (toupper(choice4) == 'F')
				{
					outFile.open("shape.txt"); //Opens file called "shape".

					//Fail check in the case that the file above does not open. 
					if (outFile.fail())
					{
						cout << "FILE DID NOT OPEN!\n\n";
						return 1;
					}

					//This for loop creates the rectangle with the word the user chose to enter.
					for (int i = 0; i < height; i++)
					{
						cout << word << endl;
						outFile << word << endl; //Will print the word to a text file.
					}

					outFile.close(); //Closes file called "shape".
				}
				else if (toupper(choice4) == 'C')
				{
					for (int i = 0; i < height; i++)
					{
						cout << word << endl;
					}
				}

			}
			else if (toupper(choice2) == 'B')
			{
				cout << "Enter a width:	";
				cin >> width;

				cout << "Please enter a height: ";
				cin >> height;

				cout << endl;
				//Prompts the user a choice between printing to cout or a text file.
				cout << "would you like to print to a file or to cout?\n"
					<< "If you would like to print to a file enter F.\n"
					<< "If you would like to print to cout enter C.\n"
					<< "Enter your choice: ";
				cin >> choice4;

				cout << endl;

				if (toupper(choice4) == 'F')
				{
					outFile.open("shape.txt");

					if (outFile.fail())
					{
						cout << "FILE DID NOT OPEN!\n\n";
						return 1;
					}

					//This for loop creates the rectangle with the height and width the user provided.
					for (int i = 0; i < height; i++)
					{
						for (int j = 0; j < width; j++)
						{
							cout << '*';
							outFile << '*';
						}
						cout << endl;
						outFile << endl;
					}
					outFile.close();
				}
				else if (toupper(choice4) == 'C')
				{
					for (int i = 0; i < height; i++)
					{
						for (int j = 0; j < width; j++)
						{
							cout << '*';
						}
						cout << endl;
					}
				}
			}

		}
		else if (toupper(choice) == 'T')
		{
			//Asks the user to supply a word or width and reads their input.
			cout << "Would you like to supply a word or a width?\n"
				<< "Enter A to supply a word or enter B to supply a width.\n"
				<< "Enter your choice: ";
			cin >> choice2;

			cout << endl;

			//if statement that runs a code block that draws a triangle with either word or width supplied.
			if (toupper(choice2) == 'A')
			{
				cout << "Enter a word: ";
				cin >> word;

				cout << endl;

				//Asks the user to choose between having their triangle point up or down.
				cout << "Would you like the triangle to point up or down?\n"
					<< "Enter U for up or D for down.\n"
					<< "Enter your choice: ";
				cin >> choice3;

				cout << endl;

				//if statement that draws either an up or down triangle.
				if (toupper(choice3) == 'U')
				{
					//Asks the user if they would like to print to cout or a file.
					cout << "would you like to print to a file or to cout?\n"
						<< "If you would like to print to a file enter F.\n"
						<< "If you would like to print to cout enter C.\n"
						<< "Enter your choice: ";
					cin >> choice4;

					cout << endl;

					//Fail check for printing to text file.
					if (toupper(choice4) == 'F')
					{
						outFile.open("shape.txt");//Opens file called "shape".

						if (outFile.fail())
						{
							cout << "FILE DID NOT OPEN!\n\n";
							return 1;
						}

						//Draws a triangle that points up. It also prints the triangle to the file.
						for (int i = word.length(); i > 0; i--)
						{
							for (int j = i - 1; j < word.length(); j++)
							{
								cout << word[j];
								outFile << word[j];
							}
							cout << endl;
							outFile << endl;
						}
						outFile.close(); //closes the file.
					}
					else if (toupper(choice4) == 'C')
					{
						//Draws a triangle that points up and prints it to cout.
						for (int i = word.length(); i > 0; i--)
						{
							for (int j = i - 1; j < word.length(); j++)
							{
								cout << word[j];
							}
							cout << endl;
						}
					}
				}
				else if (toupper(choice3) == 'D')
				{
					cout << "would you like to print to a file or to cout?\n"
						<< "If you would like to print to a file enter F.\n"
						<< "If you would like to print to cout enter C.\n"
						<< "Enter your choice: ";
					cin >> choice4;

					cout << endl;

					if (toupper(choice4) == 'F')
					{
						outFile.open("shape.txt");

						if (outFile.fail())
						{
							cout << "FILE DID NOT OPEN!\n\n";
							return 1;
						}

						for (int i = 0; i < word.length(); i++)
						{
							//Prints a triangle that points down and prints it to the file.
							for (int j = i; j < word.length(); j++)
							{
								cout << word[j];
								outFile << word[j];
							}
							cout << endl;
							outFile << endl;
						}
						outFile.close();
					}
					else if (toupper(choice4) == 'C')
					{
						//Prints triangle pointing down and prints it to cout.
						for (int i = 0; i < word.length(); i++)
						{
							for (int j = i; j < word.length(); j++)
							{
								cout << word[j];
							}
							cout << endl;
						}
					}
				}
			}
			else if (toupper(choice2) == 'B')
			{
				cout << "Enter a width: ";
				cin >> width;

				cout << endl;

				cout << "Would you like the triangle to point up or down?\n"
					<< "Enter U for up or D for down.\n"
					<< "Enter your choice: ";
				cin >> choice3;

				cout << endl;

				if (toupper(choice3) == 'U')
				{
					cout << "would you like to print to a file or to cout?\n"
						<< "If you would like to print to a file enter F.\n"
						<< "If you would like to print to cout enter C.\n"
						<< "Enter your choice: ";
					cin >> choice4;

					cout << endl;

					if (toupper(choice4) == 'F')
					{
						outFile.open("shape.txt");

						if (outFile.fail())
						{
							cout << "FILE DID NOT OPEN!\n\n";
							return 1;
						}

						//Prints triangle pointing up with a given width and prints the triangle to a file.
						for(int i = 0; i < width; i++)
						{
							for (int j = 0; j <= i; j++)
							{
								cout << '*';
								outFile << '*';
							}
							cout << endl;
							outFile << endl;
						}
						
						outFile.close();
					}
					else if (toupper(choice4) == 'C')
					{
						//Prints a triangle pointing up with a given width and prints the triangle to cout.
						for (int i = 0; i < width; i++)
						{
							for (int j = 0; j <= i; j++)
							{
								cout << '*';
							}
							cout << endl;
						}
					}
				}
				else if (toupper(choice3) == 'D')
				{
					cout << "would you like to print to a file or to cout?\n"
						<< "If you would like to print to a file enter F.\n"
						<< "If you would like to print to cout enter C.\n"
						<< "Enter your choice: ";
					cin >> choice4;

					cout << endl;

					if (toupper(choice4) == 'F')
					{
						outFile.open("shape.txt");

						if (outFile.fail())
						{
							cout << "FILE DID NOT OPEN!\n\n";
							return 1;
						}

						//Prints triangle pointing down with a given width and prints the triangle to a file.
						for (int i = 0; i < width; i++)
						{
							for (int j = 0; j < width - i; j++)
							{
								cout << '*';
								outFile << '*';
							}
							cout << endl;
							outFile << endl;
						}

						outFile.close();
					}
					else if (toupper(choice4) == 'C')
					{
						for (int i = 0; i < width; i++)
						{
							//Prints triangle pointing down with a given width and prints the triangle to a file.
							for (int j = 0; j < width - i; j++)
							{
								cout << '*';
							}
							cout << endl;
						}
					}
				}
			}
		}
		else
			cout << "Please enter a valid choice.\n\n"; //If the user enter an invalid choice.

		cout << "\n\nWould you like to run the program again? (Y/N): "; //Asks the user if they would like to repeat the program.
		cin >> repeat;

	} while (toupper(repeat) == 'Y');


	return 0;
}