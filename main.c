#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct name {
    char mathisinh[5];
    int sodienthoai;
    char tenthisinh[20];
    char username;
};
int main() {
    FILE *fp = fopen("danhsachsinhvien.txt", "wt");
    int n = 11;
    struct name kkk;
    int i;
    int a;
    while (1 == 1) {
        printf("------------------------menu----------------------------\n");
        printf("vui lòng lựa chọn :\n" );
        printf("1. nhập thông tin sinh viên\n");
        printf("2.hiển thị danh sách sinh viên\n");
        printf("3.lưu danh sách sinh viên \n");
        printf("4.đọc danh sách sinh viên\n");
        printf("5. thoát chương trình\n");
        scanf("%d", &a);
        switch (a) {
            case 1 : {
                FILE *fp = fopen("danhsachsinhvien.txt", "w+");
                printf("bạn chonj nhập thông tin sinh viên\n ");
                for (int i = 1; i < 11; ++i) {

                    printf("nhập mã thí sinh thứ %d\n", i);
                    getchar();
                    gets(kkk.mathisinh);

                        printf("vui lòng nhập số điện thoại\n");
                        scanf("%d", &kkk.sodienthoai);
                        printf("vui lòng điền tên vào đây :\n");
                        getchar();
                        gets(kkk.tenthisinh);
                        printf("tên thí sinh thứ %d là %s\n", i, kkk.tenthisinh);
                        fclose(fp);}
            }
                printf("xin lỗi quý khách , danh sách đầy rồi (TỐI ĐA 10 THÍ SINH) , chúng tôi sẽ đưa bạn về menu \n");
                break;
            case 2 : {
                printf("xin lỗi quý khách , ứng dụng chúng tôi đang gặp sự cố và chưa hoàn thiện ,xin lỗi vì sự bất tiện này\n");
                printf("%-10s%-20s%-10s%-20s%-10s%-20s", "", "Mã sinh viên", "|", "Tên sinh viên", "|",
                       "Điện thoại\n");
            }
                break;
            case 3: {         printf("xin lỗi quý khách , ứng dụng chúng tôi đang gặp sự cố và chưa hoàn thiện ,xin lỗi vì sự bất tiện này");
                        break;

            }
            case 4 : {
                printf("-------------read file data-----------------\n");
                printf("xin lỗi quý khách , ứng dụng chúng tôi đang gặp sự cố và chưa hoàn thiện ,xin lỗi vì sự bất tiện này\n");
                FILE *fp = fopen("danhsachsinhvien.txt", "r");
                int buffersize = 255;
                char buffer[buffersize];
                while (fgets(buffer, buffersize, fp) != NULL) {
                    printf("%s", buffer);
                }
                break;
            }
            case 5: {
                if (strcmp(kkk.username, "\n") == 0) {
                    break;
                }
                default:
                    printf("Bạn đã nhập sai vui lòng nhập từ 1-5.\n");
            }
        }
    }
}

