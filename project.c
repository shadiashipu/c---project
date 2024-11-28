#include <stdio.h>
#include <string.h>

int main() {

    int MALE_18_30 = 700;
    int FEMALE_18_30 = 750;
    int MALE_30_40 = 800;
    int FEMALE_30_40 = 850;

    char repeat[3];
    int age;

    do {
        printf("Age: ");
        scanf("%d", &age);

        char gender[6];
        printf("Gender: ");
        scanf("%s", gender);

        int days;
        printf("Number of days: ");
        scanf("%d", &days);

        if(age >= 18 && age < 30) {
            if(strcasecmp(gender, "Male") == 0){
                printf("Day: %d\nSalary: %d", MALE_18_30, days * MALE_18_30);
            }
            else if(strcasecmp(gender, "Female") == 0){
                printf("Day: %d\nSalary: %d", FEMALE_18_30, days * FEMALE_18_30);
            }
        }
        else if(age >= 30 && age <= 40){
            if(strcasecmp(gender, "Male") == 0){
                printf("Day: %d\nSalary: %d", MALE_30_40, days * MALE_30_40);
            }
            else if(strcasecmp(gender, "Female") == 0){
                printf("Day: %d\nSalary: %d", FEMALE_30_40, days * FEMALE_30_40);
            }
        }
        else{
            printf("Invalid Age");
        }
        printf("\n\nDo you want to calculate salary for another worker? (Yes/No): ");
        scanf("%s", repeat);
        printf("\n");
    } while (strcasecmp(repeat, "Yes") == 0);

    return 0;
}
