
/*��˹�����ڣ�1777��4��30�ա�

�ڸ�˹���ֵ�һ����Ҫ������ռ��ϱ�ע�ţ�5343��
��˿���������ǣ�1791��12��15�ա�

��˹��ò�ʿѧλ�������ռ��ϱ��ţ�8113   

���������˹��ò�ʿѧλ�������ա�*/

#include<stdio.h>
#define MONTH 12
int ifleapyear(int year){
	if(year%4==0&&year%100==0||year%400==0)
	    return 29;
	else 
	    return 28;
}
int main(){
	int year=1791,n=2770;
	int array[MONTH]={31,0,31,30,31,30,31,31,30,31,30,31};
	int month=12,day=15;
	while(1)
	{
		day++;
		if (day>array[month]){
		    month++;
		    
		    day=1;
	    }
		if(month>12){
		    year++;
		    array[1]=ifleapyear(year);
		    month=1;
	    }
		n--;
		if(n==0)
		    break;
		
		
		
	}
		
	printf("%d-%d-%d",year,month,day);
	return 0;
}

