#include <stdio.h>
#define N 4

struct Student{
    //学生类型定义
    int sno;        //学号
    char name[16];  //姓名
    float score;    //成绩
};

//结构体数组应用--对学生信息根据成绩排序
int main() {

    struct Student stu[N];
    struct Student temp;

    //输入N个学生的信息
    for(int i=0; i<N; i++){
        printf("输入第%d个学生的信息【学号 姓名 成绩】：\n", i+1);
        scanf("%d %s %f", &stu[i].sno, stu[i].name, &stu[i].score);
    }

    //冒泡排序，按学生成绩降序排序
    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-i-1; j++){
            if(stu[j].score < stu[j+1].score){
                temp = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = temp;
            }
        }
    }

    //排序后输出N个学生的信息
    for(int i=0; i<N; i++){
        printf("学号:%d 姓名:%s 成绩:%.2f", stu[i].sno, stu[i].name, stu[i].score);
        printf("\n");
    }


    return 0;
}
