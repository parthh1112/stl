// #include <iostream>

// int main()
// {
//     int a;
//     std::cin >> a;
//     std::cout << a;
// }

#include <iostream>
#include <string>

namespace parth
{
    std::string firstname = "parth";
    std::string name = "";
    std::string fullname(std::string lastname)
    {
        name = firstname + lastname;
        return name;
    }
}

int main()
{
    std::cout << parth::firstname << std::endl;
    std::cout << parth::fullname("gupta");
}