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
            printf("\n�����԰� ����� Ƚ���� �Է����ּ���:\n");
            int aa,a;
            a = scanf("%d",&aa);
            a=aa;
            if(a>=0){
                num_of_professor=a;
                break;} else printf("�߸��� �Է��Դϴ�.\n"); }
        }
    void job_score(){
        while(true){
            printf("\n������� ����� �߳���? 1.�ߴ� | 2.���ߴ�\n");
            int aa,a;
            a = scanf("%d",&aa);
            a=aa;
            if(a==1 || a==2){
                job=a;
                break;} else printf("�߸��� �Է��Դϴ�.\n"); }
        }

    void Grad(){
        while(true){
            printf("\n��������� �Է����ּ���: 1.�������� | 2.��������\n");
            int aa,a;
            a = scanf("%d",&aa);
            a=aa;
            if(a==1 || a==2){
                Grad_type=a;
                break;} else printf("�߸��� �Է��Դϴ�.\n"); }
        }

    void Major(){
        while(true){
            printf("\n������ ���� �Է����ּ���: 1. ������ȭ | 2. ������ | 3. �������� \n");
            int aa,a;
            a = scanf("%d",&aa);
            a=aa;
            if(a==1 || a==2 || a==3 || a==4){
                Major_type=a;

                    while(true){
                    int cc,c;
                    printf("\n�̼��� �������� ������ �Է����ּ��� \n");
                    c = scanf("%d",&cc);
                    c=cc;
                    if(c>=0){
                        core_credit=c;
                        break;} else printf("�߸��� �Է��Դϴ�.\n");
                        }


                if(Major_type==2){
                    while(true){
                    int bb,b;
                    printf("\n�̼��� ������ ������ �Է����ּ��� \n");
                    b = scanf("%d",&bb);
                    b=bb;
                    if(b>=0){
                        minor_credit=b;
                        break;} else printf("�߸��� �Է��Դϴ�.\n");
                        }
                }

                if(Major_type==3){
                    while(true){
                    int bb,b;
                    printf("\n�̼��� �������� ������ �Է����ּ��� \n");
                    b = scanf("%d",&bb);
                    b=bb;
                    if(b>=0){
                        double_major_credit=b;
                        break;} else printf("�߸��� �Է��Դϴ�.\n");
                        }
                }

                break;}


                else printf("�߸��� �Է��Դϴ�.\n");
                }
        }

    void adv(){
        while(true){
            printf("\n�̼��� ����Ȱ�� �Է����ּ���: 0.�̼����� | 1.���� ������Ʈ ���� | 2.'â������������' ��� | 3.������������ǽ��� �̼�  \n");
            int aa,a;
            a = scanf("%d",&aa);
            a=aa;
            if(a==0 || a==1 || a==2 || a==3){
                advent=a;
                break;} else printf("�߸��� �Է��Դϴ�.\n");
                }
        }

    void total(){
        while(true){
            int aa,a;
            printf("\n�̼��� ������ �Է����ּ��� \n");
            a = scanf("%d",&aa);
            a=aa;
            if(a>=0){
                total_credit=a;
                break;} else printf("�߸��� �Է��Դϴ�.\n");
                }
        }

    void electives(){
        while(true){
            int aa,a;
            printf("\n�̼��� ���� ������ �Է����ּ��� \n");
            a = scanf("%d",&aa);
            a=aa;
            if(a>=0){
                electives_credit=a;
                break;} else printf("�߸��� �Է��Դϴ�.\n");
                }
        }

    void c_c(){
        while(true){
            int aa,a;
            printf("\n�̼��� �����ʼ� ������ �Է����ּ��� \n");
            a = scanf("%d",&aa);
            a=aa;
            if(a>=0){
                compuls_core=a;
                break;} else printf("�߸��� �Է��Դϴ�.\n");
                }
        }

    void c_e(){
        while(true){
            int aa,a;
            printf("\n�̼��� �����ʼ� ������ �Է����ּ��� \n");
            a = scanf("%d",&aa);
            a=aa;
            if(a>=0){
                compuls_electives=a;
                break;} else printf("�߸��� �Է��Դϴ�.\n");
                }
        }

    void Eng(){
        while(true){
            int aa,a;
            printf("\nġ�� ���� ������ �Է����ּ���: 0.������ ��ġ�� | 1.TOEIC | 2.TOEIC Speaking | 3.OPIc-IM | 4.G-TELP | 5.CBT | 6.PBT | 7.IBT | 8.TEPS\n");
            a = scanf("%d",&aa);
            a=aa;
            if(a==0 | a==1 || a==2 || a==3 || a==4 || a==5 || a==6 || a==7 || a==8){
                English=a;
                break;} else printf("�߸��� �Է��Դϴ�.\n");
                }
        }


    void Eng_s(){
        while(true){
            int aa,a;
            printf("\nġ�� ���� ������ ������ �Է����ּ��� \n");
            a = scanf("%d",&aa);
            a=aa;
            if(a>=0){
                English_score=a;
                break;} else printf("�߸��� �Է��Դϴ�.\n");
                }
        }

    void cer(){
        while(true){
            printf("\n ����� �ڰ����� �Է����ּ���: 0.�ڰ��� ���� | 1.����ó����� | 2.�������ȱ�� | 3.��Ʈ��ũ������ | 4.�������α׷��������� | 5.��Ƽ�̵������������������ | 6.CCNA | 7.CCNP | 8.OCA | 9.OCP \n");
            int aa,a;
            a = scanf("%d",&aa);
            a=aa;
            if(a==0 | a==1 || a==2 || a==3 || a==4 || a==5 || a==6 || a==7 || a==8 || a==9){
                certificate=a;
                break;} else printf("�߸��� �Է��Դϴ�.\n");
                }
        }


    void Semester(){
        while(true){
            printf("\n�̼��� �б⸦ �Է����ּ��� \n");
            int aa,a;
            a = scanf("%d",&aa);
            a=aa;
            if(a>=0){
                semester=a;
                break;} else printf("�߸��� �Է��Դϴ�.\n");
                }
        }


    void GPA_in(){
        while(true){
            printf("\n�������� �Է����ּ��� \n");
            double aa,a;
            a = scanf("%lf",&aa);
            a=aa;
            if(a>=0 && a<=4.5){
                GPA=a;
                break;} else printf("�߸��� �Է��Դϴ�.\n");
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
           printf("\n�����԰� ����� Ƚ��: %d",num_of_professor);
    }

    void job_show(){
        if(job==1){
            printf("\n��������� ��� ����");
        } else if(job==2){
            printf("\n��������� ��� �������� ����");
        }
    }

    void Grad_show(){
        if(Grad_type==1){
            printf("\n����ϴ� ����: ��������");
        } else if(Grad_type==2){
            printf("\n����ϴ� ����: ��������");
        }
    }

    void Major_show(){
        if(Major_type==1){
            printf("\n������ȭ ���� ");
        } else if(Major_type==2){
            printf("\n������ ���� ");
        } else if(Major_type==3){
            printf("\n�������� ���� ");
        }
    }
    void adv_show(){
        printf("\n����Ȱ��: ");
        if(advent==0) {printf("����Ȱ�� �̼�����");}
        else if(advent==1) {printf("����������Ʈ ����");}
        else if(advent==2) {printf("'â������������' ���");}
        else if(advent==3) {printf("������������ǽ��� �̼�");}
    }
    void total_show(){
        printf("\n�� �̼��� ����: %d", total_credit);}

    void electives_show(){
        printf("\n�� ���� ����: %d", electives_credit);}

    void c_c_show(){
        printf("\n�����ʼ� ����: %d", compuls_core);}

    void c_e_show(){
        printf("\n�����ʼ� ����: %d", compuls_electives);}

    void core_show(){
        printf("\n�������� ����: %d", core_credit);}

    void double_minor_major_show(){
        if(Major_type==2){
                printf("\n������ ����: %d", minor_credit);}
        else if(Major_type==3){
                printf("\n�������� ����: %d", double_major_credit);}
    }

    void semest_show(){
        printf("\n�̼��� �б�: %d", semester);}


    void Eng_show(){
        {
            printf("\n�����׸�: ");}
            if(English==0){
                printf("���� �ڰ��� ����");
            }
            else if(English==1){
                printf("TOEIC ���");}
            else if(English==2){
                printf("TOEIC Speaking ���");}
            else if(English==3){
                printf("OPIc-IM ���");}
            else if(English==4){
                printf("G-TELP ���");}
            else if(English==5){
                printf("CBT ���");}
            else if(English==6){
                printf("PBT ���");}
            else if(English==7){
                printf("IBT ���");}
            else if(English==8){
                printf("TEPS ���");}
        }

    void Eng_s_show(){
        printf("\n�����: %d", English_score);}

    void cer_show(){
        printf("\n�ڰ��� �׸�: ");
        if(certificate==0) {printf("�̼�����\n");}
        else if(certificate==1) {printf("����ó�����\n");}
        else if(certificate==2) {printf("�������ȱ��\n");}
        else if(certificate==3) {printf("��Ʈ��ũ������\n");}
        else if(certificate==4) {printf("�������α׷���������\n");}
        else if(certificate==5) {printf("��Ƽ�̵������������������\n");}
        else if(certificate==6) {printf("CCNA\n");}
        else if(certificate==7) {printf("CCNP\n");}
        else if(certificate==8) {printf("OCA\n");}
        else if(certificate==9) {printf("OCP\n");}

        }

    void GPA_show(){
        printf("\n�� ����: %f", GPA);}



    void edit(){

        while(true){
            int input=0;
            printf("\n������ �׸��� �Է��ϼ���. 0.���ư��� | 1.������� | 2. �б� | 3.���� | 4.�� �̼����� | 5.�����ʼ� ���� | 6.�����ʼ� ���� | 7.�� ���� ���� | 8.������ | 9.�����׸� | 10.�������� | 11.�ڰ��� �׸� | 12.����Ȱ�� | 13. ���������԰� ��� | 14. ��������� ��� \n:");
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
            } else{printf("\n�߸��� �Է��Դϴ�. �ٽ��Է��� �ּ���\n");}

        }
    }


};

