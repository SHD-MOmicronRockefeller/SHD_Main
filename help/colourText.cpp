#include <iostream>
#include <windows.h>

int main() {
    // 获取标准输出句柄
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // 设置文本颜色为红色
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_RED);
    std::cout << "This is red text." << std::endl;

    // 设置文本颜色为绿色
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_GREEN);
    std::cout << "This is green text." << std::endl;

    // 设置文本颜色为蓝色
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY | FOREGROUND_BLUE);
    std::cout << "This is blue text." << std::endl;

    // 恢复默认颜色
    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
    std::cout << "This is default color text." << std::endl;

    return 0;
}
