#include <stdio.h>

struct point {
  int x;
  int y;
};

void print_point(struct point p) {
  printf("{ x: %d, y: %d }\n", p.x, p.y);
}

struct point add_points(struct point p1, struct point p2) {
  struct point p3;

  p3.x = p1.x + p2.x;
  p3.y = p1.y + p2.y;

  return p3;
}

int main() {
  struct point p = { .x = 1, .y = 1 };
  struct point p2 = { .x = 2, .y = 2 };
  printf("First point: ");
  print_point(p);
  printf("Second point: ");
  print_point(p2);

  printf("Add both yields: ");
  struct point p3;
  p3 = add_points(p, p2);
  print_point(p3);

  return 0;
}
