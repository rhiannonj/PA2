#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	std::string str, input = "", op, s1, s2;

	while (std::getline(std::cin, str))
	{
		input += str;
	}

	if (argc>1)
	{
		op = argv[1];
		char o = op[1];

		switch (o)
		{
		case 'b':
			if (input.find("bytes") > 0)
			{
				s1 = input.substr(0, input.find("bytes"));
				s2 = input.substr(input.find("bytes"));

				int start = s1.find_last_of("\n");
				int fin = s2.find_first_of("\n");

				if (start<0)
					start = 0;

				std::cout << input.substr(start, fin) << std::endl;
			}
			else
				std::cout << "Input does not contain the word 'bytes'" << std::endl;
			break;
		case 'd':
			if (input.find("directories") > 0)
			{
				s1 = input.substr(0, input.find("directories"));
				s2 = input.substr(input.find("directories"));

				int start = s1.find_last_of("\n");
				int fin = s2.find_first_of("\n");

				if (start<0)
					start = 0;

				std::cout << input.substr(start, fin) << std::endl;
			}
			else
				std::cout << "Input does not contain the word 'directories'" << std::endl;
			break;
		case 'f':
			if (input.find("files") > 0)
			{
				s1 = input.substr(0, input.find("files"));
				s2 = input.substr(input.find("files"));

				int start = s1.find_last_of("\n");
				int fin = s2.find_first_of("\n");

				if (start<0)
					start = 0;

				std::cout << input.substr(start, fin) << std::endl;
			}
			else
				std::cout << "Input does not contain the word 'files'" << std::endl;
			break;
		default:
			std::cout << "Invalid option" << std::endl;
			break;
		}
	}
	else
		std::cout << input << std::endl;
}
