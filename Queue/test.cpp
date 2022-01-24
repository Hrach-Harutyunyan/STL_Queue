#include "implementation.cpp"

int main() {

    queue <int> qu;
    queue <int> que;

    qu.push(1);
    qu.push(2);
    qu.push(2);
    qu.push(4);
    qu.push(5);
    qu.push(6);



    std::cout << "size = " << qu.size() << std::endl;
    std::cout << "empty ? = " << std::boolalpha << qu.empty() <<  std::endl;
    std::cout << "front = " << qu.front() << std::endl;
    std::cout << "back = " << qu.back() << std::endl;

    return 0;
}