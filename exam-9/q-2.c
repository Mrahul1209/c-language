
#include <stdio.h>

struct Student {
  int roll;
  char name[50];
  int chem;
  int math;
  int phy;
}

 main() {
  struct Student s[5];

  for (int i = 0; i < 5; i++) {
    printf("\nEnter details for Student %d\n", i + 1);
    printf("Roll No: ");
    scanf("%d", &s[i].roll);
    printf("Name: ");
    scanf("%s", s[i].name);
    printf("Chem: ");
    scanf("%d", &s[i].chem);
    printf("Math: ");
    scanf("%d", &s[i].math);
    printf("Phy: ");
    scanf("%d", &s[i].phy);

    int total = s[i].chem + s[i].math + s[i].phy;
    float percent = (float)total / 3;

    printf("%s (%d)\n", s[i].name, s[i].roll);
    printf("Chem: %d\n", s[i].chem);
    printf("Math: %d\n", s[i].math);
    printf("Phy: %d\n", s[i].phy);
    printf("Total: %d\n", total);
    printf("Percent: %.2f%%\n\n", percent);
  }

}

