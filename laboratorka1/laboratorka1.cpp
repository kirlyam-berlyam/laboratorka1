#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void readLinesFromFile(const std::string& filename, std::vector<std::string>& lines) {

}

void printLines(const std::vector<std::string>& lines) {

}

void writeLinesToFile(const std::string& filename, const std::vector<std::string>& lines) {

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

