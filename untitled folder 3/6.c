#include <stdio.h>

struct Student {
    char name[20];
    int age;
    float score;
};

int main() {
    // 创建一个结构体数组
    struct Student students[3] = {
        {"Tom", 18, 89.5},
        {"Jerry", 20, 78.0},
        {"Mary", 19, 92.0}
    };
    
    // 写入二进制文件
    FILE* fp = fopen("students.bin", "wb");
    fwrite(students, sizeof(struct Student), 3, fp);
    fclose(fp);
    
    // 读取二进制文件
    struct Student new_students[3];
    fp = fopen("students.bin", "rb");
    fread(new_students, sizeof(struct Student), 3, fp);
    fclose(fp);
    
    // 打印读取到的数据
    for(int i=0; i<3; i++) {
        printf("Name: %s, Age: %d, Score: %.2f\n", 
               new_students[i].name, new_students[i].age, new_students[i].score);
    }
    
    return 0;
}
