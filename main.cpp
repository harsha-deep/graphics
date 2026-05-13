#include <fstream>

int main()
{
    std::ofstream f("out/pixel.ppm");
    constexpr int width = 255;
    constexpr int height = 255;

    f << "P3\n";
    f << width << " " << height << "\n";
    f << "255\n";

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            f << i << " " << j << " 255\n";
        }
    }

    return 0;
}