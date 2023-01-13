//
// Created by mike on 13.01.23.
//
#include <iostream>

int main(int, char *[]) {
    int counter = 0;
//    short int value = 25;

//    switch (value) {
    switch (short int value = 25; value) {
        case 25:  // only integers/symbols
            counter += 1;
            std::cout << "First case is selected" << std::endl;
            break;  // если не указать break то будет выполнен следующий блок
        case 34:
            counter += 10;
            if (value == 25) {
                break;
            }
            std::cout << "Second case is selected" << std::endl;
            break;
        case 56:
            counter += 100;
            std::cout << "Third case is selected" << std::endl;
            break;
        default:  // опциональный блок,
            counter = 2000;
    }
    std::cout << "Counter = " << counter << std::endl;
    std::cout << std::endl;

    enum class MouseButtons : int {
        LEFT_BTN = 1,
        MIDDLE_BTN = 2,
        RIGHT_BTN = 3,
        EXTRA_BTN = 0
    };
    MouseButtons mouse_btn = MouseButtons::EXTRA_BTN;

    switch (mouse_btn) {
        case MouseButtons::LEFT_BTN:
            // Left button is pressed
            std::cout << "Left button is pressed. Processing it ... " << std::endl;
            if (true) {
                std::cout << "Operator if invocation" << std::endl;
                break;
            }
        case MouseButtons::MIDDLE_BTN:
            // Middle button is pressed
            break;
        case MouseButtons::RIGHT_BTN:
            // Right button is pressed
            break;
        case MouseButtons::EXTRA_BTN:
            std::cout << "Extra button is pressed. Processing it ... "  << std::endl;
            break;
        default:
            // Do something else if needed
            std::cout << "Dropped into default case scenario" << std::endl;
    }

    return 0;
}