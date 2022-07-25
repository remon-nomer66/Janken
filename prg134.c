#include <stdio.h>

typedef struct POINT{
  double x;
  double y;
} Point;

typedef struct LINE{
  Point s;
  Point e;
} Line;

void move_line( Line *a, double x, double y);

int main()
{
  Point p={0.0, 0.0}, q={1.0, 1.0};
  Line  a;
  double mov_x=2.0, mov_y=3.0;

  a.s = p;
  a.e = q;

  printf("始点の座標　(%f, %f)\n", a.s.x, a.s.y);
  printf("終点の座標　(%f, %f)\n", a.e.x, a.e.y);

  move_line( &a, mov_x, mov_y );
  printf("移動 %f %f\n", mov_x, mov_y);
  printf("始点の座標　(%f, %f)\n", a.s.x, a.s.y);
  printf("終点の座標　(%f, %f)\n", a.e.x, a.e.y);

  return 0;
}

void move_line( Line *a, double x, double y ){
    a->s.x = a->s.x + 1;
    a->e.x += 1;
    a->s.y += 1;
    a->e.y += 1;
}