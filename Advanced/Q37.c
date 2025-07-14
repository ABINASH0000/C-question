#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student student;
    
    /* ছাত্ৰৰ তথ্য ইনপুট লোৱা */
    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = 0; // নতুন লাইন চিহ্ন বাদ দিয়া
    
    printf("Enter roll number: ");
    scanf("%d", &student.roll);
    
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    /* ছাত্ৰৰ তথ্য প্ৰিণ্ট কৰা */
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.roll);
    printf("Marks: %.2f\n", student.marks);
    return 0;
}
