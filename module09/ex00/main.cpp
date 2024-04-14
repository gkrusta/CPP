#include "BitcoinExchange"

bool	parseDate(std::string &line) {
	if (line[4] != "-" || line[7] != "-")
		return false;
	for (int i = 0; i < 10; i++) {
		if (i == 4 || i == 7)
			continue;
		else if (line[i] <= '0' && line[i] >= '9')
			return false;
	}

	int year = (line[0] - '0') * 1000 + (line[1] - '0') * 100 + (line[2] - '0') * 10 + (line[3] - '0');
	int month = (line[5] - '0') * 10 + (line[6] - '0');
	int day = (line[8] - '0') * 10 + (line[9] - '0');

	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	return true;
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Pass 1 file to the program!" << std::endl;
		return (1);
	}
	BitcoinExchange	bitcoin;
	std::ifstream	inputFile(argv[1]);
	std::string	line;

	if (!bitcoin.LoadExchangeRate("data.csv") || !inputFile.is_open()) {
		std::cerr << "Error: Could not open file " << std::endl;
		return (1);
	}

	while (std::getline(inputFile, line)) {
		std::string	date, seperation, value;
		std::istingstream	iss(line);

		if (iss >> date && iss >> seperation && iss >> value) {
			if (!parseDate(data) || seperation != "|")
				std::cout << "Error: bad input => " << data << std::endl;
			else if (value < 0)
				std::cout << "Error: not a positive number => " << value << std::endl;
			else if (value > 2147483647)
				std::cout << "Error: too large a number => " << value << std::endl;
				
		}
		else
			std::cout << "Error: bad input => " << line << std::endl;
	}

	return (0);
}