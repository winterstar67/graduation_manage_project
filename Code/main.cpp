#include <iostream>
#include <string>
#include <cstdio>
#include <stdio.h>

using namespace std;

class Grad_cond{
private:
    int Grad_type;
    int Major_type;
    int advent;
    int total_credit, core_credit,electives_credit, compuls_core, compuls_electives = 0;
    int English;
    int English_score;
    int certificate;
    int Student_ID;
    int minor_credit;
    int double_major_credit;
    int semester;
    int num_of_professor;
    int job;
    double GPA;

public:

    void professor(){
        while(true){
            printf("\n교수님과 상담한 횟수를 입력해주세요:\n");
            int aa,a;
            a = scanf("%d",&aa);
            a=aa;
            if(a>=0){
                num_of_professor=a;
                break;} else printf("잘못된 입력입니다.\n"); }
        }
    void job_score(){
        while(true){
            printf("\n취업상담과 상담을 했나요? 1.했다 | 2.안했다\n");
            int aa,a;
            a = scanf("%d",&aa);
            a=aa;
            if(a==1 || a==2){
                job=a;
                break;} else printf("잘못된 입력입니다.\n"); }
        }

    void Grad(){
        while(true){
            printf("\n졸업방식을 입력해주세요: 1.정규졸업 | 2.조기졸업\n");
            int aa,a;
            a = scanf("%d",&aa);
            a=aa;
            if(a==1 || a==2){
                Grad_type=a;
                break;} else printf("잘못된 입력입니다.\n"); }
        }

    void Major(){
        while(true){
            printf("\n전공에 대해 입력해주세요: 1. 전공심화 | 2. 부전공 | 3. 복수전공 \n");
            int aa,a;
            a = scanf("%d",&aa);
            a=aa;
            if(a==1 || a==2 || a==3 || a==4){
                Major_type=a;

                    while(true){
                    int cc,c;
                    printf("\n이수한 전공선택 학점을 입력해주세요 \n");
                    c = scanf("%d",&cc);
                    c=cc;
                    if(c>=0){
                        core_credit=c;
                        break;} else printf("잘못된 입력입니다.\n");
                        }


                if(Major_type==2){
                    while(true){
                    int bb,b;
                    printf("\n이수한 부전공 학점을 입력해주세요 \n");
                    b = scanf("%d",&bb);
                    b=bb;
                    if(b>=0){
                        minor_credit=b;
                        break;} else printf("잘못된 입력입니다.\n");
                        }
                }

                if(Major_type==3){
                    while(true){
                    int bb,b;
                    printf("\n이수한 복수전공 학점을 입력해주세요 \n");
                    b = scanf("%d",&bb);
                    b=bb;
                    if(b>=0){
                        double_major_credit=b;
                        break;} else printf("잘못된 입력입니다.\n");
                        }
                }

                break;}


                else printf("잘못된 입력입니다.\n");
                }
        }

    void adv(){
        while(true){
            printf("\n이수한 모험활동 입력해주세요: 0.이수안함 | 1.모험 프로젝트 수행 | 2.'창업교육인증서' 취득 | 3.산학협력현장실습을 이수  \n");
            int aa,a;
            a = scanf("%d",&aa);
            a=aa;
            if(a==0 || a==1 || a==2 || a==3){
                advent=a;
                break;} else printf("잘못된 입력입니다.\n");
                }
        }

    void total(){
        while(true){
            int aa,a;
            printf("\n이수한 학점을 입력해주세요 \n");
            a = scanf("%d",&aa);
            a=aa;
            if(a>=0){
                total_credit=a;
                break;} else printf("잘못된 입력입니다.\n");
                }
        }

    void electives(){
        while(true){
            int aa,a;
            printf("\n이수한 교양 학점을 입력해주세요 \n");
            a = scanf("%d",&aa);
            a=aa;
            if(a>=0){
                electives_credit=a;
                break;} else printf("잘못된 입력입니다.\n");
                }
        }

    void c_c(){
        while(true){
            int aa,a;
            printf("\n이수한 전공필수 학점을 입력해주세요 \n");
            a = scanf("%d",&aa);
            a=aa;
            if(a>=0){
                compuls_core=a;
                break;} else printf("잘못된 입력입니다.\n");
                }
        }

