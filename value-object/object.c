#include <stdio.h>

struct point {
  int x;
  int y;
};

void print_point(struct point p) {
  printf("{ x: %d, y: %d }\n", p.x, p.y);
}

int main() {
  struct point p = { .x = 1, .y = 1 };
  struct point p2 = { .x = 2, .y = 2 };
  printf("First point: ");
  print_point(p);
  printf("Second point: ");
  print_point(p2);

  return 0;
}
