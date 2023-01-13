//
// Created by mike on 12.01.23.
//
#include <iostream>

namespace my_own_namespace {
    int global_variable = 42;
    struct string{};

    void func() {}
    int main() {}

    namespace nested {
        int global_variable = 10000042;
    }
}

namespace boost {
    namespace asio {
        namespace tcp {}
        namespace udp {}
    }
}

// Неймспэйсы можно расширять не то
namespace my_own_namespace {
    // err - Redefinition of 'global_variable'
//    int global_variable = 84;

    int global_variable_2 = 84;
}

int main() {
    // v1
    std::cout << "global_varable = " << my_own_namespace::global_variable << std::endl;
    // v2
    using namespace my_own_namespace;
    std::cout << "global_variable (after using) = " << global_variable << std::endl;

    // shadowing
    int global_variable = 56;
    std::cout << "global_variable (after local) = " << global_variable << std::endl;

    // отдельный скоуп
    {
        using my_own_namespace::global_variable;
        std::cout << "global_variable (after using + different scope) " << global_variable << std::endl;
    }

    // v1
    std::cout << "global_variable (nested 1) = " << nested::global_variable << std::endl;
    // v2
    std::cout << "global_variable (nested 2) = " << my_own_namespace::nested::global_variable << std::endl;
    // v3
    namespace nn = my_own_namespace::nested;
    std::cout << "global_variable (nn) = " << nn::global_variable << std::endl;

    return 0;
}
