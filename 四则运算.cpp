#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
#include<language.h>
#include<stdbool.h>
using namespace std;
int scan(void);
void language(int choose,int yes);
int generateExpression();//用于生成算式
int randomNumber(int p); //用于生成随机数字
char randomOperation(); //用于生成随机符号  
void calculateResult (int ); //用于产生运算答案 
void checkanswer(int result); //用于检验答案
void print(int); //输出统计结果 
void initFraction(int ); //真分数运算 
void fraction(int n[20],char s[20]); //真分数运算 
int main()
{
int lan;
int p,q,i,n,k=0,num;//num为题数，k用于计算题数
int a,b,c,d,answer;//abc为计算的数字，answer是用户输入的答案
int oper=randomNumber();
int number=0,accepted=0;//number是总的测试题数，accepted是正确题数
int i,length,true_result;
char result[5];
cout<<"请选择语言类型:"<<endl<<"1.中文"<<endl<<"2.英语"<<endl<<"3.德语"<<endl<<"4.法语"<<endl<<"5.日语"<<endl;
cin>>lan;
lan(lan,0);
n=scan();
if(language)
cout<<"请输入一个整数答案（输入e结束并得出结果）"<<endl;
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
for(i=1;i<=5;i++)//选择语言
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
if(num>10||num<1)//此处限定为0~10的题目数
judge=false;
for(i=1;i<=num;)//自增符号放于文件尾，防止用continue剔除不合要求题目时减少了循环次数
{
sign1=randomOperation();
sign2=randomOperation();
sign3=randomOperation();
}
int generateExpression(char sign1,char sign2,char sign3,int a,int b,int c,int d)
{
int count_ab,count_cd,judge=0;
if(sign2=='/')//剔除除数为0和答案不为整数的题目
if(d==0||(float)(c/d)==(c/d))judge=1;
if(sign1=='/')//剔除除数为0和答案不为整数的题目
if(b==0||(float)(a/b)==(a/b))judge=1;
count_ab=calculateResult(a,b,sign1);
count_cd=calculateResult(c,d,sign2);
if(sign3=='/')//剔除除数为0和答案不为整数的题目
if(count_cd==0||(float)count_ab==count_cd)judge=1;
if(judge==0)cout<<"("<<a<<sign1<<b<<")"<<sign3<<"("<<c<<sign2<<d<<")"<<endl;
return judge;
}
while(n!=1||judge==false)//给用户再次尝试的机会
{
if(language) cout<<"请输入一个0~10整数";
else cout<<"Please enter 0~10 interger";
       while(1)
       {
        i=0;
        true_result=0;
        Calculation_formula();
        scanf("%s",result);//以数字字符数组形式保存输入的结果
        if(result[1]=='0'&&result[0]=='0')//结束标志
            break;
        length=strlen(result);
        reverse(result,length);
        while(result[i]!='\0'){//将数字字符串转换成对应数值
            true_result+=(result[i]-48)*pow(10,i);
            i++;
        }
        if(true_result==right){
            accepted++;
            printf("计算正确！\n");
        }
        else{
            printf("计算错误!正确结果是:%d\n",right);
        }
        number++;
        fflush(stdin);
    }
    printf("测试结束！\n共%d道题目,通过%d道!\n",number,accepted);
    return 0；
}
 
void Calculation_formula()//运算式生成
{
    int temp1,temp2;//保存随机生成的运算数
    char c;//保存运算符
    int temp;//随机生成0-3表示相应运算符
    srand((unsigned)time(NULL));//将当前时间设为随机函数种子
    temp=rand()%4;
    temp1=rand()%10;
    temp2=rand()%10;
    switch (temp)
{
        case 0://加法
            c='+';
            right=temp1+temp2;
            break;
        case 1://减法
            c='-';
            if(temp1<temp2)//结果非负
                swap(&temp1,&temp2);
            right=temp1-temp2;
            break;
        case 2://乘法
            c='*';
            right=temp1*temp2;
            break;
        case 3://除法
            c='/';
            if(temp1==0&&temp2==0)
            {//两运算数不能都是0
                do
               {
                    temp1=rand()%10;
                    temp2=rand()%10;
                }
            while(temp1||temp2);
            }
            if(temp1<temp2)//被除数应不小于除数
                swap(&temp1,&temp2);
            if(temp2==0||temp1%temp2){//除数不能是0且相除不能有余数
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
 
void swap(int *a,int *b)//交换数值
{
    int p=*a;
    *a=*b;
    *b=p;
}
 
void reverse(char str[],int n)//将数组逆转
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
