/***************************
*author:monkey
*blog:www.itlodge.net
*date:2012-8-7
***************************/

#include <stdio.h>

/*
 *fun:�������õ��ķ���
 *param: machineΪ�ַ����飬iΪ��ǰ��λ��
 *return:�õ��ķ���
 */
int get_left_score(char* machine,int i)
{
	int over = 0;		//�Ƿ����
	int total = 0;		//�õ��ķ���
	int j;
	for(j = i -1; !over && j >= 0; j--){
		if(machine[j] == '.'){
			total += 100;		//�õ�100�ֲ�����
			over = 1;
		}
		if(machine[j] == '|' || machine[j] == '\\'){	//����
			over = 1;
		}
	}
	if(j < 0 && !over){			//����ﵽ��β
		total += 100;
	}
	return total;
}

/*
 *fun:���ҹ���õ��ķ���
 *param: machineΪ�ַ����飬iΪ��ǰ��λ��,lengthΪmachine�ĳ���
 *return:�õ��ķ���
 */
int get_right_score(char* machine,int i,int length)
{
	int over = 0;			//�Ƿ����
	int total = 0;			//�õ��ķ���
	int j;
	for(j = i + 1; !over && j < length; j++){
		if(machine[j] == '.'){
			total += 100;			//�õ�100�ֲ�����
			over = 1;
		}
		if(machine[j] == '|' || machine[j] == '/'){		//����
			over = 1;
		}
	}
	if(j >= length && !over){		//����ﵽ��β
		total += 100;
	}	
	return total;
}

int main()
{
	char machine[80];		//���ᳬ��80��
	int length,sum;			//���Ⱥ͵õ��ķ���
	int i;
	
	while(scanf("%c",&machine[0]) && machine[0] != '#'){	//����#����
		for(i = 1; machine[i - 1] != '\n'; i++){		//��ȡһ��
			scanf("%c",&machine[i]);
		}
		length = i - 1;
		sum = 0;
		for(i = 0; i < length; i++){
			if(machine[i] == '.'){				//�ӵ�'.',��100��
				sum += 100;
			}else if(machine[i] == '/'){			//�����
				sum += get_left_score(machine,i);
			}else if(machine[i] == '\\'){			//���ҹ�
				sum += get_right_score(machine,i,length);
			}else if(machine[i] == '|'){
				sum += get_left_score(machine,i) / 2;			//���Ҷ�����
				sum += get_right_score(machine,i,length) / 2;
			}
		}
		printf("%d\n",sum / length);
	}
	
	return 0;
}