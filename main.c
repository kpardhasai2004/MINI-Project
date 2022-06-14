/*This project is used to make this progran will take the data from the user and after giving the values 
imediately it will print the data given as input calculation of total,average of a group of students.
Gives the data for a specific student by taking his roll number.
KAPAGANTI PARDHA SAI - RA2111003011660
SHASHWAT SINGH - RA2111003011659*/
#include <stdio.h>
/*
mos = marks of subjects
nos = number of subjects
tnm = sum of maximum marks of all subjects
rstu = roll number of student
*/
int main()
{   int rank,n,i,j,nos,tnm,a=1,rstu;
    struct{
    int roll;
    char name[20];
    int mos[30];
    int total;
    float avg;
    }stu[100];
    printf ("Give the number of students: ");
    scanf("%d",&n);
    printf ("Give the number of subjects: ");
    scanf("%d",&nos);
    printf ("Give sum of maximum marks of all subjects: ");
    scanf("%d",&tnm);
    printf("\n");
    for (i=1;i<=n;i++){
        printf("Give the roll number of the student %d: ",i);
        scanf("%d",&stu[i].roll);
        printf("Give the name of the student %d: ",i);
        scanf("%s",stu[i].name);
        for(j=0;j<nos;j++){
        printf("Give the marks of subject %d: ",j+1);
        scanf("%d",&stu[i].mos[j]);}
        printf("\n");
    }
    printf("this is the data you have given: \n");
    
    for (i=1;i<=n;i++){
        printf("roll no: %d \n",stu[i].roll);
        printf("name: %s \n",stu[i].name);
        stu[i].total = 0;
        for(j=0;j<nos;j++){
            printf("mark in subject %d is %d \n",j+1,stu[i].mos[j]);
            stu[i].total+=stu[i].mos[j];
            stu[i].avg=stu[i].total/nos;
        }
        printf("Total marks of %s is %d.\n",stu[i].name,stu[i].total);
        printf("Average marks of %s is %.2f.\n",stu[i].name,stu[i].avg);
        printf("\n");
    }
    printf("if you want data of specific person give '1' for yes or '0' for no. ");
    scanf("%d",&a);
    while(a!=0){
    if (a=1){
        printf("Give the roll number of the student:");
        scanf("%d",&rstu);
        for (i=1;i<=n;i++){
            if(rstu==stu[i].roll){
                printf("name:%s \n",stu[i].name);
                for(j=0;j<nos;j++){
                    printf("mark in subject %d is %d \n",j+1,stu[i].mos[j]);}
                printf("Total marks of %s is %d.\n",stu[i].name,stu[i].total);
                printf("Average marks of %s is %.2f.\n",stu[i].name,stu[i].avg);
                printf("\n");}}
        printf("if you want data of another person give '1' for yes or '0' for no.");
        scanf("%d",&a);
        }}
    return 0;
}

