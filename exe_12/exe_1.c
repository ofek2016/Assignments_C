#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

typedef struct
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
} tm;
typedef struct
{
    int day;
    int month;
    int year;
} date;
typedef struct
{
    char *nameC;
    int finalGrade;
    int passingGrade;
} course;
typedef struct
{
    char *name;
    char school_Year;
    int howManyC;
    course *courses;
    date birthday;
} Student;

void getStudent(Student *students, int size);
int coursesNotSucceeded(Student *student, int size, int *failEx);
int isBirthday(Student *d, struct tm *currentD, int size);
double avarage(Student *student);
void putStudentovich(Student *student, int size);

void main()
{
    Student *students;
    int size = 0;
    double avg = 0;
    printf("Please enter number of students: ");
    scanf("%d", &size);

    students = (Student *)malloc(size * sizeof(Student));
    if (!students)
    {
        printf("Out of memory!");
        return;
    }
    getStudent(students, size);

    putStudentovich(students, size);
    system("pause");
}

void getStudent(Student *students, int size)
{
    int j = 0;
    char temp[50];
    char *studName = NULL;
    char *courseName = NULL;
    course *allCourses = NULL;
    for (int j = 0, i = 0; i < size; i++)
    {
        *temp = '\0';
        printf("Please enter #%d student's info:\n", i + 1);
        printf("Student's name: ");
        fseek(stdin, 0, SEEK_END);
        gets(temp);
        studName = (char *)malloc(strlen(temp) * sizeof(char) + 1);
        if (!studName)
        {
            printf("Out of memory!");
            return;
        }
        for (j = 0; j < strlen(temp); j++)
        {
            *(studName + j) = *(temp + j);
        }
        *(studName + j) = '\0';
        *temp = '\0';
        (students + i)->name = studName;
        printf("School year (A,B,C,D): ");
        scanf("%c", &(students + i)->school_Year);
        printf("How many courses does the student attend to?: ");
        scanf("%d", &(students + i)->howManyC);
        allCourses = (course *)malloc((students + i)->howManyC * sizeof(course));
        (students + i)->courses = allCourses;
        if (!allCourses)
        {
            printf("Out of memory!");
            return;
        }
        // Course information:
        for (int t = 0; t < (students + i)->howManyC; t++)
        {
            printf("--\n#%d course name: ", t + 1);
            fseek(stdin, 0, SEEK_END);
            gets(temp);
            courseName = (char *)malloc(strlen(temp) * sizeof(char) + 1);
            if (!courseName)
            {
                printf("Out of memory!");
                return;
            }
            for (j = 0; j < strlen(temp); j++)
            {
                *(courseName + j) = *(temp + j);
            }
            *(courseName + j) = '\0';
            (allCourses + t)->nameC = courseName;
            printf("What is the student's final grade in '%s'?: ", (allCourses + t)->nameC);
            scanf("%d", &(allCourses + t)->finalGrade);
            printf("What is '%s' passing grade?: ", (allCourses + t)->nameC);
            scanf("%d", &(allCourses + t)->passingGrade);
        }
        printf("--\nBirth day: ");
        scanf("%d", &(students + i)->birthday.day);
        printf("Birth month: ");
        scanf("%d", &(students + i)->birthday.month);
        printf("Birth year: ");
        scanf("%d", &(students + i)->birthday.year);
    }
}

double avarage(Student *student)
{
    long int sum = 0;
    double avg = 0;
    for (int i = 0; i < (student)->howManyC; i++)
    {
        course *shortCut = student->courses;
        int temp = (shortCut + i)->finalGrade;
        sum += temp;
    }
    avg = (double)sum / student->howManyC;
    return avg;
}

int coursesNotSucceeded(Student *student, int size, int *failEx)
{
    int count = 0;
    course *shortCut = student->courses;
    for (int k = 0; k < student->howManyC; k++)
    {
        if ((shortCut + k)->passingGrade > (shortCut + k)->finalGrade)
            count++;
    }
    if (count == 0)
        return NULL;
    course *failure = (course *)malloc(count * sizeof(course));
    for (int k = 0, u = 0; k < student->howManyC; k++)
    {
        if ((shortCut + k)->passingGrade > (shortCut + k)->finalGrade)
        {
            *(failure + u) = *(shortCut + k);
            u++;
        }
    }
    *failEx = failure;
    return count;
}

int isBirthday(Student *d, struct tm *currentD, int size)
{
    for (int i = 0; i < size; i++)
    {
        if ((d + i)->birthday.day == currentD->tm_mday && (d + i)->birthday.month == currentD->tm_mon && (d + i)->birthday.year == currentD->tm_year)
            printf("It's %s's birthday today./nHappy birthday %s!", (d + i)->name, (d + i)->name);
        printf("its not a birthday\n");
    }
}

void putStudentovich(Student *students, int size)
{
    int i, choice;
    course *failEx = NULL;
    printf("From the list below:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d. %s\n", i + 1, (students + i)->name);
    }
    printf("%d. All students\n", i + 1);
    printf("Which student information would you like to print? Choose the matching number: ");
    scanf("%d", &choice);

    if (choice == i + 1)
    {
        for (int i = 0; i < size; i++)
        {
            course *shortCut = (students + i)->courses;
            printf("#%d student's information is:\n", i + 1);
            printf("Name: %s\n", (students + i)->name);
            printf("School year: %c\n", (students + i)->school_Year);
            printf("Number of Courses: %d\n", (students + i)->howManyC);
            printf("Courses participance: \n");
            for (int t = 0; t < (students + i)->howManyC; t++)
            {
                printf("%s - final grade = %d, passing grade = %d\n", (shortCut + t)->nameC, (shortCut + t)->finalGrade, (shortCut + t)->passingGrade);
            }
            printf("Student's grades avarage: %f\n", avarage(students + i));
            int howManyFails = coursesNotSucceeded(students + i, size, &failEx);
            if (howManyFails == 0)
                printf("The student has no failures!\n");
            else
            {
                for (int i = 0; i < howManyFails; i++)
                {
                    printf("The student faild in '%s' with a grade of %d\n", (failEx + i)->nameC, (failEx + i)->finalGrade);
                }
            }
            printf("Birth date: %.2d.%.2d.%d\n", (students + i)->birthday.day, (students + i)->birthday.month, (students + i)->birthday.year);
        }
    }
    else
    {
        for (i = 0; i < (students + choice - 1)->howManyC; i++)
        {
            course *shortCut = (students + choice - 1)->courses;
            printf("#%d student's information is:\n", choice);
            printf("Name: %s\n", (students + i)->name);
            printf("School year: %c\n", (students + i)->school_Year);
            printf("Number of Courses: %d\n", (students + i)->howManyC);
            printf("Courses participance: \n");
            for (int t = 0; t < (students + i)->howManyC; t++)
            {
                printf("%s - final grade = %d, passing grade = %d\n", (shortCut + t)->nameC, (shortCut + t)->finalGrade, (shortCut + t)->passingGrade);
            }
            printf("Student's grades avarage: %f\n", avarage(students + choice - 1));
            int howManyFails = coursesNotSucceeded(students + choice - 1, size, &failEx);
            if (howManyFails == 0)
                printf("The student has no failures!\n");
            else
            {
                for (int i = 0; i < howManyFails; i++)
                {
                    printf("The student faild in '%s' with a grade of %d\n", (failEx + i)->nameC, (failEx + i)->finalGrade);
                }
            }
            printf("Birth date: %.2d.%.2d.%d\n", (students + choice - 1)->birthday.day, (students + choice - 1)->birthday.month, (students + choice - 1)->birthday.year);
        }
    }
}
