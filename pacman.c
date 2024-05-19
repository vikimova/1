#include "pacman.h"

void init_game() {
   for(int i = 0; i < monster_count; ++i) {
       monsters[i].id = i + 1;
       monsters[i].role = 3;
      //...
   }
   player.id = 0; 
}
