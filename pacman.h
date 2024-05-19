#define N 20
#define M 30
#include <ncurses.h>

char field[N][M];
void display();
typedef struct Creature {
int id, role, status;
char ava;
} Creature;

int monster_count = 5;
void init_game(int _monster_count);