    void c_e(){
        while(true){
            int aa,a;
            printf("\n이수한 교양필수 학점을 입력해주세요 \n");
            a = scanf("%d",&aa);
            a=aa;
            if(a>=0){
                compuls_electives=a;
                break;} else printf("잘못된 입력입니다.\n");
                }
        }

    void Eng(){
        while(true){
            int aa,a;
            printf("\n치른 영어 시험을 입력해주세요: 0.시험을 안치름 | 1.TOEIC | 2.TOEIC Speaking | 3.OPIc-IM | 4.G-TELP | 5.CBT | 6.PBT | 7.IBT | 8.TEPS\n");
            a = scanf("%d",&aa);
            a=aa;
            if(a==0 | a==1 || a==2 || a==3 || a==4 || a==5 || a==6 || a==7 || a==8){
                English=a;
                break;} else printf("잘못된 입력입니다.\n");
                }
        }


    void Eng_s(){
        while(true){
            int aa,a;
            printf("\n치른 영어 시험의 점수를 입력해주세요 \n");
            a = scanf("%d",&aa);
            a=aa;
            if(a>=0){
                English_score=a;
                break;} else printf("잘못된 입력입니다.\n");
                }
        }

    void cer(){
        while(true){
            printf("\n 취득한 자격증을 입력해주세요: 0.자격증 없음 | 1.정보처리기사 | 2.정보보안기사 | 3.네트워크관리사 | 4.게임프로그램밍전문가 | 5.멀티미디어콘텐츠제작전문가 | 6.CCNA | 7.CCNP | 8.OCA | 9.OCP \n");
            int aa,a;
            a = scanf("%d",&aa);
            a=aa;
            if(a==0 | a==1 || a==2 || a==3 || a==4 || a==5 || a==6 || a==7 || a==8 || a==9){
                certificate=a;
                break;} else printf("잘못된 입력입니다.\n");
                }
        }


    void Semester(){
        while(true){
            printf("\n이수한 학기를 입력해주세요 \n");
            int aa,a;
            a = scanf("%d",&aa);
            a=aa;
            if(a>=0){
                semester=a;
                break;} else printf("잘못된 입력입니다.\n");
                }
        }


    void GPA_in(){
        while(true){
            printf("\n전평점을 입력해주세요 \n");
            double aa,a;
            a = scanf("%lf",&aa);
            a=aa;
            if(a>=0 && a<=4.5){
                GPA=a;
                break;} else printf("잘못된 입력입니다.\n");
                }
        }




    int num_of_professor_val(){
        return num_of_professor;}

    int job_val(){
        return job;}

    int Grad_val(){
        return Grad_type;}


    int Major_val(){
        return Major_type;}


    int adv_val(){
        return advent;}


    int total_val(){
        return total_credit;}


    int electives_val(){
        return electives_credit;}


    int c_c_val(){
        return compuls_core;}


    int c_e_val(){
        return compuls_electives;}


    int Eng_val(){
        return English;}


    int Eng_s_val(){
        return English_score;}

    int cer_val(){
        return certificate;}


    int core_val(){
        return core_credit;}

    int minor_val(){
        return minor_credit;}

    int d_major_val(){
        return double_major_credit;}


    int semest_val(){
        return semester;}

    double GPA_val(){
        return GPA;}



    void num_of_professor_show(){
           printf("\n교수님과 상담한 횟수: %d",num_of_professor);
    }

    void job_show(){
        if(job==1){
            printf("\n취업지원과 상담 충족");
        } else if(job==2){
            printf("\n취업지원과 상담 충족되지 않음");
        }
    }

    void Grad_show(){
        if(Grad_type==1){
            printf("\n희망하는 졸업: 정규졸업");
        } else if(Grad_type==2){
            printf("\n희망하는 졸업: 조기졸업");
        }
    }

    void Major_show(){
        if(Major_type==1){
            printf("\n전공심화 선택 ");
        } else if(Major_type==2){
            printf("\n부전공 선택 ");
        } else if(Major_type==3){
            printf("\n복수전공 선택 ");
        }
    }
    void adv_show(){
        printf("\n모험활동: ");
        if(advent==0) {printf("모험활동 이수안함");}
        else if(advent==1) {printf("모험프로젝트 수행");}
        else if(advent==2) {printf("'창업교육인증서' 취득");}
        else if(advent==3) {printf("산학협력현장실습을 이수");}
    }
    void total_show(){
        printf("\n총 이수한 학점: %d", total_credit);}

