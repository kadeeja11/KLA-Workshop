#include <iostream>
#include <fstream>
#include <json/json.h>
using namespace std;
int main()
{
    Json::Value input;
    std::ifstream input_file("input.json", std::ifstream::binary);
    input_file >> input;

    cout << input;
}