#include <stdio.h>
#include <string.h>
#define COURSE_SIZE 10

//struct course
//{
//	int course_id;
//	char course_name[50];
//	char course_code[6];
//	char course_acronym[8];
//	int quota;
//
//};
//
//struct student
//{
//	int id;
//	char name[30];
//	double gpa;
//	struct course[10];
//
//} stud_1;




typedef struct {

    int id;
	char name[30];
	double gpa;
	//struct course[10];
    char *courses[COURSE_SIZE]; // Make this an array of pointers

} student_t;



typedef struct{

    int course_id;
	char course_name[50];
	char course_code[6];
	char course_acronym[8];
	int course_quota;

} course_t;



/*
// AUTO GENERATE NUMBERS
static int codeNumber = 0;
void generate_course_code() {
    char* course_code;
    codeNumber++;
    //course_code = "CSE0codeNumber"
    course_code = "CSE00";
    if(codeNumber < 10) course_code[4] = codeNumber;
    else {
        course_code[3] = 1;
        // if codeNumber is 14 for example --> 14 % 10 = 4 --> stored as "CSE14*"
        // course_code[4] = codeNumber % 10;
        // Hope it doesn't go more than 19 courses

        // For only 10 Courses :
        course_code[4] = 0;
    }

    return course_code;
}
*/




// PROPER COURSE CODE GENERATION -- Best to use -- Not sure about return -- Either use it or don't
char generate_course_code(int course_id) {

    //course_code = "CSE0 course_id"
    char course_code[6] = "CSE00";
    if(course_id < 10) course_code[4] = course_id;
    else {
        course_code[3] = 1;
        course_code[4] = 0;
    }

    return *course_code;
}






char* generate_course_acronym(char* course_name) {

    /*
    int course_quota;
	printf("Enter course name: \n");
	scanf_s("%s", course_name);
	printf("\n");
	*/

    char* acronym;
    acronym[0] = course_name[0];
    static int letterCountOfAcronym = 1;

    // First Letter of a every new word is set as acronym

    for(int i = 1 ; course_name[i]!='\0' ; i++)
        if(course_name[i] == ' ')
            acronym[letterCountOfAcronym++] = course_name[i+1];

    acronym[letterCountOfAcronym] = '\0';


    return acronym;
}




// Student Profile Display
void display(int id, char* name, float gpa) {

    printf("\n\n\n%d", id);
    printf("\n%s", name);
    printf("\n%lf", gpa);

}





int main() {

    student_t stud_1;

    // STUDENT PROFILE

	printf("Enter the student id:\n");
	scanf("%d", &stud_1.id);

	printf("Enter the student name:\n");
	scanf("%s", stud_1.name);

	printf("Enter the student GPA:\n");
	scanf("%f", &stud_1.gpa);


    // 10 COURSES DETAILS PROCESSING


    course_t courses[COURSE_SIZE];

     for(int i = 1; i <= COURSE_SIZE; i++) {

        printf("\nEnter course (%d) name: ", i);
        scanf("%s", courses[i].course_name);
        printf("\nEnter course (%d) quota: ", i);
        scanf("%s", &courses[i].course_quota);
        courses[i].course_id = i;
        strcpy(courses[i].course_code, generate_course_code(i));
        strcpy(courses[i].course_acronym, generate_course_acronym(courses[i].course_name));

    }

    // DISPLAY STUDENT PROFILE

    display(stud_1.id, stud_1.name, stud_1.gpa);


    // DISPLAY ALL THE COURSES

    for(int i = 1; i <= COURSE_SIZE; i++) {
        printf("\n%d.  %s  -  %s (%s) - %d Quota", courses[i].course_id ,\
        courses[i].course_code, courses[i].course_name, \
        courses[i].course_acronym,courses[i].course_quota);

    }

	return 0;

}
