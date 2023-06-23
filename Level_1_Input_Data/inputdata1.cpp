#include <iostream>
#include <fstream>
#include <json.hpp>
using namespace std;
int main()
{
    // opening the json file
    Json::Value input;
    std::ifstream input_file("input.json", std::ifstream::binary);
    input_file >> input;
    // printing the json file
    cout << input;
    for (int k = 0; k < (800 * 600); k++)
    {
        for (int i = 1; i <= 5; i++)
        {
            // reading the image in rgba format
            Magick::Blob blob(data, length);
            Magick::Image image;
            image.size("800x600")
                image.magick("RGBA");
            image.read(blob);
            // opening the image in rgba format
            image.write("wafer_image_", i, ".png");
            // logic
            //  for(int j = input["care_areas"]["top_left"]["y"];j<input["care_areas"]["bottom_right"]["y"];j--)
            //  {
            //      for(int i=input["care_areas"]["top_left"]["x"];i<input["care_areas"]["bottom_right"]["x"];i++)
            //      {
            //          //store all

            //     }
            // }
            while (input["care_areas"]["top_left"]["y"] <= 600)
            {
                while (input["care_areas"]["bottom_right"]["x"] <= 800)
                {
                    // open a json file to store die no as key and the rgba value as value and exit
                    // store the same for all the 5 images, check if all five are same, if they are not,
                    // get the die value and x&y coordinate
                    rgba{
                        i : (input["care_areas"]["bottom_right"]["x"], input["care_areas"]["top_left"]["y"])
                    }
                    // push the new rgba value such that there will be 5 values inside the json before
                    // it checks for uniqueness
                    exit();
                }
            }
        }
        if (rgba["1"] == rgba["2"])
            if ()
                else
    }
