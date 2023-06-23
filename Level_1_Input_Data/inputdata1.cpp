#include <iostream>
#include <fstream>
#include <Magick++>
using namespace std;
using namespace Magick;
// using namespace Blob;

// creating a struct variable to get the info about each pixel;
struct rgba
{
    int dieno;
    int x;
    int y;
    string pixels;
};

int main()
{
    // opening the json file
    // Json::Value input;
    // std::ifstream input_file("input.json", std::ifstream::binary);
    // input_file >> input;
    // // printing the json file
    // cout << input;

    for (int h = 0; h < (800 * 600); h++)
    {
        for (int k = 1; k <= 5; k++)
        {
            // reading the image in rgba format
            Magick::Blob blob(data, length);
            Magick::Image image;
            image.size("800x600");
            image.magick("RGBA");
            image.read(blob);
            // opening the image in rgba format
            image.write("wafer_image_", k, ".png");

            // store the boundaries
            int j = 600;
            int i = 0;
            while (j >= 0)
            {
                while (i <= 800)
                {
                    // storing the die no and rgba values in the struct variable
                    rgba rgba[5]; // dynamically create struct variables for 1-5
                    rgba[k].dieno = k;
                    rgba[k].x = i;
                    rgba[k].y = j;
                    string temp = image[x, y].toString();
                    rgba[k].pixels = temp;

                    i++;
                }
                j--;
            }
        }
        // based on majority, printing the minority ones as defect
        if (rgba1.pixels == rgba2.pixels)
            if (rgba2.pixels == rgba3.pixels)
                if (rgba3.pixels == rgba4.pixels)
                    if (rgba4.pixels == rgba5.pixels)
                        cout << "no defect" else cout << rgba5.dieno << "," << rgba5.x << "," << rgba5.y;
                    else if (rgba3.pixels == rgba5.pixels || (rgba4.pixels != rgba5.pixels && rgba5.pixels == rgba3.pixels))
                        cout << rgba4.dieno << "," << rgba4.x << "," << rgba4.y;
                    else if (rgba3.pixels != rgba4.pixels && rgba3.pixels != rgba5.pixels)
                        cout << rgba4.dieno << "," << rgba4.x << "," << rgba4.y;
        cout << "defect is at" << rgba5.dieno << "," << rgba5.x << "," << rgba5.y;
                    else
                        if(rgba3.pixels == rgba4.pixels && (rgba3.pixels == rgba5.pixels)
                            cout<< "defect is at" << rgba1.dieno << "," << rgba1.x << "," << rgba1.y;
                            cout<< "defect is at" << rgba2.dieno << "," << rgba2.x << "," << rgba2.y;
                        else if (rgba3.pixels == rgba4.pixels && (rgba3.pixels != rgba5.pixels))
                            if(rgba5.pixels == rgba2.pixels)
                                cout<< "defect is at" << rgba3.dieno << "," << rgba3.x << "," << rgba3.y;
                                cout<< "defect is at" << rgba4.dieno << "," << rgba4.x << "," << rgba4.y;
                        else
                            cout<< "defect is at" << rgba1.dieno << "," << rgba1.x << "," << rgba1.y;
                            cout<< "defect is at" << rgba2.dieno << "," << rgba2.x << "," << rgba2.y;
                            cout<< "defect is at" << rgba3.dieno << "," << rgba3.x << "," << rgba3.y;
                            cout<< "defect is at" << rgba4.dieno << "," << rgba4.x << "," << rgba4.y;
                            cout<< "defect is at" << rgba5.dieno << "," << rgba5.x << "," << rgba5.y;
            else if(rgba3.pixels != rgba4.pixels && (rgba3.pixels == rgba5.pixels))
                if(rgba4.pixels == rgba2.pixels)
                    cout << "defect is at" << rgba3.dieno << "," << rgba3.x << "," << rgba3.y;
                    cout << "defect is at" << rgba4.dieno << "," << rgba4.x << "," << rgba4.y;
                else
                    cout << "defect is at" << rgba1.dieno << "," << rgba1.x << "," << rgba1.y;
                    cout << "defect is at" << rgba2.dieno << "," << rgba2.x << "," << rgba2.y;
            else if(rgba3.pixels != rgba4.pixels && (rgba3.pixels == rgba5.pixels))
                if(rgba4.pixels == rgba2.pixels)
                    cout << "defect is at" << rgba3.dieno << "," << rgba3.x << "," << rgba3.y;
                    cout << "defect is at" << rgba5.dieno << "," << rgba5.x << "," << rgba5.y;
                else
                    cout << "defect is at" << rgba1.dieno << "," << rgba1.x << "," << rgba1.y;
                    cout << "defect is at" << rgba2.dieno << "," << rgba2.x << "," << rgba2.y;
    }
}
