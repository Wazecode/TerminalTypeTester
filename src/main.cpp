#include <ncurses.h>

auto main(int argc, char *argv[]) -> int {

    initscr();
    printw("Hello World");
    refresh();
    getch();
    endwin();

    return 0;
}
