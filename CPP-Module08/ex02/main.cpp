#include "MutantStack.hpp"

#include <iostream>
#include <list>
#include <string>

int main(void) {

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

    std::cout << "\n\033[4mCopy Stack after pop\033[24m\n";
    std::cout << "Top ->  " << auxStack.top() << "\n";
    std::cout << "Size -> " << auxStack.size() << "\n";

    iStack.swap(auxStack);

    std::cout << "\n\033[4mInt Stack after swap\033[24m\n";
    std::cout << "Top ->  " << iStack.top() << "\n";
    std::cout << "Size -> " << iStack.size() << "\n";

    MutantStack<int>::iterator b1 = iStack.begin();
    MutantStack<int>::iterator e1 = iStack.end();
    std::cout << "Content:\n";
    while (b1 != e1) {
        std::cout << "·" << *b1 << "\n";
        b1++;
    }

    std::cout << "\033[4mCopy Stack after swap\033[24m\n";
    std::cout << "Top ->  " << auxStack.top() << "\n";
    std::cout << "Size -> " << auxStack.size() << "\n";

    MutantStack<int>::iterator b2 = auxStack.begin();
    MutantStack<int>::iterator e2 = auxStack.end();
    std::cout << "Content:\n";
    while (b2 != e2) {
        std::cout << "·" << *b2 << "\n";
        b2++;
    }
        //--------------------------------------//
    cStack.push('a');
    cStack.push('b');
    cStack.push('c');
    cStack.push('d');
    cStack.push('e');
    std::cout << "\n\033[4mChar Stack\033[24m\n";
    std::cout << "Top ->  " << cStack.top() << "\n";
    std::cout << "Size -> " << cStack.size() << "\n";

    MutantStack<char>::iterator b3 = cStack.begin();
    MutantStack<char>::iterator e3 = cStack.end();
    std::cout << "Content:\n";
    while (b3 != e3) {
        std::cout << "·" << *b3 << "\n";
        b3++;
    }
        //--------------------------------------//
    sStack.push("aaaaa");
    sStack.push("bbbbb");
    sStack.push("ccccc");
    sStack.push("ddddd");
    sStack.push("eeeee");
    std::cout << "\n\033[4mChar Stack\033[24m\n";
    std::cout << "Top ->  " << sStack.top() << "\n";
    std::cout << "Size -> " << sStack.size() << "\n";

    MutantStack<std::string>::iterator b4 = sStack.begin();
    MutantStack<std::string>::iterator e4 = sStack.end();
    std::cout << "Content:\n";
    while (b4 != e4) {
        std::cout << "·" << *b4 << "\n";
        b4++;
    }
        //--------------------------------------//
    std::cout << "\n\033[4mTests given in the subject\033[24m\n";
    std::cout << "MutantStack test:\n";

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
    MutantStack<int>::iterator it1 = mstack.begin();
    MutantStack<int>::iterator ite1 = mstack.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
    std::cout << *it1 << std::endl;
    ++it1;
    }
    std::stack<int> s1(mstack);

    std::cout << "List test:\n";

    std::list<int> lstack;                               //Subject test (with lists)
    lstack.push_back(5);
    lstack.push_back(17);
    std::cout << lstack.back() << std::endl;
    lstack.pop_back();
    std::cout << lstack.size() << std::endl;
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    //[...]
    lstack.push_back(0);
    std::list<int>::iterator it2 = lstack.begin();
    std::list<int>::iterator ite2 = lstack.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
    std::cout << *it2 << std::endl;
    ++it2;
    }
    std::list<int> s2(lstack);
    
    return (0);
}