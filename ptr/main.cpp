#include <iostream>

int main() {
    std::unique_ptr<int> sp1(new int(123));

    std::unique_ptr<int> sp2;
    sp2.reset(new int(123));

    std::unique_ptr<int> sp3 = std::make_unique<int>(123);

    // std::unique_ptr<int> sp4(sp1);

    std::unique_ptr<int> sp4 = std::move(sp3);
    return 0;
}
