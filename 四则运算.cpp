#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
#include<language.h>
#include<stdbool.h>
using namespace std;
int scan(void);
void language(int choose,int yes);
int generateExpression();//����������ʽ
int randomNumber(int p); //���������������
char randomOperation(); //���������������  
void calculateResult (int ); //���ڲ�������� 
void checkanswer(int result); //���ڼ����
void print(int); //���ͳ�ƽ�� 
void initFraction(int ); //��������� 
void fraction(int n[20],char s[20]); //��������� 
int main()
{
int lan;
int p,q,i,n,k=0,num;//numΪ������k���ڼ�������
int a,b,c,d,answer;//abcΪ��������֣�answer���û�����Ĵ�
int oper=randomNumber();
int number=0,accepted=0;//number���ܵĲ���������accepted����ȷ����
int i,length,true_result;
char result[5];
cout<<"��ѡ����������:"<<endl<<"1.����"<<endl<<"2.Ӣ��"<<endl<<"3.����"<<endl<<"4.����"<<endl<<"5.����"<<endl;
cin>>lan;
lan(lan,0);
n=scan();
if(language)
cout<<"������һ�������𰸣�����e�������ó������"<<endl;
else cout<<"Please enter an integer answer(e to quit and get the result)."<<endl;
bool lan=true;
for(i=0;i<n;i++)
	{
		p=generateExpression();
		randomOperation(oper);
		q=generateExpression();
		cout<<"=";
		if(scan()==caulculateResult(x,y,oper))
                {
                 k++;
                }
		else
		{
			language(lan,1);
			cout<<caulculateResult(p,q,oper)<<endl;
		} 
	}
	print(lan,k,n);
	return 0;
}
for(i=1;i<=5;i++)//ѡ������
{
sign1=randomOperation();
sign2=randomOperation();
sign3=randomOperation();
sign4=randomOperation();
sign5=randomOperation();
}
if(generateExpression(sign1,sign2,sign3,sign4,sign5))continue;
void lan(int choose,int yes)
{
	if(choose==1) Chinese(yes);
	if(choose==2) English(yes);
	if(choose==3) German(yes);
	if(choose==4) French(yes);
	if(choose==5) Japanese(yes);
}
int randomNumber(int p)
{
	srand((unsigned int)time(NULL));
	return rand()%x;
}
if(num>10||num<1)//�˴��޶�Ϊ0~10����Ŀ��
judge=false;
for(i=1;i<=num;)//�������ŷ����ļ�β����ֹ��continue�޳�����Ҫ����Ŀʱ������ѭ������
{
sign1=randomOperation();
sign2=randomOperation();
sign3=randomOperation();
}
int generateExpression(char sign1,char sign2,char sign3,int a,int b,int c,int d)
{
int count_ab,count_cd,judge=0;
if(sign2=='/')//�޳�����Ϊ0�ʹ𰸲�Ϊ��������Ŀ
if(d==0||(float)(c/d)==(c/d))judge=1;
if(sign1=='/')//�޳�����Ϊ0�ʹ𰸲�Ϊ��������Ŀ
if(b==0||(float)(a/b)==(a/b))judge=1;
count_ab=calculateResult(a,b,sign1);
count_cd=calculateResult(c,d,sign2);
if(sign3=='/')//�޳�����Ϊ0�ʹ𰸲�Ϊ��������Ŀ
if(count_cd==0||(float)count_ab==count_cd)judge=1;
if(judge==0)cout<<"("<<a<<sign1<<b<<")"<<sign3<<"("<<c<<sign2<<d<<")"<<endl;
return judge;
}
while(n!=1||judge==false)//���û��ٴγ��ԵĻ���
{
if(language) cout<<"������һ��0~10����";
else cout<<"Please enter 0~10 interger";
       while(1)
       {
        i=0;
        true_result=0;
        Calculation_formula();
        scanf("%s",result);//�������ַ�������ʽ��������Ľ��
        if(result[1]=='0'&&result[0]=='0')//������־
            break;
        length=strlen(result);
        reverse(result,length);
        while(result[i]!='\0'){//�������ַ���ת���ɶ�Ӧ��ֵ
            true_result+=(result[i]-48)*pow(10,i);
            i++;
        }
        if(true_result==right){
            accepted++;
            printf("������ȷ��\n");
        }
        else{
            printf("�������!��ȷ�����:%d\n",right);
        }
        number++;
        fflush(stdin);
    }
    printf("���Խ�����\n��%d����Ŀ,ͨ��%d��!\n",number,accepted);
    return 0��
}
 
void Calculation_formula()//����ʽ����
{
    int temp1,temp2;//����������ɵ�������
    char c;//���������
    int temp;//�������0-3��ʾ��Ӧ�����
    srand((unsigned)time(NULL));//����ǰʱ����Ϊ�����������
    temp=rand()%4;
    temp1=rand()%10;
    temp2=rand()%10;
    switch (temp)
{
        case 0://�ӷ�
            c='+';
            right=temp1+temp2;
            break;
        case 1://����
            c='-';
            if(temp1<temp2)//����Ǹ�
                swap(&temp1,&temp2);
            right=temp1-temp2;
            break;
        case 2://�˷�
            c='*';
            right=temp1*temp2;
            break;
        case 3://����
            c='/';
            if(temp1==0&&temp2==0)
            {//�����������ܶ���0
                do
               {
                    temp1=rand()%10;
                    temp2=rand()%10;
                }
            while(temp1||temp2);
            }
            if(temp1<temp2)//������Ӧ��С�ڳ���
                swap(&temp1,&temp2);
            if(temp2==0||temp1%temp2){//����������0���������������
                do{
                   temp2=rand()%10;
                   }
            while(!temp2||(temp1%temp2));
            }
            right=temp1/temp2;
            break;
    }
    printf("%d%c%d=",temp1,c,temp2);
}
 
void swap(int *a,int *b)//������ֵ
{
    int p=*a;
    *a=*b;
    *b=p;
}
 
void reverse(char str[],int n)//��������ת
{
    char c;
    int i;
    for(i=0;i<n/2;i++)
   {
        c=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=c;
    }
}