Grad_cond GilDong;

int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0, o=0;
    while(true){
        printf("\n\n���α׷� ���ۻ���\n");
            int i=0;
            int studen_ID=0;
            printf("\n1. �� ������� �׸� �ۼ� \n2. �������� Ȯ�� \n3. �� ���� ��ȸ\n4. ���α׷� ����\n:");
            while(true){
                int u = scanf("%d",&i);
                u = i;
                if(u==1){
                    printf("\n\n�� ������� �׸� �ۼ��� �����ϼ̽��ϴ�. \n");
                    break;
                } else if(u==2){
                    printf("\n\n�������� Ȯ���� �Է��ϼ̽��ϴ�.\n ");
                    break;
                } else if(u==3){
                    printf("\n\n�� ���� ��ȸ�� �Է��ϼ̽��ϴ�.\n ");
                    break;
                } else if(u==4){
                    printf("\n\n���α׷� ���Ḧ �Է��ϼ̽��ϴ�.\n ");
                    break;
                } else {
                    printf("\n�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���.");
                }
            }

            //�л����� �߰�
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
                //�������� Ȯ��

            if(GilDong.Grad_val() == 1){
                printf("\n%d�б�",GilDong.semest_val());
                if(GilDong.semest_val()>=8){
                    d=1;
                    printf("\n�������� �б��̼� ����");
                } else {
                    printf("\n�������� �б��̼� ��������");
                }
            } else if (GilDong.Grad_val() == 2){
                if(GilDong.semest_val()<8 && GilDong.semest_val()>=6 && GilDong.GPA_val()>=4){
                    d=1;
                    printf("\n�������� �б��̼� �� ���� 4.0�̻� ����");
                } else if(GilDong.semest_val()>=8 && GilDong.GPA_val()>=4) {
                    printf("\n�������� �б��̼� ��������, ���� 4.0�̻� ����");
                } else if(GilDong.semest_val()<8 && GilDong.semest_val()>=6 && GilDong.GPA_val()<4) {
                    printf("\n�������� �б��̼� ����, ���� 4.0�̻� ��������");
                } else { a=1;
                    printf("\n�������� �б��̼� �� ���� 4.0�̻� ��������");
                }
            }

            if(GilDong.Major_val() == 1){
                if(GilDong.core_val()>=45){
                    printf("\n�������� ���� ����");
                    f=1;
                } else printf("\n�������� %d���� ���� ",45-GilDong.core_val());
            } else if(GilDong.Major_val() == 2){
                if(GilDong.minor_val()>=24 && GilDong.core_val()>=21) {
                        printf("\n������ ���� ����");
                        f=1;
                    }
                else if(GilDong.minor_val()<24 && GilDong.core_val()>=21) printf("\n������ %d���� ����",24-GilDong.minor_val());
                else if(GilDong.minor_val()>=24 && GilDong.core_val()<21) printf("\n�������� %d���� ����",21-GilDong.c_c_val());
                else printf("\n������ %d����, �������� %d���� ����",24-GilDong.minor_val(), 21-GilDong.c_c_val());
            } else if(GilDong.Major_val() == 3){
                if(GilDong.d_major_val()>=42 && GilDong.core_val()>=24){
                    printf("\n�������� ���� ����");
                    f=1;
                }
                else printf("\n�������� ���� %d����, �������� %d���� ����", 45-GilDong.minor_val(), 21-GilDong.c_c_val());
            } else if(GilDong.Major_val() == 4){

            }

            if(GilDong.total_val()>=130){
                printf("\n�� ���� 130���� ����");
                g=1;
            } else printf("\n�� ���� %d���� ����",130-GilDong.total_val());


            if(GilDong.c_c_val()>=18){
                printf("\n�����ʼ� 18���� ����\n");
                h=1;
            } else printf("\n�����ʼ� %d���� ����\n",18-GilDong.c_c_val());


            if(GilDong.electives_val() >= 35){
                printf("\n������� 35���� �̻� ���� ");
                i=1;
            } else printf("\n������� %d���� �̻� ���� ",35-GilDong.electives_val());


            if(GilDong.c_e_val() >= 18){
                printf("\n�����ʼ� ����");
                j=1;
            } else {
                printf("\n�����ʼ� ��������");
                j=0;
            }


            if(GilDong.GPA_val() >= 2.75){
                printf("\nGPA ����");
                l=1;
            } else {
                printf("\nGPA�׸� ������");
                l=0;
            }

            if(GilDong.job_val() == 1){
                printf("\n��������� ��� ����");
                n=1;
            } else {
                printf("\n��������� ��� ������");
                n=0;
            }

            if( (GilDong.num_of_professor_val() >=8 && GilDong.Grad_val()==1) || (GilDong.num_of_professor_val() >=7 && GilDong.Grad_val()==2)){
                printf("\n���������԰� ��� ����");
                o=1;
            } else {
                printf("\n���������԰� ��� ������");
                o=0;
            }


            if(GilDong.adv_val() == 1 || GilDong.adv_val() == 2 || GilDong.adv_val() == 3){
                printf("\n����Ȱ�� ����");
                a=1;
            } else {
                printf("\n����Ȱ�� ��������");
                a=0;
            }

            if(GilDong.cer_val() == 1 || GilDong.cer_val() == 2 || GilDong.cer_val() == 3 || GilDong.cer_val() == 4 || GilDong.cer_val() == 5 || GilDong.cer_val() == 6 || GilDong.cer_val() == 7 || GilDong.cer_val() == 8 || GilDong.cer_val() == 9  ){
                printf("\n�ڰ��� ����");
                b=1;
            } else {
                printf("\n�ڰ��� ��������");
                b=0;
            }

            if( (GilDong.Eng_val() == 1 && GilDong.Eng_s_val() >=700) || (GilDong.Eng_val() == 2 && GilDong.Eng_s_val() >=5) || (GilDong.Eng_val() == 3 && GilDong.Eng_s_val() >=1) || (GilDong.Eng_val() == 4 && GilDong.Eng_s_val() >=2) || (GilDong.Eng_val() == 5 && GilDong.Eng_s_val() >=173) || (GilDong.Eng_val() == 6 && GilDong.Eng_s_val() >=500) || (GilDong.Eng_val() == 7 && GilDong.Eng_s_val() >=70) || (GilDong.Eng_val() == 8 && GilDong.Eng_s_val() >=503)){
                printf("\n���� ����");
                c=1;
            } else {
                printf("\n���� ��������");
                c=0;
            }

            if((a==1&&b==1) ||(a==1&&c==1) ||(b==1&&c==1)){
                m=1;
            } else{ m=0; }


            if(m==1 && d==1 && f==1 && g==1 && h==1 && i==1 && j==1 && l==1 && n==1 && o==1){
                printf("\n\n��������\n");
            } else {printf("\n\n�������� ���� �����׸� ����\n");}

            if(c==0){
                printf("\n���� �׸��� �������� ���ϼ̽��ϴ�.\n��ü����� �����帳�ϴ�.\n");
                printf("1.���� �� ����� �����ϴ� ������ 2���� �̻� �̼��ϰ� ������ ���� B0 �̻�\n");
                printf("2.���� ���� �� ����� �����ϴ� 2���� �̼��ϰ� ������ ���� B+�̻��� ���(�����ʼ����� ����)\n");
                printf("3.�����ο��� ���� ���� �̼� ���α׷��� 120�ð� �̻� �̼��� ���\n");
                printf("4.�ؿ� ����ķ�۽� 4�� �̻� ������ ���\n");
                printf("5.�ؿ� �������п��� ��ȯ�л����� 1�б� �̻� �̼�\n");
                printf("6.���� TOEIC 700�� �̻�\n");
            }
            if(b==0){
                printf("\n�ڰ��� �׸��� �������� ���ϼ̽��ϴ�.\n��ü����� �����帳�ϴ�.\n");
                printf("1.�������� �� ���α׷��� ���� �� 2���� �̻� B���� �̼�\n");
                printf("2.�к� ��ü ���α׷� �׽�Ʈ �հ��� ���\n");
                printf("3.���ü ����ǽ� 3���� �̻� ���\n");
            }


        }

        else if(i==3){
            //��������

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
            printf("\n\n������ �����Ͻðڽ��ϱ�? 1.Yes | 2.No\n");
            int edit=0;
            scanf("%d",&edit);
            if(edit==1){
                GilDong.edit();
            }
        }

        else if(i==4){
            //���α׷� ����
            break;
        }

    }
    return 0;
}