    void electives_show(){
        printf("\n총 교양 학점: %d", electives_credit);}

    void c_c_show(){
        printf("\n전공필수 학점: %d", compuls_core);}

    void c_e_show(){
        printf("\n교양필수 학점: %d", compuls_electives);}

    void core_show(){
        printf("\n전공선택 학점: %d", core_credit);}

    void double_minor_major_show(){
        if(Major_type==2){
                printf("\n부전공 학점: %d", minor_credit);}
        else if(Major_type==3){
                printf("\n복수전공 학점: %d", double_major_credit);}
    }

    void semest_show(){
        printf("\n이수한 학기: %d", semester);}


    void Eng_show(){
        {
            printf("\n영어항목: ");}
            if(English==0){
                printf("영어 자격증 없음");
            }
            else if(English==1){
                printf("TOEIC 취득");}
            else if(English==2){
                printf("TOEIC Speaking 취득");}
            else if(English==3){
                printf("OPIc-IM 취득");}
            else if(English==4){
                printf("G-TELP 취득");}
            else if(English==5){
                printf("CBT 취득");}
            else if(English==6){
                printf("PBT 취득");}
            else if(English==7){
                printf("IBT 취득");}
            else if(English==8){
                printf("TEPS 취득");}
        }

    void Eng_s_show(){
        printf("\n영어성적: %d", English_score);}

    void cer_show(){
        printf("\n자격증 항목: ");
        if(certificate==0) {printf("이수안함\n");}
        else if(certificate==1) {printf("정보처리기사\n");}
        else if(certificate==2) {printf("정보보안기사\n");}
        else if(certificate==3) {printf("네트워크관리사\n");}
        else if(certificate==4) {printf("게임프로그램밍전문가\n");}
        else if(certificate==5) {printf("멀티미디어콘텐츠제작전문가\n");}
        else if(certificate==6) {printf("CCNA\n");}
        else if(certificate==7) {printf("CCNP\n");}
        else if(certificate==8) {printf("OCA\n");}
        else if(certificate==9) {printf("OCP\n");}

        }

    void GPA_show(){
        printf("\n총 평점: %f", GPA);}



    void edit(){

        while(true){
            int input=0;
            printf("\n수정할 항목을 입력하세요. 0.돌아가기 | 1.졸업방식 | 2. 학기 | 3.전공 | 4.총 이수학점 | 5.전공필수 학점 | 6.교양필수 학점 | 7.총 교양 학점 | 8.전평점 | 9.영어항목 | 10.영어점수 | 11.자격증 항목 | 12.모험활동 | 13. 지도교수님과 상담 | 14. 취업지원과 상담 \n:");
            scanf("%d",&input);


            if(input==1){
                Grad();
            }

            else if(input==0){
                break;
            }

            else if(input==2){
                Semester();
            }
            else if(input==3){
                Major();
            }
            else if(input==4){
                total();
            }
            else if(input==5){
                c_c();
            }
            else if(input==6){
                c_e();
            }
            else if(input==7){
                electives();
            }

            else if(input==8){
                GPA_in();
            }
            else if(input==9){
                Eng();
            }
            else if(input==10){
                Eng_s(); //
            }
            else if(input==11){
                cer(); //
            }
            else if(input==12){
                adv();
            }
            else if(input==13){
                professor();
            }
            else if(input==12){
                job_score();
            } else{printf("\n잘못된 입력입니다. 다시입력해 주세요\n");}

        }
    }


};

Grad_cond GilDong;