/*Output:
Give the number of students: 2
Give the number of subjects: 2
Give sum of maximum marks of all subjects: 20

Give the roll number of the student 1: 1
Give the name of the student 1: a
Give the marks of subject 1: 10
Give the marks of subject 2: 10

Give the roll number of the student 2: 2
Give the name of the student 2: b
Give the marks of subject 1: 9
Give the marks of subject 2: 9

this is the data you have given: 
roll no: 1 
name: a 
mark in subject 1 is 10 
mark in subject 2 is 10 
Total marks of a is 20.
Average marks of a is 10.00.

roll no: 2 
name: b 
mark in subject 1 is 9 
mark in subject 2 is 9 
Total marks of b is 18.
Average marks of b is 9.00.

if you want data of specific person give '1' for yes or '0' for no. 1
Give the roll number of the student:1
name:a 
mark in subject 1 is 10 
mark in subject 2 is 10 
Total marks of a is 20.
Average marks of a is 10.00.

if you want data of another person give '1' for yes or '0' for no.0
Give the number of students: 2
Give the number of subjects: 2
Give sum of maximum marks of all subjects: 20

Give the roll number of the student 1: 1
Give the name of the student 1: a
Give the marks of subject 1: 10
Give the marks of subject 2: 10

Give the roll number of the student 2: 2
Give the name of the student 2: b
Give the marks of subject 1: 9
Give the marks of subject 2: 9

this is the data you have given: 
roll no: 1 
name: a 
mark in subject 1 is 10 
mark in subject 2 is 10 
Total marks of a is 20.
Average marks of a is 10.00.

roll no: 2 
name: b 
mark in subject 1 is 9 
mark in subject 2 is 9 
Total marks of b is 18.
Average marks of b is 9.00.

if you want data of specific person give '1' for yes or '0' for no. 1
Give the roll number of the student:1
name:a 
mark in subject 1 is 10 
mark in subject 2 is 10 
Total marks of a is 20.
Average marks of a is 10.00.

if you want data of another person give '1' for yes or '0' for no.0
Give the number of students: 2
Give the number of subjects: 2
Give sum of maximum marks of all subjects: 20

Give the roll number of the student 1: 1
Give the name of the student 1: a
Give the marks of subject 1: 10
Give the marks of subject 2: 10

Give the roll number of the student 2: 2
Give the name of the student 2: b
Give the marks of subject 1: 9
Give the marks of subject 2: 9

this is the data you have given: 
roll no: 1 
name: a 
mark in subject 1 is 10 
mark in subject 2 is 10 
Total marks of a is 20.
Average marks of a is 10.00.

roll no: 2 
name: b 
mark in subject 1 is 9 
mark in subject 2 is 9 
Total marks of b is 18.
Average marks of b is 9.00.

if you want data of specific person give '1' for yes or '0' for no. 1
Give the roll number of the student:1
name:a 
mark in subject 1 is 10 
mark in subject 2 is 10 
Total marks of a is 20.
Average marks of a is 10.00.

if you want data of another person give '1' for yes or '0' for no.0
Give the number of students: 2
Give the number of subjects: 2
Give sum of maximum marks of all subjects: 20

Give the roll number of the student 1: 1
Give the name of the student 1: a
Give the marks of subject 1: 10
Give the marks of subject 2: 10

Give the roll number of the student 2: 2
Give the name of the student 2: b
Give the marks of subject 1: 9
Give the marks of subject 2: 9

this is the data you have given: 
roll no: 1 
name: a 
mark in subject 1 is 10 
mark in subject 2 is 10 
Total marks of a is 20.
Average marks of a is 10.00.

roll no: 2 
name: b 
mark in subject 1 is 9 
mark in subject 2 is 9 
Total marks of b is 18.
Average marks of b is 9.00.

if you want data of specific person give '1' for yes or '0' for no. 1
Give the roll number of the student:1
name:a 
mark in subject 1 is 10 
mark in subject 2 is 10 
Total marks of a is 20.
Average marks of a is 10.00.

if you want data of another person give '1' for yes or '0' for no.0
Give the number of students: 2
Give the number of subjects: 2
Give sum of maximum marks of all subjects: 20

Give the roll number of the student 1: 1
Give the name of the student 1: a
Give the marks of subject 1: 10
Give the marks of subject 2: 10

Give the roll number of the student 2: 2
Give the name of the student 2: b
Give the marks of subject 1: 9
Give the marks of subject 2: 9

this is the data you have given: 
roll no: 1 
name: a 
mark in subject 1 is 10 
mark in subject 2 is 10 
Total marks of a is 20.
Average marks of a is 10.00.

roll no: 2 
name: b 
mark in subject 1 is 9 
mark in subject 2 is 9 
Total marks of b is 18.
Average marks of b is 9.00.

if you want data of specific person give '1' for yes or '0' for no. 1
Give the roll number of the student:1
name:a 
mark in subject 1 is 10 
mark in subject 2 is 10 
Total marks of a is 20.
Average marks of a is 10.00.

if you want data of another person give '1' for yes or '0' for no.0
(the code ends here since the while loop condition is not satisfied.)
*/