#if !defined(BIRD_H)
#define BIRD_H

#include <iostream>

class Bird {
    public:
        virtual void eat() = 0;
        virtual void fly() = 0;
        virtual ~Bird() {}   // good practice: virtual destructor for base classes
        // classes that inherit this class
        // have to implement pure virtual fns.
};

class sparrow : public Bird
{
    public:
        void eat()
        {
            std::cout << "Sparrow is eating \n";
        }
        void fly()
        {
            std::cout << "Sparrow is flying\n";
        }
};

#endif //BIRD_H