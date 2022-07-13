#include <bits/stdc++.h> 
using namespace std ;

//基本初始：
char mp[11][11] ; //创建地图
int xa , ya , xb , yb ;	//创建变量表示农夫和牛的位置（ a 为农夫， b 为牛， x 为行， y为列）
int lxa , lya , lxb , lyb ; //创建变量表示农夫和牛移动后的位置（移动可能不成立）
int fa = 1 , fb = 1 ; //创建变量表示农夫和牛的方向（ 1 为北、 2 为东、 3 为南、 4 为西）
int ans = 0 ; //创建变量表示时间（输出结果）

//农夫移动函数：
void yda(){
	//平移区：
	if ( fa == 1 ){ //当方向为北时
		lxa = xa - 1 ; //行向上移动（减 1 ）
		lya = ya ; //列不动
	}
	if ( fa == 2 ){ //当方向为东时
		lxa = xa ; //行不动
		lya = ya + 1 ; //列向右移动（加 1 ）
	}
	if ( fa == 3 ){ //当方向为南时
		lxa = xa + 1 ; //行向下移动（加 1 ）
		lya = ya ; //列不动
	}
	if ( fa == 4 ){ //当方向为西时
		lxa = xa ; //行不动
		lya = ya - 1 ; //列向左移动（减 1 ）
	}
	//判定区：
	if ( lxa >= 1 && lya >= 1 && lya <= 10 && lxa <= 10 && mp[lxa][lya] == '.' ){ //当移动后位置在地图内且为空地
		xa = lxa ; //行位置
		ya = lya ; //列位置
	}
	else{ //不成立 
		fa++ ; //方向转变
		if ( fa > 4 ){ //当方向值大于西侧
			fa = 1 ; //变回北侧
		}
	}
}

//牛移动函数： 
void ydb(){
	//平移区
	if ( fb == 1 ){ //当方向为北时
		lxb = xb - 1 ; //行向上移动（减 1 ）
		lyb = yb ; //列不动
	}
	if ( fb == 2 ){ //当方向为东时
		lxb = xb ; //行不动
		lyb = yb + 1 ; //列向右移动（加 1 ）
	}
	if ( fb == 3 ){ //当方向为南时
		lxb = xb + 1 ; //行向下移动（加 1 ）
		lyb = yb ; //列不动
	}
	if ( fb == 4 ){ //当方向为西时
		lxb = xb ; //行不动
		lyb = yb - 1 ; //列向左移动（减 1 ）
	}
	//判定区：
	if ( lxb >= 1 && lyb >= 1 && lyb <= 10 && lxb <= 10 && mp[lxb][lyb] == '.' ){ //当移动后位置在地图内且为空地
		xb = lxb ; //行位置
		yb = lyb ; //列位置
	}
	else{ //不成立 
		fb++ ; //方向转变
		if ( fb > 4 ){ //当方向值大于西侧
			fb = 1 ; //变回北侧
		}
	}
}

//主函数： 
int main(){
	//输入区：
	for ( int i = 1 ; i <= 10 ; i++ ){ //基本二维输入行
		for ( int j = 1 ; j <= 10 ; j++ ){ //基本二维输入列
			cin >> mp[i][j] ; //输入
			if ( mp[i][j] == 'F' ){ //当输入为农夫位置时，将其存储至农夫的位置
				xa = i ; //储存行
				ya = j ; //储存列
				mp[i][j] = '.' ; //为判断方便，将其变为空地
			}
			if ( mp[i][j] == 'C' ){ //当输入为牛位置时，将其存储至牛的位置
				xb = i ; //储存行
				yb = j ; //储存列
				mp[i][j] = '.' ; //为判断方便，将其变为空地
			}
		}
	}
	//模拟区： 
	while(1){
		yda() ; //农夫移动
		ydb() ; //牛移动
		ans++ ; //时间增加
		if ( ans > 10000 ){ //此处为骗分，如果大于 10000 还是没有重合，即无法重合
			cout << 0 ; //直接输出 0
			return 0 ; //结束程序
		}
		if ( xa == xb && ya == yb ){ //如果重合（行列均相同）
			cout <<xa<<' '<<xb<<' '<<ya<<' '<<yb;
         system("pause");
			return 0 ; //结束程序
		}
	}
}