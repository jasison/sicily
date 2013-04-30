/***************************
*author:monkey
*blog:www.itlodge.net
*date:2012-8-7
***************************/

#include <stdio.h>

/*
 *fun:向左滚会得到的分数
 *param: machine为字符数组，i为当前的位置
 *return:得到的分数
 */
int get_left_score(char* machine,int i)
{
	int over = 0;		//是否结束
	int total = 0;		//得到的分数
	int j;
	for(j = i -1; !over && j >= 0; j--){
		if(machine[j] == '.'){
			total += 100;		//得到100分并结束
			over = 1;
		}
		if(machine[j] == '|' || machine[j] == '\\'){	//结束
			over = 1;
		}
	}
	if(j < 0 && !over){			//如果达到结尾
		total += 100;
	}
	return total;
}

/*
 *fun:向右滚会得到的分数
 *param: machine为字符数组，i为当前的位置,length为machine的长度
 *return:得到的分数
 */
int get_right_score(char* machine,int i,int length)
{
	int over = 0;			//是否结束
	int total = 0;			//得到的分数
	int j;
	for(j = i + 1; !over && j < length; j++){
		if(machine[j] == '.'){
			total += 100;			//得到100分并结束
			over = 1;
		}
		if(machine[j] == '|' || machine[j] == '/'){		//结束
			over = 1;
		}
	}
	if(j >= length && !over){		//如果达到结尾
		total += 100;
	}	
	return total;
}

int main()
{
	char machine[80];		//不会超过80个
	int length,sum;			//长度和得到的分数
	int i;
	
	while(scanf("%c",&machine[0]) && machine[0] != '#'){	//输入#结束
		for(i = 1; machine[i - 1] != '\n'; i++){		//读取一行
			scanf("%c",&machine[i]);
		}
		length = i - 1;
		sum = 0;
		for(i = 0; i < length; i++){
			if(machine[i] == '.'){				//扔到'.',加100分
				sum += 100;
			}else if(machine[i] == '/'){			//往左滚
				sum += get_left_score(machine,i);
			}else if(machine[i] == '\\'){			//往右滚
				sum += get_right_score(machine,i,length);
			}else if(machine[i] == '|'){
				sum += get_left_score(machine,i) / 2;			//左右都可能
				sum += get_right_score(machine,i,length) / 2;
			}
		}
		printf("%d\n",sum / length);
	}
	
	return 0;
}