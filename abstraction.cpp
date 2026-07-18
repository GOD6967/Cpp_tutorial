#include <iostream>
#include "bird.h"

using namespace std;

void birddoesSomething(Bird *&bird)
{
    bird->eat();
    bird->fly();
}

int main(){
    Bird *bird = new sparrow();
    birddoesSomething(bird);
    delete bird;   // avoid a memory leak — you allocated with new, so free it
    return 0;
}