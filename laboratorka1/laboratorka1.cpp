#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void readLinesFromFile(const std::string& filename, std::vector<std::string>& lines) {
    std::ifstream inputFile(filename);
    std::string line;

    if (!inputFile) {
        std::cerr << "Ошибка при открытии файла " << filename << std::endl;
        return;
    }

    while (std::getline(inputFile, line)) {
        lines.push_back(line);
    }

    inputFile.close();
}

void printLines(const std::vector<std::string>& lines) {
    for (const auto& line : lines) {
        std::cout << line << std::endl;
    }
}

void writeLinesToFile(const std::string& filename, const std::vector<std::string>& lines) {
    std::ofstream outputFile(filename);

    if (!outputFile) {
        std::cerr << "Ошибка при открытии файла для записи: " << filename << std::endl;
        return;
    }

    for (const auto& line : lines) {
        outputFile << line << std::endl; 
    }

    outputFile.close();
}

int main() {
    std::string inputFilename = "input.txt";
    std::string outputFilename = "output.txt";
    std::vector<std::string> lines;

    
    readLinesFromFile(inputFilename, lines);
    printLines(lines);
    writeLinesToFile(outputFilename, lines);

    return 0;
}

