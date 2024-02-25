#include <iostream>
#include <string>
using namespace std;
struct parth
{
    string name;
    int age;
    bool gender;

    parth(string name_, int age_, bool gender_)
    {
        name = name_;
        age = age_;
        gender = gender_;
    }
};
int main()
{
    parth chintu ("parth", 22, true);
    cout << chintu.age << endl;
}