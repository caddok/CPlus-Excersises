#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <thread>
using namespace std;

class Animal
{
public:
    Animal(){}

    Animal(string name)
    {
       this->name = name;
    }

    void makeNoise()
    {
        cout << "I'm a fucking animal" << " and my name is "<< name << endl;
    }
    void setFriends(int numberOfFriends, string* friends)
    {
        this->friends = new string[numberOfFriends];
        this->numberOfFriends = numberOfFriends;
        for (size_t i = 0; i < numberOfFriends; i++)
        {
            this->friends[i] = "alabala";
        }
    }
    void showFriends()
    {
        for (size_t i = 0; i < numberOfFriends; i++)
        {
            cout << friends[i] << endl;
        }
    }
    
    ~Animal()
    {
        delete[] friends;
    }

private:
    string name;    
    string* friends;
    int numberOfFriends;
};



int main()
{
    Animal* lion = new Animal();
    Animal* cow = new Animal("Molly");
    string friends [] = {"Ben","Tommy"};
    lion->setFriends(2, friends); 
    lion->makeNoise();
    cow->makeNoise();
    lion->showFriends();

    while(true)
    {
        this_thread::sleep_for(0.01s);
        Animal* stackKiller = new Animal();
        string friends [] = {"Ben","Tommy"};
        stackKiller->setFriends(20000, friends);
        delete stackKiller;
    }

    return 0;
}
