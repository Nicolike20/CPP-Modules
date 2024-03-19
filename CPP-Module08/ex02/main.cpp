#include "MutantStack.hpp"

#include <iostream>
#include <list>
#include <string>

int main(void) {

/*
    MutantStack<int> mstack;                            //Subject test
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

-----------------------------------------------------

    std::list<int> mstack;                               //Subject test (with lists)
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl;
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    //[...]
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::list<int> s(mstack);
/*/
    MutantStack<int> iStack;                             //My test
    MutantStack<char> cStack;
    MutantStack<std::string> sStack;

    iStack.push(1);
    iStack.push(2);
    iStack.push(3);
    iStack.push(4);
    iStack.push(5);
    std::cout << "\033[4mInt Stack\033[24m\n";
    std::cout << "Top ->  " << iStack.top() << "\n";
    std::cout << "Size -> " << iStack.size() << "\n";

    MutantStack<int> auxStack(iStack);

    std::cout << "\033[4mCopy Stack\033[24m\n";
    std::cout << "Top ->  " << auxStack.top() << "\n";
    std::cout << "Size -> " << auxStack.size() << "\n";

    auxStack.pop();

    std::cout << "\033[4mCopy Stack after pop\033[24m\n";
    std::cout << "Top ->  " << auxStack.top() << "\n";
    std::cout << "Size -> " << auxStack.size() << "\n";

    iStack.swap(auxStack);

    std::cout << "\033[4mInt Stack after swap\033[24m\n";
    std::cout << "Top ->  " << iStack.top() << "\n";
    std::cout << "Size -> " << iStack.size() << "\n";

    std::cout << "\033[4mCopy Stack after swap\033[24m\n";
    std::cout << "Top ->  " << auxStack.top() << "\n";
    std::cout << "Size -> " << auxStack.size() << "\n";




    cStack.push('a');
    cStack.push('b');
    cStack.push('c');
    cStack.push('d');
    cStack.push('e');
    std::cout << "\033[4mChar Stack\033[24m\n";
    std::cout << "Top ->  " << cStack.top() << "\n";
    std::cout << "Size -> " << cStack.size() << "\n";

    sStack.push("aaaaa");
    sStack.push("bbbbb");
    sStack.push("ccccc");
    sStack.push("ddddd");
    sStack.push("eeeee");
    std::cout << "\033[4mChar Stack\033[24m\n";
    std::cout << "Top ->  " << sStack.top() << "\n";
    std::cout << "Size -> " << sStack.size() << "\n";

    //METER COSAS DE ITERADORES, SE ME HA IDO LA OLLA
//*/
    
    return (0);
}