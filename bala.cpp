#include <iostream>
#include <string>
using Score = unsigned long;
Score high = 250;
using fuck  = unsigned int;


enum class asset_type { texture, sound, animation, script };

int main() {
    asset_type asset_value;
    asset_value = asset_type::sound;

    std::cout << "asset_value = " << (int) asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}