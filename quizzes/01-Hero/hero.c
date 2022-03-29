#include <stdbool.h>
#include <stdint.h>

bool hero(uint32_t bullets, uint32_t dragons) {
  uint32_t dragons_hp = dragons * 2;
  if (dragons_hp > bullets) {
    return false;
  }
  
  return true;
  
}