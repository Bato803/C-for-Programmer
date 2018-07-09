

//main.h 
#include <iostream>

using namespace std;

class Student
{
    
    int studentID;
    int grades[10];

public:
    void setStudentID(int id){
        studentID = id; 
    }
    
    void setGrade(int which, int grade){
        grades[which] = grade;
    }
    
    void printGrades(){
        for(int i=0; i<10; i++){
            cout << grades[i] << endl; 
        }
    }
    
    int getMin(){
        int res=1000;
        for(int i=0; i<10; i++){
            if(grades[i]<res) res=grades[i];
        }
        
        return res;
    }
    
    int getMax(){
        int res=0;
        for(int i=0; i<10; i++){
            if(grades[i]>res) res=grades[i];
        }
        
        return res;
    }
    
    float getAverageGrade(){
        float sum=0;
        for(int i=0; i<10; i++){
            sum += grades[i];
        }
        
        return sum/10; 
    }
    
    
};

//********************
class CourseEnrollment
{
    public:
    Student students[6];
    void addStudents(Student arr[]);
    int* getAllGrades();
    int* sortAllGrades();
    int getMinGrade();
    int getMaxGrade();
    float getAvgGrade();
    int grades[60];
    
};

void CourseEnrollment::addStudents(Student arr[]){
    for(int i=0; i<60; i++){
        students[i] = arr[i];
    }
}

int* CourseEnrollment::getAllGrades(){
    return grades; 
}

int CourseEnrollment::getMinGrade(){
    int res=1000;
    for(int i=0; i<60; i++){
        int grade = grades[i];
        if(grade<res) res = grade;
    }
    return res;
}

int CourseEnrollment::getMaxGrade(){
    int res=0;
    for(int i=0; i<60; i++){
        int grade = grades[i];
        if(grade>res) res = grade;
    }
    return res;
}

float CourseEnrollment::getAvgGrade(){
    float res=0, count=0;
    for(int i=0; i<60; i++){
        int grade = grades[i];
        res+=(float)grade;
        count += 1.0;
    }
    return res/count;
}

int* CourseEnrollment::sortAllGrades(){
    for(int i=0; i<60; i++){
        if(grades[i+1]>grades[i]){
            int temp = grades[i];
            grades[i] = grades[i+1];
            grades[i+1] = temp;
        }
    }
    return grades; 
}
