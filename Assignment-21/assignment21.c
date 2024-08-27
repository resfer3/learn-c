#include <stdio.h>

// init struct
struct employee {
  char first_name[100];
  char last_name[100];
  int employee_id;
  int last_4;
  char title[100];
};

struct employees {
  struct employee confirm_1;
  struct employee confirm_2;
};

int main(void){

  // prompt
  struct employees employees = {0};

  // first employee
  printf("Enter the employee's first name: ");
  scanf("%s", employees.confirm_1.first_name);
  //printf("%s\n", employees.confirm_1.first_name);
  printf("Enter the employee's last name: ");
  scanf("%s", employees.confirm_1.last_name);
  printf("Enter the employee's ID number: ");
  scanf("%d", &employees.confirm_1.employee_id);
  printf("Enter the last four digits of the employee's SSN: ");
  scanf("%d", &employees.confirm_1.last_4);
  printf("Enter the employee's job title (do not incluce the word 'Engineer'): ");
  scanf("%s", employees.confirm_1.title);
  printf("\n");
  // second employee
  printf("Enter the employee's first name: ");
  scanf("%s", employees.confirm_2.first_name);
  //printf("%s\n", employees.confirm_2.first_name);
  printf("Enter the employee's last name: ");
  scanf("%s", employees.confirm_2.last_name);
  printf("Enter the employee's ID number: ");
  scanf("%d", &employees.confirm_2.employee_id);
  printf("Enter the last four digits of the employee's SSN: ");
  scanf("%d", &employees.confirm_2.last_4);
  printf("Enter the employee's job title (do not incluce the word 'Engineer'): ");
  scanf("%s", employees.confirm_2.title);
  printf("\n");

  // output
  // first employee output
  printf("Employee information for %s %s:\n", employees.confirm_1.first_name, employees.confirm_1.last_name);
  printf("ID: %d\n", employees.confirm_1.employee_id);
  printf("SSN: %d\n", employees.confirm_1.last_4);
  printf("Title: %s Engineer\n", employees.confirm_1.title);
  printf("\n");

  // second employee output
  printf("Employee information for %s %s:\n", employees.confirm_2.first_name, employees.confirm_2.last_name);
  printf("ID: %d\n", employees.confirm_2.employee_id);
  printf("SSN: %d\n", employees.confirm_2.last_4);
  printf("Title: %s Engineer\n", employees.confirm_2.title);

  return 0;

}
