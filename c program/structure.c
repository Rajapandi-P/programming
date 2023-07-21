#include <stdio.h>
struct Person {
  char name[50];
  int age;
  int height;
};

int main()
 {
  struct Person p1 = {"John", 5, 22.5};
  printf("Name: %s\n", p1.name);
  printf("Age: %d\n", p1.age);
  printf("Height: %d\n", p1.height);
  return 0;
}
