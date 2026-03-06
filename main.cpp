//상태창 만들기 과제

#include <iostream>
#include <stdio.h>

using namespace std;
 void point(int count,int* Hppotion,int* Mppotion) {

    *Hppotion = count;
    *Mppotion = count;

}
 int main(){
 
 int stat[5]={0};

while (1)

{
    printf("체력과 기력을 입력해 주세요\n");
scanf("%d %d", &stat[0], &stat[1]);

if(stat[0] < 99){
    printf("체력이 너무 적습니다 다시 입력해주세요\n");
    continue;
}
    
    if(stat[1] < 99){
    printf("기력이 너무 적습니다 다시 입력해주세요\n");
    continue;
    }
    break;

}
while (1)


{
    printf("공격력,방어력,운을입력해주세요\n");
    scanf( "%d %d %d", &stat[2] ,&stat[3] ,&stat[4]);

    if(stat[2]>50){
     printf("공격력이 너무 높습니다 다시 입력해주세요\n");
     continue;   
    }
    
    if(stat[3]>50){
     printf("방어력이 너무 높습니다 다시 입력해주세요\n");
     continue;   
    }
    
    if(stat[4]>50){
     printf("운이 너무 높습니다 다시 입력해주세요\n");
     continue;   
    }

    break;
}
 
int choice = 0;
int Hppotion=0;
int Mppotion=0;

point(10, &Hppotion, &Mppotion);

printf("체력증가포션,마나증가포션이 각각 5개씩지급되었습니다\n");
printf("=================================================\n");
 
    while(1) {
        
        printf("=============================================\n");
        printf("<스탯 관리 시스템>\n");
        printf("1. 체력증가\n2. 기력증가\n3. 공격력 증가\n4. 방어력 증가\n5. 운 증가\n6. 현재 능력치\n7. 주변탐색\n0. 나가기\n");
        printf("번호를 선택해주세요: ");
        scanf("%d", &choice); 

        if (choice == 0) {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }

        switch(choice) {
            case 1:
                if (Hppotion <= 0) {
                    cout << "포션이 부족합니다." << endl;
                    continue;
                }
                stat[0] += 30;
                Hppotion--;
                printf("=============================================\n");
                cout << "* 채력가 30 증가되었습니다. 체력증가포션이 1개 차감됩니다." << endl;
                cout << "현재 HP: " << stat[0] << endl;
                cout << "남은 포션 수: " << Hppotion << endl;
                break;
            case 2:
                if (Mppotion <= 0) {
                    cout << "포션이 부족합니다." << endl;
                    continue;
                }
                stat[1] += 20;
                Mppotion--;
                printf("=============================================\n");
                cout << "* MP가 20 증가되었습니다. 포션이 1개 차감됩니다." << endl;
                cout << "현재 MP: " << stat[1] << endl;
                cout << "남은 포션 수: " << Mppotion << endl;
                break;
            case 3:
                stat[2] +=30;
                printf("=============================================\n");
                cout << "* 공격력이 30 증가되었습니다." << endl;
                cout << "현재 공격력: " << stat[2] << endl;
                break;
            case 4:
                stat[3] +=30;
                printf("=============================================\n");
                cout << "* 방어력이 30 증가되었습니다." << endl;
                cout << "현재 방어력: " << stat[3] << endl;
                break;
            case 5:
                stat[4] +=3;
                printf("=============================================\n");
                cout << "운이 3 증가되었습니다" << endl;
                cout << "현재 운:" << stat[4] << endl;
                break;
            case 6:
            printf("=============================================\n");    
            cout << "현재 능력치" << endl;
                cout << "체력:" << stat[0] << endl;
                cout << "기력:" << stat[1] << endl;
                cout << "공격력:" << stat[2] << endl;
                cout << "방어력:" << stat[3] << endl;
                cout << "운:" << stat[4] << endl;
                break;
            case 7:
            printf("=============================================\n");
            cout << "주변을 탐색합니다" << endl;
            Hppotion ++;
            Mppotion ++;
            cout << "체력증가포션,기력증가포션을 각각 1개씩 발견하였습니다!" << endl;
            cout << "===========================================" << endl;
            cout << "현재포션 개수 " << endl;
            cout << "체력증가포션:" << Hppotion << "기력증가포션:" << Mppotion << endl;


        
        }
    }
    return 0;
}

