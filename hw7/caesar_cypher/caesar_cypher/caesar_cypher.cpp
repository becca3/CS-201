#include<iostream>
#include<string>

int main()
{
	//Variables.
	int i;
	int j;
	int length;
	int choice;
	int key;
	char msg[100];
	std::string inp;

	std::cout << "play or quit? \n";
	std::cin >> inp;

	if (inp == "quit")
	{
		return 0;
	}
	else
	{
		//Ask for user input.
		std::cout << "Enter the message: \n";
		std::cin >> msg;
		//std::cin.getline(msg, 100);
		std::cout << "Enter key: ";
		std::cin >> key;
		length = strlen(msg);
		std::cout << "Enter your choice \n1. Encryption \n2. Decryption \n";
		std::cin >> choice;

		if (choice == 1) //Encrypt. 
		{
			char character;
			for (int i = 0; msg[i] != '\0'; ++i)
			{
				character = msg[i];
				//Encrypt lowercase letters.
				if (character >= 'a' && character <= 'z')
				{
					character = character + key;
					if (character > 'z')
					{
						character = character - 'z' + 'a' - 1;
					}
					msg[i] = character;
				}
				//Encrypt uppercase letters.
				else if (character >= 'A' && character <= 'Z')
				{
					character = character + key;
					if (character > 'Z')
					{
						character = character - 'Z' + 'A' - 1;
					}
					msg[i] = character;
				}
			}
			std::cout << "Encrypted message: " << msg << "\n";
		}
		else if (choice == 2) //Decrypt.
		{
			char character;
			for (int i = 0; msg[i] != '\0'; ++i)
			{
				character = msg[i];
				//Decrypt lowercase letters.
				if (character >= 'a' && character <= 'z')
				{
					character = character - key;
					if (character < 'a')
					{
						character = character + 'z' - 'a' + 1;
					}
					msg[i] = character;
				}
				//Decrypt uppercase letters.
				else if (character >= 'A' && character <= 'Z')
				{
					character = character - key;
					if (character < 'A')
					{
						character = character + 'Z' - 'A' + 1;
					}
					msg[i] = character;
				}
			}
			std::cout << "Decrypted message: " << msg << "\n";
		}
	}
	return 0;
}