#include <iostream>
#include <string>
#include <filesystem>
//a new comment
int main(int argc, char *argv[])
{
	if (argc<2)
		std::cout << "Must enter a path" << std::endl;
	else
	{
		std::string pathStr(argv[1]);
		std::filesystem::path path(pathStr);

		if (std::filesystem::is_directory(path))
		{
			cout << "Hello, world!";
		}
		else if (std::filesystem::is_regular_file(path))
		{

		}
	}
}