int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0, o=0;
    while(true){
        printf("\n\n프로그램 시작상태\n");
            int i=0;
            int studen_ID=0;
            printf("\n1. 내 졸업요건 항목 작성 \n2. 졸업가능 확인 \n3. 내 정보 조회\n4. 프로그램 종료\n:");
            while(true){
                int u = scanf("%d",&i);
                u = i;
                if(u==1){
                    printf("\n\n내 졸업요건 항목 작성을 선택하셨습니다. \n");
                    break;
                } else if(u==2){
                    printf("\n\n졸업가능 확인을 입력하셨습니다.\n ");
                    break;
                } else if(u==3){
                    printf("\n\n내 정보 조회를 입력하셨습니다.\n ");
                    break;
                } else if(u==4){
                    printf("\n\n프로그램 종료를 입력하셨습니다.\n ");
                    break;
                } else {
                    printf("\n잘못된 입력입니다. 다시 입력해주세요.");
                }
            }

            //학생정보 추가
            if(i==1){
                GilDong.Grad();
                GilDong.Semester();
                GilDong.Major();
                GilDong.total();
                GilDong.c_c();
                GilDong.c_e();
                GilDong.electives();
                GilDong.GPA_in();
                GilDong.Eng();
                GilDong.Eng_s();
                GilDong.cer();
                GilDong.adv();
                GilDong.professor();
                GilDong.job_score();
            }

            else if(i==2){
                //졸업가능 확인

            if(GilDong.Grad_val() == 1){
                printf("\n%d학기",GilDong.semest_val());
                if(GilDong.semest_val()>=8){
                    d=1;
                    printf("\n정규졸업 학기이수 만족");
                } else {
                    printf("\n정규졸업 학기이수 만족못함");
                }
            } else if (GilDong.Grad_val() == 2){
                if(GilDong.semest_val()<8 && GilDong.semest_val()>=6 && GilDong.GPA_val()>=4){
                    d=1;
                    printf("\n조기졸업 학기이수 및 학점 4.0이상 만족");
                } else if(GilDong.semest_val()>=8 && GilDong.GPA_val()>=4) {
                    printf("\n조기졸업 학기이수 만족못함, 학점 4.0이상 만족");
                } else if(GilDong.semest_val()<8 && GilDong.semest_val()>=6 && GilDong.GPA_val()<4) {
                    printf("\n조기졸업 학기이수 만족, 학점 4.0이상 만족못함");
                } else { a=1;
                    printf("\n조기졸업 학기이수 및 학점 4.0이상 만족못함");
                }
            }

            if(GilDong.Major_val() == 1){
                if(GilDong.core_val()>=45){
                    printf("\n전공선택 학점 충족");
                    f=1;
                } else printf("\n전공선택 %d학점 부족 ",45-GilDong.core_val());
            } else if(GilDong.Major_val() == 2){
                if(GilDong.minor_val()>=24 && GilDong.core_val()>=21) {
                        printf("\n부전공 학점 충족");
                        f=1;
                    }
                else if(GilDong.minor_val()<24 && GilDong.core_val()>=21) printf("\n부전공 %d학점 부족",24-GilDong.minor_val());
                else if(GilDong.minor_val()>=24 && GilDong.core_val()<21) printf("\n전공선택 %d학점 부족",21-GilDong.c_c_val());
                else printf("\n부전공 %d학점, 전공선택 %d학점 부족",24-GilDong.minor_val(), 21-GilDong.c_c_val());
            } else if(GilDong.Major_val() == 3){
                if(GilDong.d_major_val()>=42 && GilDong.core_val()>=24){
                    printf("\n복수전공 학점 충족");
                    f=1;
                }
                else printf("\n복수전공 학점 %d학점, 전공선택 %d학점 부족", 45-GilDong.minor_val(), 21-GilDong.c_c_val());
            } else if(GilDong.Major_val() == 4){

            }

            if(GilDong.total_val()>=130){
                printf("\n총 학점 130학점 만족");
                g=1;
            } else printf("\n총 학점 %d학점 부족",130-GilDong.total_val());


            if(GilDong.c_c_val()>=18){
                printf("\n전공필수 18학점 만족\n");
                h=1;
            } else printf("\n전공필수 %d학점 부족\n",18-GilDong.c_c_val());


            if(GilDong.electives_val() >= 35){
                printf("\n교양과목 35학점 이상 만족 ");
                i=1;
            } else printf("\n교양과목 %d학점 이상 부족 ",35-GilDong.electives_val());


            if(GilDong.c_e_val() >= 18){
                printf("\n교양필수 만족");
                j=1;
            } else {
                printf("\n교양필수 만족못함");
                j=0;
            }


            if(GilDong.GPA_val() >= 2.75){
                printf("\nGPA 만족");
                l=1;
            } else {
                printf("\nGPA항목 불충족");
                l=0;
            }

            if(GilDong.job_val() == 1){
                printf("\n취업지원과 상담 충족");
                n=1;
            } else {
                printf("\n취업지원과 상담 불충족");
                n=0;
            }

            if( (GilDong.num_of_professor_val() >=8 && GilDong.Grad_val()==1) || (GilDong.num_of_professor_val() >=7 && GilDong.Grad_val()==2)){
                printf("\n지도교수님과 상담 충족");
                o=1;
            } else {
                printf("\n지도교수님과 상담 불충족");
                o=0;
            }


            if(GilDong.adv_val() == 1 || GilDong.adv_val() == 2 || GilDong.adv_val() == 3){
                printf("\n모험활동 만족");
                a=1;
            } else {
                printf("\n모험활동 만족못함");
                a=0;
            }

            if(GilDong.cer_val() == 1 || GilDong.cer_val() == 2 || GilDong.cer_val() == 3 || GilDong.cer_val() == 4 || GilDong.cer_val() == 5 || GilDong.cer_val() == 6 || GilDong.cer_val() == 7 || GilDong.cer_val() == 8 || GilDong.cer_val() == 9  ){
                printf("\n자격증 만족");
                b=1;
            } else {
                printf("\n자격증 만족못함");
                b=0;
            }

            if( (GilDong.Eng_val() == 1 && GilDong.Eng_s_val() >=700) || (GilDong.Eng_val() == 2 && GilDong.Eng_s_val() >=5) || (GilDong.Eng_val() == 3 && GilDong.Eng_s_val() >=1) || (GilDong.Eng_val() == 4 && GilDong.Eng_s_val() >=2) || (GilDong.Eng_val() == 5 && GilDong.Eng_s_val() >=173) || (GilDong.Eng_val() == 6 && GilDong.Eng_s_val() >=500) || (GilDong.Eng_val() == 7 && GilDong.Eng_s_val() >=70) || (GilDong.Eng_val() == 8 && GilDong.Eng_s_val() >=503)){
                printf("\n영어 만족");
                c=1;
            } else {
                printf("\n영어 만족못함");
                c=0;
            }

            if((a==1&&b==1) ||(a==1&&c==1) ||(b==1&&c==1)){
                m=1;
            } else{ m=0; }


            if(m==1 && d==1 && f==1 && g==1 && h==1 && i==1 && j==1 && l==1 && n==1 && o==1){
                printf("\n\n졸업가능\n");
            } else {printf("\n\n충족되지 않은 졸업항목 있음\n");}

            if(c==0){
                printf("\n영어 항목을 만족하지 못하셨습니다.\n대체방안을 보여드립니다.\n");
                printf("1.교양 중 영어로 진행하는 과목을 2과목 이상 이수하고 성적이 각각 B0 이상\n");
                printf("2.전공 과목 중 영어로 진행하는 2과목 이수하고 성적이 각각 B+이상인 경우(전공필수과목 제외)\n");
                printf("3.언어교육부에서 영어 관련 이수 프로그램을 120시간 이상 이수한 경우\n");
                printf("4.해외 오프캠퍼스 4주 이상 참여한 경우\n");
                printf("5.해외 교류대학에서 교환학생으로 1학기 이상 이수\n");
                printf("6.모의 TOEIC 700점 이상\n");
            }
            if(b==0){
                printf("\n자격증 항목을 만족하지 못하셨습니다.\n대체방안을 보여드립니다.\n");
                printf("1.교과과정 내 프로그래밍 과목 중 2과목 이상 B학점 이수\n");
                printf("2.학부 자체 프로그램 테스트 합격한 경우\n");
                printf("3.산업체 현장실습 3학점 이상 취득\n");
            }


        }

        else if(i==3){
            //정보수정

            GilDong.Grad_show();
            GilDong.Major_show();
            GilDong.total_show() ;
            GilDong.core_show() ;
            GilDong.c_c_show() ;
            GilDong.electives_show() ;
            GilDong.c_e_show() ;
            GilDong.double_minor_major_show() ;
            GilDong.adv_show() ;
            GilDong.Eng_show() ;
            GilDong.Eng_s_show() ;
            GilDong.cer_show() ;
            GilDong.semest_show() ;
            GilDong.GPA_show() ;
            GilDong.job_show();
            GilDong.num_of_professor_show();
            printf("\n\n정보를 수정하시겠습니까? 1.Yes | 2.No\n");
            int edit=0;
            scanf("%d",&edit);
            if(edit==1){
                GilDong.edit();
            }
        }

        else if(i==4){
            //프로그램 종료
            break;
        }

    }
    return 0;
}
