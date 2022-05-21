#include <stdio.h>

    union{
    
    char *course;

    } brian, haron ,austin ,daisy;


    int main()
{
    brian.course = "Mechanical Engineering";
    haron.course = "Computer Science";
    austin.course = "Chemical Engineering";
    daisy.course = "Software Engineering";

    printf("brian %s\n" ,brian.course); 
    printf("haron %s \n" ,haron.course); 
    printf("austin %s\n" ,austin.course);
    printf("daisy %s\n" ,daisy.course) ; 
    
    return 0;
}